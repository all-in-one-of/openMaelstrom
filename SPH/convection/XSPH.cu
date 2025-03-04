#define NEW_STYLE
#include <SPH/convection/XSPH.cuh>
#include <utility/include_all.h>

// This function implements the artificial viscosity from XSPH, and additionally adds a stronger
// viscosity if a particles lifetime is negative. This is only the case for particles created with
// splitting which results in an additional layer of blending on top of the normal one. Contrary to
// the normal velocity blending this method basically blends the velocity of split particles with
// all surrounding particles which helps dampen the effects caused by density errors on splitting.
neighFunctionType xsph_viscosity(SPH::XSPH::Memory arrays) {
  checkedParticleIdx(i);
  cache_arrays((pos, position), (vol, volume), (vel, velocity.first), (den, density));

  auto beta_i = getBlendWeight(arrays, i);

  auto sum = vel[i] - arrays.xsph_viscosity * 0.25f * ( beta_i)* vel[i] * SWH::spline4(pos[i], arrays);

  iterateNeighbors(j) {
    auto beta_j = getBlendWeight(arrays, j); 
    auto beta_ij = 0.5f * (beta_i + beta_j);
    auto viscosity_constant = arrays.xsph_viscosity * (1.f + beta_ij);

    sum += viscosity_constant * vol[j] / den[j] * (vel[j] - vel[i]) * W_ij; 
  }
  arrays.velocity.second[i] = sum;
}

neighFunction(xsphViscosity, xsph_viscosity, "XSPH Viscosity", caches<float4, float4, float, float>{});

void SPH::XSPH::viscosity(Memory mem) {
  launch<xsphViscosity>(mem.num_ptcls, mem);
  info<arrays::velocity>().swap();
}

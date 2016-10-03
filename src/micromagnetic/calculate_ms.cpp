
// Vampire headers
#include "micromagnetic.hpp"

// micromagnetic module headers
#include "internal.hpp"

namespace micromagnetic
{
   namespace internal
   {
      std::vector<double> calculate_ms(const int num_atoms, const int num_cells, std::vector<double> magnetic_moment_array, std::vector<int> cell_array)
      {
         std::vector<double> ms(num_cells,0.0);
         for (int i = 0; i < num_atoms; i++)
         {
            ms[cell_array[i]] = ms[cell_array[i]] + magnetic_moment_array[i];
         }
         return ms;
      }
   }
}

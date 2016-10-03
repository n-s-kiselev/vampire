// Vampire headers
#include "micromagnetic.hpp"

// micromagnetic module headers
#include "internal.hpp"

namespace micromagnetic
{
   namespace internal
   {

      std::vector<double> calculate_ku(const int num_atoms, const int num_cells, std::vector<int>  cell_array, std::vector<double> anisotropy_array){

         std::vector<double> ku(num_cells,0.0);
         for (int i = 0; i < num_atoms; i++)
         {
            ku[cell_array[i]] = ku[cell_array[i]] + anisotropy_array[i];
         }
         return ku;
      }
   }
}

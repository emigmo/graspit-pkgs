#ifndef GRASP_PLANNING_GRASPIT_GRASPITTYPES_H
#define GRASP_PLANNING_GRASPIT_GRASPITTYPES_H
/**
   Helper for graspit transforms.

   Copyright (C) 2016 Jennifer Buehler

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
*/

#include <Eigen/Core>
#include <Eigen/Geometry>

namespace GraspIt
{

/**
 * A 4x4 matrix as Eigen::Transform object
 */
typedef Eigen::Transform<double, 3, Eigen::Affine> EigenTransform;



};  // namespace GraspIt

#endif  // GRASP_PLANNING_GRASPIT_GRASPITTYPES_H

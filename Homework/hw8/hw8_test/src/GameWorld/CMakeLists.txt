cmake_minimum_required(VERSION 3.16)

add_library(
  GameWorld
  STATIC
  GameWorld.hpp
  GameWorld.cpp
)

target_link_libraries(
  GameWorld
  GameObject
  Framework
  Background
  Sun
  Seed
  Planting_Spot
)

target_include_directories(
  GameWorld
  PUBLIC 
  ${CMAKE_SOURCE_DIR}/src/
  ${CMAKE_SOURCE_DIR}/src/GameWorld/
  ${CMAKE_SOURCE_DIR}/src/GameObject/
  ${CMAKE_SOURCE_DIR}/src/Framework/
  ${CMAKE_SOURCE_DIR}/src/Background/
  ${CMAKE_SOURCE_DIR}/src/Sun/
  ${CMAKE_SOURCE_DIR}/src/Seed/
  ${CMAKE_SOURCE_DIR}/src/Planting_Spot/
)

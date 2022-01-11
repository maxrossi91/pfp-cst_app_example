include(FetchContent)

## Add pfp-cst
FetchContent_Declare(
  pfp_cst
  GIT_REPOSITORY https://github.com/maxrossi91/pfp-cst.git
  )
  
FetchContent_GetProperties(pfp_cst)
if(NOT pfp_cst_POPULATED)
  FetchContent_Populate(pfp_cst)
  add_subdirectory(${pfp_cst_SOURCE_DIR} ${pfp_cst_BINARY_DIR})
endif()
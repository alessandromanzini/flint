include( get_ms_timestamp )

# TODO: make this work
function( update_submodules )
    #
    find_package( Git QUIET )
    if( GIT_FOUND AND EXISTS "${CMAKE_SOURCE_DIR}/.git" )
        message( STATUS "Git found, updating submodules..." )
        #
        get_ms_timestamp( T_START_MS )
        #
        execute_process(
                COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} )
        #
        #
        # ========================================
        # LOG STATUS
        # ========================================
        #
        get_ms_timestamp( T_END_MS )
        math( EXPR T_ELAPSED_MS "(${T_END_MS} - ${T_START_MS})" )
        message( STATUS "Updating submodules done (${T_ELAPSED_MS}ms)" )
    endif()
    #
endfunction()
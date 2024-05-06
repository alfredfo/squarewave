project(
    'squarewave',
    'c',
    meson_version: '>=1.3.0',
    default_options: ['c_std=c17'],
)

squarewave_src = []
squarewave_includes = []

subdir('src')

squarewave = executable(
    'squarewave',
    squarewave_src,
    include_directories: squarewave_includes,
)

prog_objcopy = find_program('objcopy')

input_bfdname = meson.get_external_property('input_bfdname')

custom_target(
    'squarewave_srecord',
    build_by_default: true,
    output: 'squarewave.s19',
    input: squarewave,
    command: [
        prog_objcopy,
        '-I' + input_bfdname,
        '@INPUT@',
        '-Osrec', '@OUTPUT@',
    ],
)

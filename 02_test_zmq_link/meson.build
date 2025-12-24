zmq_dep = dependency('libzmq', required: true)

lib_include = include_directories('../lib')

executable(
    '02_test_zmq_link',
    'main.cpp',
    include_directories : lib_include,
    dependencies : zmq_dep,
    install : false
)
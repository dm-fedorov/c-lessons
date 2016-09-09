from distutils.core import setup, Extension

module1 = Extension( 'ownmod', sources = ['ownmod.c'] )

setup( name = 'ownmod',
       version = '1.1',
       description = 'This is a first package',
       ext_modules = [module1]
     )

from conan import ConanFile
from conan.tools.scons import SConsDeps


class Pkg(ConanFile):
    generators = "SConsDeps"


class App(ConanFile):
    settings = "os", "arch", "compiler", "build_type"

    def generate(self):
        tc = SConsDeps(self)
        tc.generate()

    def requirements(self):
        self.requires("raylib/5.5")

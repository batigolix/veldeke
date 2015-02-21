; veldeke make file for local development
core = "7.x"
api = "2"

projects[drupal][version] = "7.34"
; include the d.o. profile base
includes[] = "drupal-org.make"

; +++++ TODO modules without versions +++++



; Download the install profile and recursively build all its dependencies
projects[veldeke][type] = "profile"
projects[veldeke][download][type] = "git"
projects[veldeke][download][url] = "git@github.com:batigolix/veldeke.git"
projects[veldeke][download][branch] = "master"

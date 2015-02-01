api = 2
core = 7.x

; core
projects[drupal][type] = core

; drupalaton_profile 
projects[drupalaton][type] = profile
projects[drupalaton][download][type] = git
projects[drupalaton][download][url] = https://github.com/csakiistvan/drupalaton_profile.git
projects[drupalaton][download][branch] = master
projects[drupalaton][directory_name] = drupalaton_profile

; Contrib modules
projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc4
projects[email][subdir] = contrib
projects[email][version] = 1.3
projects[entityform][subdir] = contrib
projects[entityform][version] = 1.4
projects[job_scheduler][subdir] = contrib
projects[job_scheduler][version] = 2.0-alpha3
projects[rules][subdir] = contrib
projects[rules][version] = 2.7
projects[features][subdir] = contrib
projects[features][version] = 2.0
projects[views][subdir] = contrib
projects[views][version] = 3.8
projects[ctools][subdir] = contrib
projects[ctools][version] = 1.4
projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0
projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = 2.8
projects[browserclass][subdir] = contrib
projects[browserclass][version] = 1.7
projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = 2.4
projects[token][subdir] = contrib
projects[token][version] = 1.5
projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2
projects[transliteration][subdir] = contrib
projects[transliteration][version] = 3.2
projects[custom_pub][subdir] = contrib
projects[custom_pub][version] = 1.3
projects[diff][subdir] = contrib
projects[diff][version] = 3.2
projects[panels][version] = 3.4
projects[panels][subdir] = contrib
projects[codefilter][version] = 1.1
projects[codefilter][subdir] = contrib
projects[google_analytics][version] = 1.4
projects[google_analytics][subdir] = contrib
projects[nodequeue][version] = 2.0-beta1
projects[nodequeue][subdir] = contrib
projects[features_extra][version] = 1.0-beta1
projects[features_extra][subdir] = contrib
projects[module_filter][version] = 2.0-alpha2
projects[module_filter][subdir] = contrib
projects[metatag][version] = 1.0-beta9
projects[metatag][subdir] = contrib
projects[entity][version] = 1.5
projects[entity][subdir] = contrib
projects[profile2][version] = 1.3
projects[profile2][subdir] = contrib
projects[link][version] = 1.2
projects[link][subdir] = contrib
projects[field_group][version] = 1.4
projects[field_group][subdir] = contrib
projects[feeds][version] = 2.0-alpha8
projects[feeds][subdir] = contrib

; User interface
projects[ckeditor][type] = "module"
projects[ckeditor][subdir] = "contrib"
projects[ckeditor][download][type] = "git"
projects[ckeditor][download][url] = "http://git.drupal.org/project/ckeditor.git"

; Use Libraries API for ckeditor.
; http://drupal.org/node/1063482#comment-6964504
projects[ckeditor][download][branch] = "7.x-1.x"
projects[ckeditor][download][revision] = "f6abbda"

; Fatal error if Libraries module is enabled after CKEditor
; http://drupal.org/node/1898294#comment-6980796
projects[ckeditor][patch][] = "http://drupal.org/files/ckeditor-install-lib-1898294-2.patch"

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.0/ckeditor_4.0_standard.tar.gz"
libraries[ckeditor][type] = "libraries"

libraries[respond][download][type] = "get"
libraries[respond][download][url] = "https://github.com/scottjehl/Respond/archive/master.zip"
libraries[respond][destination] = "../../profiles/drupalaton_profile/themes/drupalaton_theme/lib"

projects[sass_bootstrap][type] = library
projects[sass_bootstrap][download][type] = git
projects[sass_bootstrap][download][url] = https://github.com/twbs/bootstrap-sass
projects[sass_bootstrap][download][revision] = 0d25afc31914c4d31a3129b1b1bc3d8fc254824b
projects[sass_bootstrap][destination] = "../../profiles/drupalaton_profile/themes/drupalaton_theme/lib"
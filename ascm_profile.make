; Makefile for ASCM.

; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.

core = 7.x

; API version
; ------------
; Every makefile needs to declare its Drush Make API version. This version of
; drush make uses API version `2`.

api = 2

; Core project
; ------------
; In order for your makefile to generate a full Drupal site, you must include
; a core project. This is usually Drupal core, but you can also specify
; alternative core projects like Pressflow. Note that makefiles included with
; install profiles *should not* include a core project.

; Drupal 7.x. Requires the `core` property to be set to 7.x.
projects[drupal][version] = 7

; Modules
; --------

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][type] = "module"
projects[admin_menu][version] = "3.0-rc4"

projects[backup_migrate][subdir] = "contrib"
projects[backup_migrate][type] = "module"
projects[backup_migrate][version] = "2.4"

projects[civicrm_starterkit][subdir] = "contrib"
projects[civicrm_starterkit][type] = "module"
projects[civicrm_starterkit][download][type] = "git"
projects[civicrm_starterkit][download][url] = "http://git.drupal.org/project/civicrm_starterkit.git"

projects[features][subdir] = "contrib"
projects[features][type] = "module"
projects[features][version] = "1.0"

projects[profiler][subdir] = "contrib"
projects[profiler][type] = "module"
projects[profiler][version] = "2.0-beta1"

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][type] = "module"
projects[wysiwyg][version] = "2.2"
projects[wysiwyg][patch][] = "http://drupal.org/files/wysiwyg-support_v4_ckeditor-1853550-73.patch"

; Themes
; --------

projects[omega][subdir] = "contrib"
projects[omega][type] = "theme"
projects[omega][version] = "3.1"

; Libraries
; ---------

libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.0/ckeditor_4.0_full.tar.gz"

libraries[profiler][type] = "libraries"
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta1.tar.gz"


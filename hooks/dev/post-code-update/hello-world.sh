#!/bin/sh
#
# This run an automatic drush make every push, which deploy the new modules.
# test test

site="$1"
target_env="$2"
root_directory=$(drush @$site.$target_env status --fields=root --field-labels=0 | tr -d ' ')
echo "Path:$root_directory/profiles/drupalaton/drupalaton_profile/drupalaton_profile.make"

#drush @$site.$target_env make "$root_directory/profiles/drupalaton_profile/drupalaton_profile.make" --yes


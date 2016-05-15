
## Installation

1. Setup a Firebase instance - Use firebase.com
2. Import architecture - See example import
2. Add custom badges - See structure
3. Enable module - Via drush or Drupal UI
4. Set credentials and admin options - admin/config/services/firebadges

## Local development

To while making code changes to the Deft library, it's best use a symlink to
the local location of the repo rather than a Git submodule. Adjust where Drupal
looks for the file with this setting...

`$conf['firebadges_library'] = 'js/deft.dev.js';`

Add a symlink in the module root, and a line in your site root .gitignore file.

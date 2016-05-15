/**
 * Client-side badging system via Deft.
 *
 * https://github.com/tableau-mkt/deft
 */

/* jshint curly:false */
/* globals Deft */

(function($, module) {

  /**
   * Drupal behavior.
   *
   * @todo Disable for old browser (skip Polyfill).
   */
  module.attach = function (context, settings) {
    // Ajax protection.
    if (context !== document) return;
    // Instantiate.
    module.Deft = Deft.init(settings.fireBadges.publicKey);
  };

})(jQuery, Drupal.behaviors.fireBadges || {});

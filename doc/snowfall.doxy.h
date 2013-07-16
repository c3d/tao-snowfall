/**
 * @~english
 * @taomoduledescription{Snowfall, Snowfall}
 *
 * <tt>import Snowfall</tt> - Snowfall effect.\n
 *
 * This module allows to add a nice snowfall effect in your presentations.
 *
 * For instance, the following short code create easily a simulation of snowfall with some wind.
 *
 * @include snowfall.ddd
 *
 * Here is a screen capture of this document:
 * @image html "snowfall.png" "Snowfall"
 *
 * @endtaomoduledescription{Snowfall}
 *
 * @~french
 * @taomoduledescription{Snowfall, Neige tombante}
 *
 * <tt>import Snowfall</tt> - Effet de neige tombante.\n
 *
 * Ce module permet d'ajouter un joli effet de neige tombante dans vos présentations.
 *
 * Par exemple, le code court suivant permet de créer facilement une simulation de neige tombante avec un peu de vent.
 *
 * @include snowfall.ddd
 *
 * Ci-dessous, une capture d'écran issue du document précédent:
 * @image html "snowfall.png" "Neige tombante"
 *
 * @endtaomoduledescription{Snowfall}
 * @~
 * @{
 */


/**
 * @~english
 * Apply the snowfall effect.
 * Allows to add a nice snowfall effect in a presentation.
 *
 * @param V Snowflake velocity (higher or equal to 0).
 * @param S Snowflake size (higher or equal to 0). It corresponds to an average size.
 * @param N Snowflakes number (higher or equal to 0).
 *
 * @~french
 * Applique un effet de neige tombante.
 * Permet d'ajouter un effet de neige tombante dans une présentation.
 *
 * @param V Vitesse d'un flocon de neige (Supérieur ou égale à 0).
 * @param S Taille d'un flocon de neige (Supérieur ou égale à 0). Il s'agit ici d'une taille de flocon moyenne.
 * @param N Nombre de flocons de neige (Supérieur ou égale à 0).
 */
snowfall(V:real, S:real, N:integer);


/**
 * @~english
 * Apply the snowfall effect.
 * Allows to add easily a nice snowfall effect into a presentation.
 *
 * This is shortcut to the following code:
 @code
 snowfall 2.0, 6.0, 7000.0
 @endcode
 *
 * @~french
 * Intègre un effet de neige tombante dans la présentation.
 * Permet d'ajouter facilement un joli effet de neige tombante
 * dans une présentation.
 *
 * Cette fonction est un raccourci au code suivant:
@code
snowfall 2.0, 6.0, 7000.0
@endcode
 *
 */
snowfall();


/**
 * @~english
 * Set the snowflake image.
 * Allows to change the snowflake image used to simulate snowfall.
 * By default, this effect uses a  snowflake image provided with
 * the module.
 *
 * @param T The new snowflake image.
 *
 * @~french
 * Définit l'image de flocon de neige.
 * Permet de changer l'image de flocon de neige utilisé pour simuler la neige
 * tombante.
 * Par défaut, cet effet utilise une image de flocon de neige
 * fournit avec le module.
 *
 * @param T La nouvelle image de flocon de neige.
 */
snowflake(T:text);


/**
 * @~english
 * Apply wind to the snowfall effect.
 * Allows to add wind with strength @p S to the snowfall effect.
 * A value of -1.0 corresponds to a wind going from the right to the left and
 * a value of 1.0 is the other direction.
 *
 * @param S Strength of the wind, in the range -1.0 to 1.0.
 *
 * @~french
 * Ajoute du vent à l'effet de neige tombante.
 * Permet d'ajouter un peu vent à l'effet de neige tombante.
 * Une valeur de -1.0 correspond à un vent allant de droite vers la gauche
 * et une valeur de 1.0 correspond à l'autre sens.
 *
 * @param S Force du vent, entre -1.0 et 1.0.
 */
snowwind(S:text);

/**
 * @}
 */

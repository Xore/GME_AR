/** @ingroup Editor_Entities
*/

/*!
The entity which enables all editor functionality for the player.

- It's **created by SCR_EditorManagerCore** when a player connects.
 + Every player receives one.
- In multiplayer, the entity is **local to the player**.
 + This is required to allow communication with server (see Replication for more details).
 + Requires RplComonent to function.
- This entity handles **only barebone editor functionality**, like access rules, or opening and closing.
- Everything else, like camera or menu handling, must be on specialized editor modes (SCR_EditorModeEntity) and components (SCR_BaseEditorComponent)!
- Editor can have a limitied state, influenced by its modes and checked by IsLimited() function:
 + Editor is **limited** if all its modes are.
 + If at least one mode is unlimited, the editor is **unlimited** as well.
 + The state influences behavior of certain components, e.g., photo mode camera movement may be restricted if the editor is limited.
 + As a rule of thumb, unlimited state means that player can ***cheat*** with the editor.
- Default editor manager prefab is defined in SCR_EditorManagerCore (config is Configs/Core folder).
*/
modded class SCR_EditorManagerEntity : SCR_EditorBaseEntity
{
};
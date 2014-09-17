// Autogenerated by gameplay-luagen
#ifndef LUA_NODE_H_
#define LUA_NODE_H_

namespace gameplay
{

// Lua bindings for Node.
int lua_Node__gc(lua_State* state);
int lua_Node_addChild(lua_State* state);
int lua_Node_addListener(lua_State* state);
int lua_Node_addRef(lua_State* state);
int lua_Node_addScript(lua_State* state);
int lua_Node_addScriptCallback(lua_State* state);
int lua_Node_clearScripts(lua_State* state);
int lua_Node_clone(lua_State* state);
int lua_Node_createAnimation(lua_State* state);
int lua_Node_createAnimationFromBy(lua_State* state);
int lua_Node_createAnimationFromTo(lua_State* state);
int lua_Node_destroyAnimation(lua_State* state);
int lua_Node_findNode(lua_State* state);
int lua_Node_getActiveCameraTranslationView(lua_State* state);
int lua_Node_getActiveCameraTranslationWorld(lua_State* state);
int lua_Node_getAgent(lua_State* state);
int lua_Node_getAnimation(lua_State* state);
int lua_Node_getAnimationPropertyComponentCount(lua_State* state);
int lua_Node_getAnimationPropertyValue(lua_State* state);
int lua_Node_getAudioSource(lua_State* state);
int lua_Node_getBackVector(lua_State* state);
int lua_Node_getBoundingSphere(lua_State* state);
int lua_Node_getCamera(lua_State* state);
int lua_Node_getChildCount(lua_State* state);
int lua_Node_getCollisionObject(lua_State* state);
int lua_Node_getDownVector(lua_State* state);
int lua_Node_getFirstChild(lua_State* state);
int lua_Node_getForm(lua_State* state);
int lua_Node_getForwardVector(lua_State* state);
int lua_Node_getForwardVectorView(lua_State* state);
int lua_Node_getForwardVectorWorld(lua_State* state);
int lua_Node_getId(lua_State* state);
int lua_Node_getInverseTransposeWorldMatrix(lua_State* state);
int lua_Node_getInverseTransposeWorldViewMatrix(lua_State* state);
int lua_Node_getInverseViewMatrix(lua_State* state);
int lua_Node_getInverseViewProjectionMatrix(lua_State* state);
int lua_Node_getLeftVector(lua_State* state);
int lua_Node_getLight(lua_State* state);
int lua_Node_getMatrix(lua_State* state);
int lua_Node_getModel(lua_State* state);
int lua_Node_getNextSibling(lua_State* state);
int lua_Node_getParent(lua_State* state);
int lua_Node_getParticleEmitter(lua_State* state);
int lua_Node_getPreviousSibling(lua_State* state);
int lua_Node_getProjectionMatrix(lua_State* state);
int lua_Node_getRefCount(lua_State* state);
int lua_Node_getRightVector(lua_State* state);
int lua_Node_getRightVectorWorld(lua_State* state);
int lua_Node_getRootNode(lua_State* state);
int lua_Node_getRotation(lua_State* state);
int lua_Node_getScale(lua_State* state);
int lua_Node_getScaleX(lua_State* state);
int lua_Node_getScaleY(lua_State* state);
int lua_Node_getScaleZ(lua_State* state);
int lua_Node_getScene(lua_State* state);
int lua_Node_getTag(lua_State* state);
int lua_Node_getTerrain(lua_State* state);
int lua_Node_getTranslation(lua_State* state);
int lua_Node_getTranslationView(lua_State* state);
int lua_Node_getTranslationWorld(lua_State* state);
int lua_Node_getTranslationX(lua_State* state);
int lua_Node_getTranslationY(lua_State* state);
int lua_Node_getTranslationZ(lua_State* state);
int lua_Node_getType(lua_State* state);
int lua_Node_getTypeName(lua_State* state);
int lua_Node_getUpVector(lua_State* state);
int lua_Node_getUpVectorWorld(lua_State* state);
int lua_Node_getViewMatrix(lua_State* state);
int lua_Node_getViewProjectionMatrix(lua_State* state);
int lua_Node_getWorldMatrix(lua_State* state);
int lua_Node_getWorldViewMatrix(lua_State* state);
int lua_Node_getWorldViewProjectionMatrix(lua_State* state);
int lua_Node_hasScriptListener(lua_State* state);
int lua_Node_hasTag(lua_State* state);
int lua_Node_isActive(lua_State* state);
int lua_Node_isActiveInHierarchy(lua_State* state);
int lua_Node_isStatic(lua_State* state);
int lua_Node_release(lua_State* state);
int lua_Node_removeAllChildren(lua_State* state);
int lua_Node_removeChild(lua_State* state);
int lua_Node_removeListener(lua_State* state);
int lua_Node_removeScript(lua_State* state);
int lua_Node_removeScriptCallback(lua_State* state);
int lua_Node_rotate(lua_State* state);
int lua_Node_rotateX(lua_State* state);
int lua_Node_rotateY(lua_State* state);
int lua_Node_rotateZ(lua_State* state);
int lua_Node_scale(lua_State* state);
int lua_Node_scaleX(lua_State* state);
int lua_Node_scaleY(lua_State* state);
int lua_Node_scaleZ(lua_State* state);
int lua_Node_set(lua_State* state);
int lua_Node_setActive(lua_State* state);
int lua_Node_setAgent(lua_State* state);
int lua_Node_setAnimationPropertyValue(lua_State* state);
int lua_Node_setAudioSource(lua_State* state);
int lua_Node_setCamera(lua_State* state);
int lua_Node_setCollisionObject(lua_State* state);
int lua_Node_setForm(lua_State* state);
int lua_Node_setId(lua_State* state);
int lua_Node_setIdentity(lua_State* state);
int lua_Node_setLight(lua_State* state);
int lua_Node_setModel(lua_State* state);
int lua_Node_setParticleEmitter(lua_State* state);
int lua_Node_setRotation(lua_State* state);
int lua_Node_setScale(lua_State* state);
int lua_Node_setScaleX(lua_State* state);
int lua_Node_setScaleY(lua_State* state);
int lua_Node_setScaleZ(lua_State* state);
int lua_Node_setTag(lua_State* state);
int lua_Node_setTerrain(lua_State* state);
int lua_Node_setTranslation(lua_State* state);
int lua_Node_setTranslationX(lua_State* state);
int lua_Node_setTranslationY(lua_State* state);
int lua_Node_setTranslationZ(lua_State* state);
int lua_Node_static_ANIMATE_ROTATE(lua_State* state);
int lua_Node_static_ANIMATE_ROTATE_TRANSLATE(lua_State* state);
int lua_Node_static_ANIMATE_SCALE(lua_State* state);
int lua_Node_static_ANIMATE_SCALE_ROTATE(lua_State* state);
int lua_Node_static_ANIMATE_SCALE_ROTATE_TRANSLATE(lua_State* state);
int lua_Node_static_ANIMATE_SCALE_TRANSLATE(lua_State* state);
int lua_Node_static_ANIMATE_SCALE_UNIT(lua_State* state);
int lua_Node_static_ANIMATE_SCALE_X(lua_State* state);
int lua_Node_static_ANIMATE_SCALE_Y(lua_State* state);
int lua_Node_static_ANIMATE_SCALE_Z(lua_State* state);
int lua_Node_static_ANIMATE_TRANSLATE(lua_State* state);
int lua_Node_static_ANIMATE_TRANSLATE_X(lua_State* state);
int lua_Node_static_ANIMATE_TRANSLATE_Y(lua_State* state);
int lua_Node_static_ANIMATE_TRANSLATE_Z(lua_State* state);
int lua_Node_static_create(lua_State* state);
int lua_Node_static_isTransformChangedSuspended(lua_State* state);
int lua_Node_static_resumeTransformChanged(lua_State* state);
int lua_Node_static_suspendTransformChanged(lua_State* state);
int lua_Node_transformPoint(lua_State* state);
int lua_Node_transformVector(lua_State* state);
int lua_Node_translate(lua_State* state);
int lua_Node_translateForward(lua_State* state);
int lua_Node_translateLeft(lua_State* state);
int lua_Node_translateSmooth(lua_State* state);
int lua_Node_translateUp(lua_State* state);
int lua_Node_translateX(lua_State* state);
int lua_Node_translateY(lua_State* state);
int lua_Node_translateZ(lua_State* state);
int lua_Node_update(lua_State* state);

void luaRegister_Node();

}

#endif

struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

}

void RegisterAllClasses()
{
	//Total: 55 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//5. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//6. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//7. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//8. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//9. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//10. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//11. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//12. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//13. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//14. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//15. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//16. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//19. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//20. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//21. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//22. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//23. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//24. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//25. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//26. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//27. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//28. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//29. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//30. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//31. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//32. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//33. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//34. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//35. PolygonCollider2D
	void RegisterClass_PolygonCollider2D();
	RegisterClass_PolygonCollider2D();

	//36. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//37. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//38. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//39. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//40. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//41. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//42. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//43. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//44. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//45. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//46. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//47. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//48. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//49. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//50. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//51. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//52. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//53. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//54. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}

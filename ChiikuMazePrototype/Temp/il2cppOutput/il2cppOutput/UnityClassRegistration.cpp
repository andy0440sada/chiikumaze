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

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 56 classes
	//0. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//6. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//7. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//8. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//9. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//10. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//11. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//12. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//13. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//14. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//15. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//16. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//17. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//18. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//19. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//20. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//21. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//22. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//23. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//24. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//25. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//26. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//27. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//28. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//29. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//30. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//31. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//32. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//33. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//34. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//35. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//36. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//37. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//38. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//39. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//40. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//41. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//42. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//43. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//44. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//45. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//46. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//47. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//48. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//49. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//50. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//51. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//52. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//53. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//54. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//55. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}

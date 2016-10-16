struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 94 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//9. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//10. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//11. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//12. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//13. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//14. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//15. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//16. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//17. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//18. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//19. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//20. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//21. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//22. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//23. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//24. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//25. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//26. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//27. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//28. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//29. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//30. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//31. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//32. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//33. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//34. WheelCollider
	void RegisterClass_WheelCollider();
	RegisterClass_WheelCollider();

	//35. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//36. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//37. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//38. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//39. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//40. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//41. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//42. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//43. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//44. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//45. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//46. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//47. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//48. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//49. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//50. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//51. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//52. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//53. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//54. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//55. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//56. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//57. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//58. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//59. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//60. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//61. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//62. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//63. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//64. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//65. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//66. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//67. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//68. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//69. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//70. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//71. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//72. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//73. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//74. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//75. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//76. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//77. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//78. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//79. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//80. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//81. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//82. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//83. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//84. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//85. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//86. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//87. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//88. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//89. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//90. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//91. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//92. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

	//93. NavMeshSettings
	void RegisterClass_NavMeshSettings();
	RegisterClass_NavMeshSettings();

}

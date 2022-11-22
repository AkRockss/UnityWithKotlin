#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Comparison`1<SimpleFileBrowser.FileSystemEntry>
struct Comparison_1_tD0184181699C9E717D5069660C1EF33B877FD61B;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,SimpleFileBrowser.ListItem>
struct Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>
struct Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516;
// System.Collections.Generic.HashSet`1<System.Char>
struct HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,SimpleFileBrowser.ListItem>
struct KeyCollection_tA110B45915580EC82EF5D9F3B41A62C1AC3AA4E9;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<SimpleFileBrowser.FileBrowserItem>
struct List_1_t4563CEAEB7C1CC77CFDFF2A1C1B0F495EE33A3D3;
// System.Collections.Generic.List`1<SimpleFileBrowser.FileSystemEntry>
struct List_1_t5D818DED56F6D90F2F1BC32567F7A20945EE6926;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.List`1<SimpleFileBrowser.FileBrowser/Filter>
struct List_1_t41AC3278D2B1F612D8B9C42513868B158DA959CA;
// System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem>
struct Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,SimpleFileBrowser.ListItem>
struct ValueCollection_t81AA8F06756884E0F571D22D25FD0788CBBF2BE2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,SimpleFileBrowser.ListItem>[]
struct EntryU5BU5D_t0A1AA637FA7D96A5E8927595165ED07BCFACA42C;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// SimpleFileBrowser.FileSystemEntry[]
struct FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D;
// System.IO.FileSystemInfo[]
struct FileSystemInfoU5BU5D_tF7D37070CBD32AA8FF200811C4906E3543061AE7;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// SimpleFileBrowser.ListItem[]
struct ListItemU5BU5D_tB0F5D8FE67ECF6415FEDA6317AF71EB006DC9DAE;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// SimpleFileBrowser.FileBrowser/FiletypeIcon[]
struct FiletypeIconU5BU5D_tAD309595CE0584F6422CF8090A71D8C44633BFD8;
// SimpleFileBrowser.FileBrowser/QuickLink[]
struct QuickLinkU5BU5D_tE49D5698C6FA56F69A8CA1F5E267D1EDE4CE2E44;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// BayatGames.Serialization.Formatters.Json.Examples.Example01
struct Example01_tF43994A55846837C8C71759579DA90606A3E4486;
// BayatGames.Serialization.Formatters.Json.Examples.Example02
struct Example02_tCCAC9901C56A53B9C44F5D615DBBEE338701BF4E;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// SimpleFileBrowser.FileBrowser
struct FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC;
// SimpleFileBrowser.FileBrowserContextMenu
struct FileBrowserContextMenu_t80E73A074B4D276E4A27A7557C00988732BE6B23;
// SimpleFileBrowser.FileBrowserCursorHandler
struct FileBrowserCursorHandler_t6D8D15963F508CBDE7F9C98D2CBF39F23D8BADBB;
// SimpleFileBrowser.FileBrowserDeleteConfirmationPanel
struct FileBrowserDeleteConfirmationPanel_tA7515B8CE379572856152113B0BB808555ACA6B6;
// SimpleFileBrowser.FileBrowserItem
struct FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98;
// SimpleFileBrowser.FileBrowserMovement
struct FileBrowserMovement_t9BBE2FB80BBD18B9EB928D109A816EA2646D3EB7;
// SimpleFileBrowser.FileBrowserQuickLink
struct FileBrowserQuickLink_t306165881C5444A33F8F9801FE571444CCD52183;
// SimpleFileBrowser.FileBrowserRenamedItem
struct FileBrowserRenamedItem_tB7E8EAF76EC4BA1F717E321523EC2E21A8A7A6E1;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// System.Runtime.Serialization.FormatterConverter
struct FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// SimpleFileBrowser.IListViewAdapter
struct IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// BayatGames.Serialization.Formatters.Json.JsonFormatter
struct JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A;
// BayatGames.Serialization.Formatters.Json.JsonReader
struct JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17;
// BayatGames.Serialization.Formatters.Json.JsonTextReader
struct JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474;
// BayatGames.Serialization.Formatters.Json.JsonTextWriter
struct JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD;
// BayatGames.Serialization.Formatters.Json.JsonWriter
struct JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9;
// SimpleFileBrowser.ListItem
struct ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// SimpleFileBrowser.NonDrawingGraphic
struct NonDrawingGraphic_tBD88EBAE96A6567101742516605DDD13CF579F6B;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// SimpleFileBrowser.OnItemClickedHandler
struct OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// SimpleFileBrowser.RecycledListView
struct RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// SimpleFileBrowser.FileBrowser/<>c
struct U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1;
// SimpleFileBrowser.FileBrowser/<>c__DisplayClass200_0
struct U3CU3Ec__DisplayClass200_0_tA258BC6627E9A0EA981939C70D9DF173627AC86D;
// SimpleFileBrowser.FileBrowser/<CreateNewFolderCoroutine>d__199
struct U3CCreateNewFolderCoroutineU3Ed__199_tB0D7F02442ADD3909ED887CCE575A53C09D520C4;
// SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219
struct U3CWaitForLoadDialogU3Ed__219_tFA869042CB0D21BA06BC7D1FA01C4784902E149A;
// SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218
struct U3CWaitForSaveDialogU3Ed__218_tC3ACD1751B824A75B0B297D9B348D83F50B88D95;
// SimpleFileBrowser.FileBrowser/DirectoryPickCallback
struct DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79;
// SimpleFileBrowser.FileBrowser/Filter
struct Filter_t8153D54E830D1CFED3A7835AA70D748EC23BA0E4;
// SimpleFileBrowser.FileBrowser/OnCancel
struct OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919;
// SimpleFileBrowser.FileBrowser/OnSuccess
struct OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9;
// SimpleFileBrowser.FileBrowserDeleteConfirmationPanel/OnDeletionConfirmed
struct OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199;
// SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted
struct OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDeserializationCallback_tDE4D7D3A8889ABCB4E8062D9B14164F3B8DEEE62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISerializable_tB66487CC1AF4C8D8F6DB8733D81C325264F6E92D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISerializationSurrogate_tDFCC54FF77F435377F6DBC1857F5F530D9E668C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Person_t319F249D8676BD73834E9588CDFD263F86B45526_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral009A8934F0648E3EB0A447C7544AE01B1ED99410;
IL2CPP_EXTERN_C String_t* _stringLiteral09D118F02225C61685E23552516BAD09FB7F7C35;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0DF28F9B6550D416DF3102931950BEEBD8DB8094;
IL2CPP_EXTERN_C String_t* _stringLiteral1297249A84B5425E0AAEA8A4221FB2C94ED18CE4;
IL2CPP_EXTERN_C String_t* _stringLiteral3687C2A9F253D3266A08F4BE31045635234D66CE;
IL2CPP_EXTERN_C String_t* _stringLiteral3B3083335A631B0ED536F90AB3EB03F976A064D6;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC14E746F6B6DFC16CB20AC49C1BFE2D3146CC5;
IL2CPP_EXTERN_C String_t* _stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189;
IL2CPP_EXTERN_C String_t* _stringLiteral4A447E8D23D75FD6437F9ED031F1938CFDA74898;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5A4E11696C6F0CA1AEEE640E0125226FC0BC7737;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral6F22EF407A5C59A4CC893EF10F6CC790F12F88AD;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral78A4B4902A65D338E1F86D18A50879EC823FDAEC;
IL2CPP_EXTERN_C String_t* _stringLiteral7FE47837D3AD2CDD816FE51F1892552820FCAB10;
IL2CPP_EXTERN_C String_t* _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8899CAE7A33FDDEFDE39165F452FFA9BC98688AA;
IL2CPP_EXTERN_C String_t* _stringLiteral9B3175575B000E41A09B0C0CE0219DA320C1F07D;
IL2CPP_EXTERN_C String_t* _stringLiteralAED36B7262CE52C999E860488E4D6B1352B7E39B;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
IL2CPP_EXTERN_C String_t* _stringLiteralBCAB26D1AC0E925089F063AA00F617E2EF208E64;
IL2CPP_EXTERN_C String_t* _stringLiteralBF26B318DE750209A1769AA97922C5926003A04C;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCE9C364467FA311799A2D07B23F2A30E6BE16412;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralD61079644ADCD6250BB5DB991D2C9CCF263E13FC;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D51F95DBD7F8C00A48D3B0B774B2E7EC58567E;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDE5DA79E61F7F0E125C3F4BF9A78A874CC0D946A;
IL2CPP_EXTERN_C String_t* _stringLiteralDFACFD7C0A2D03977F91FD6FA7D17D6E08F698D6;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2FC8ACAFE956D789EAA03558DC9E281FA48D6243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisFileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_m706E7433C777CFA6A8C90A738C34E9A70781CE9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB70BDA2D428588C94AC1C399CEC6CADAE6371FE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m0E1C03676D4E791872A99AB041C306C8B902EB58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7A87FE6684BC522309696445F66237AAD2D50827_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Example02_Deserialize_m6178153374C3681AC4232D302D2DB3E5785FC4DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileBrowser_U3CCreateNewFolderCoroutineU3Eb__199_0_m402D783F4B13A13F1A4989CAB00FE0BB5E6060F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonTextReader_Read_TisString_t_m872B53C604086D1D2F5935C9C183D2CFE47D625B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9AD3730A1BB8D9560AD1FC0125C3786AB61F6644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecycledListView_U3CStartU3Eb__10_0_m9D297D1FB7516BBBB724598CEAD4B797BAB1211E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m2DB79BEEAC46CA0F95E450AB79CF477496FA634D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mD9EE743EA81C0D6BD49D98ED4F5780142A7FFB28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m8E7BCB8B45FC4751476B177A619B2686668DB34E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m9670CF8806836FEB46CE672C75CEA1ACB706CF2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateNewFolderCoroutineU3Ed__199_System_Collections_IEnumerator_Reset_m8F3D02203D9D302EAF7148AC226A9D23248A4931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForLoadDialogU3Ed__219_System_Collections_IEnumerator_Reset_mFFFBD0A9D3D983350CD6A33AD5DBC97E986AE449_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForSaveDialogU3Ed__218_System_Collections_IEnumerator_Reset_m1796C3E29F679E5476B25E232802DFDD3BECBE71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* KeyValuePair_2_t6B67F15F63BF2F3C9BF0458C0AA16F217BE189F0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Person_t319F249D8676BD73834E9588CDFD263F86B45526_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D;
struct FileSystemInfoU5BU5D_tF7D37070CBD32AA8FF200811C4906E3543061AE7;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,SimpleFileBrowser.ListItem>
struct Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0A1AA637FA7D96A5E8927595165ED07BCFACA42C* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA110B45915580EC82EF5D9F3B41A62C1AC3AA4E9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t81AA8F06756884E0F571D22D25FD0788CBBF2BE2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<SimpleFileBrowser.FileSystemEntry>
struct List_1_t5D818DED56F6D90F2F1BC32567F7A20945EE6926  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5D818DED56F6D90F2F1BC32567F7A20945EE6926_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem>
struct Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ListItemU5BU5D_tB0F5D8FE67ECF6415FEDA6317AF71EB006DC9DAE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Runtime.Serialization.FormatterConverter
struct FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27  : public RuntimeObject
{
};

// BayatGames.Serialization.Formatters.Json.JsonExtensions
struct JsonExtensions_t07704E7D54FAF555253300B5789A3EB5D4B5FB34  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfoEnumerator::_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfoEnumerator::_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfoEnumerator::_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____types_2;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_numItems
	int32_t ____numItems_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_currItem
	int32_t ____currItem_4;
	// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::_current
	bool ____current_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// SimpleFileBrowser.FileBrowser/<>c
struct U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1  : public RuntimeObject
{
};

struct U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1_StaticFields
{
	// SimpleFileBrowser.FileBrowser/<>c SimpleFileBrowser.FileBrowser/<>c::<>9
	U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1* ___U3CU3E9_0;
	// System.Comparison`1<SimpleFileBrowser.FileSystemEntry> SimpleFileBrowser.FileBrowser/<>c::<>9__195_0
	Comparison_1_tD0184181699C9E717D5069660C1EF33B877FD61B* ___U3CU3E9__195_0_1;
};

// SimpleFileBrowser.FileBrowser/<CreateNewFolderCoroutine>d__199
struct U3CCreateNewFolderCoroutineU3Ed__199_tB0D7F02442ADD3909ED887CCE575A53C09D520C4  : public RuntimeObject
{
	// System.Int32 SimpleFileBrowser.FileBrowser/<CreateNewFolderCoroutine>d__199::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SimpleFileBrowser.FileBrowser/<CreateNewFolderCoroutine>d__199::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SimpleFileBrowser.FileBrowser SimpleFileBrowser.FileBrowser/<CreateNewFolderCoroutine>d__199::<>4__this
	FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* ___U3CU3E4__this_2;
};

// SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219
struct U3CWaitForLoadDialogU3Ed__219_tFA869042CB0D21BA06BC7D1FA01C4784902E149A  : public RuntimeObject
{
	// System.Int32 SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SimpleFileBrowser.FileBrowser/PickMode SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::pickMode
	int32_t ___pickMode_2;
	// System.Boolean SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::allowMultiSelection
	bool ___allowMultiSelection_3;
	// System.String SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::initialPath
	String_t* ___initialPath_4;
	// System.String SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::initialFilename
	String_t* ___initialFilename_5;
	// System.String SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::title
	String_t* ___title_6;
	// System.String SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::loadButtonText
	String_t* ___loadButtonText_7;
};

// SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218
struct U3CWaitForSaveDialogU3Ed__218_tC3ACD1751B824A75B0B297D9B348D83F50B88D95  : public RuntimeObject
{
	// System.Int32 SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SimpleFileBrowser.FileBrowser/PickMode SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::pickMode
	int32_t ___pickMode_2;
	// System.Boolean SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::allowMultiSelection
	bool ___allowMultiSelection_3;
	// System.String SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::initialPath
	String_t* ___initialPath_4;
	// System.String SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::initialFilename
	String_t* ___initialFilename_5;
	// System.String SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::title
	String_t* ___title_6;
	// System.String SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::saveButtonText
	String_t* ___saveButtonText_7;
};

// SimpleFileBrowser.FileBrowser/Filter
struct Filter_t8153D54E830D1CFED3A7835AA70D748EC23BA0E4  : public RuntimeObject
{
	// System.String SimpleFileBrowser.FileBrowser/Filter::name
	String_t* ___name_0;
	// System.Collections.Generic.HashSet`1<System.String> SimpleFileBrowser.FileBrowser/Filter::extensions
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___extensions_1;
	// System.String SimpleFileBrowser.FileBrowser/Filter::defaultExtension
	String_t* ___defaultExtension_2;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.String>
struct Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// SimpleFileBrowser.FileSystemEntry
struct FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 
{
	// System.String SimpleFileBrowser.FileSystemEntry::Path
	String_t* ___Path_0;
	// System.String SimpleFileBrowser.FileSystemEntry::Name
	String_t* ___Name_1;
	// System.String SimpleFileBrowser.FileSystemEntry::Extension
	String_t* ___Extension_2;
	// System.IO.FileAttributes SimpleFileBrowser.FileSystemEntry::Attributes
	int32_t ___Attributes_3;
};
// Native definition for P/Invoke marshalling of SimpleFileBrowser.FileSystemEntry
struct FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshaled_pinvoke
{
	char* ___Path_0;
	char* ___Name_1;
	char* ___Extension_2;
	int32_t ___Attributes_3;
};
// Native definition for COM marshalling of SimpleFileBrowser.FileSystemEntry
struct FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshaled_com
{
	Il2CppChar* ___Path_0;
	Il2CppChar* ___Name_1;
	Il2CppChar* ___Extension_2;
	int32_t ___Attributes_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// BayatGames.Serialization.Formatters.Json.Examples.Example01/Person
struct Person_t319F249D8676BD73834E9588CDFD263F86B45526 
{
	// System.String BayatGames.Serialization.Formatters.Json.Examples.Example01/Person::firstName
	String_t* ___firstName_0;
	// System.String BayatGames.Serialization.Formatters.Json.Examples.Example01/Person::lastName
	String_t* ___lastName_1;
};
// Native definition for P/Invoke marshalling of BayatGames.Serialization.Formatters.Json.Examples.Example01/Person
struct Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshaled_pinvoke
{
	char* ___firstName_0;
	char* ___lastName_1;
};
// Native definition for COM marshalling of BayatGames.Serialization.Formatters.Json.Examples.Example01/Person
struct Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshaled_com
{
	Il2CppChar* ___firstName_0;
	Il2CppChar* ___lastName_1;
};

// SimpleFileBrowser.FileBrowser/FiletypeIcon
struct FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F 
{
	// System.String SimpleFileBrowser.FileBrowser/FiletypeIcon::extension
	String_t* ___extension_0;
	// UnityEngine.Sprite SimpleFileBrowser.FileBrowser/FiletypeIcon::icon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_1;
};
// Native definition for P/Invoke marshalling of SimpleFileBrowser.FileBrowser/FiletypeIcon
struct FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshaled_pinvoke
{
	char* ___extension_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_1;
};
// Native definition for COM marshalling of SimpleFileBrowser.FileBrowser/FiletypeIcon
struct FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshaled_com
{
	Il2CppChar* ___extension_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_1;
};

// SimpleFileBrowser.FileBrowser/QuickLink
struct QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4 
{
	// System.Environment/SpecialFolder SimpleFileBrowser.FileBrowser/QuickLink::target
	int32_t ___target_0;
	// System.String SimpleFileBrowser.FileBrowser/QuickLink::name
	String_t* ___name_1;
	// UnityEngine.Sprite SimpleFileBrowser.FileBrowser/QuickLink::icon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_2;
};
// Native definition for P/Invoke marshalling of SimpleFileBrowser.FileBrowser/QuickLink
struct QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshaled_pinvoke
{
	int32_t ___target_0;
	char* ___name_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_2;
};
// Native definition for COM marshalling of SimpleFileBrowser.FileBrowser/QuickLink
struct QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshaled_com
{
	int32_t ___target_0;
	Il2CppChar* ___name_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_2;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// SimpleFileBrowser.FileBrowserHelpers
struct FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5  : public RuntimeObject
{
};

struct FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields
{
	// UnityEngine.AndroidJavaClass SimpleFileBrowser.FileBrowserHelpers::m_ajc
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___m_ajc_0;
	// UnityEngine.AndroidJavaObject SimpleFileBrowser.FileBrowserHelpers::m_context
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_context_1;
	// System.String SimpleFileBrowser.FileBrowserHelpers::m_temporaryFilePath
	String_t* ___m_temporaryFilePath_2;
	// System.Nullable`1<System.Boolean> SimpleFileBrowser.FileBrowserHelpers::m_shouldUseSAF
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_shouldUseSAF_3;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// BayatGames.Serialization.Formatters.Json.JsonFormatter
struct JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A  : public RuntimeObject
{
	// System.Runtime.Serialization.ISurrogateSelector BayatGames.Serialization.Formatters.Json.JsonFormatter::m_SurrogateSelector
	RuntimeObject* ___m_SurrogateSelector_0;
	// System.Runtime.Serialization.StreamingContext BayatGames.Serialization.Formatters.Json.JsonFormatter::m_Context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___m_Context_1;
};

// BayatGames.Serialization.Formatters.Json.JsonReader
struct JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17  : public RuntimeObject
{
	// System.Runtime.Serialization.ISurrogateSelector BayatGames.Serialization.Formatters.Json.JsonReader::m_SurrogateSelector
	RuntimeObject* ___m_SurrogateSelector_0;
	// System.Runtime.Serialization.StreamingContext BayatGames.Serialization.Formatters.Json.JsonReader::m_Context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___m_Context_1;
};

// BayatGames.Serialization.Formatters.Json.JsonWriter
struct JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9  : public RuntimeObject
{
	// System.Runtime.Serialization.ISurrogateSelector BayatGames.Serialization.Formatters.Json.JsonWriter::m_SurrogateSelector
	RuntimeObject* ___m_SurrogateSelector_0;
	// System.Runtime.Serialization.StreamingContext BayatGames.Serialization.Formatters.Json.JsonWriter::m_Context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___m_Context_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
};

// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t* ____sb_6;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_7;
};

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
};

// SimpleFileBrowser.FileBrowser/<>c__DisplayClass200_0
struct U3CU3Ec__DisplayClass200_0_tA258BC6627E9A0EA981939C70D9DF173627AC86D  : public RuntimeObject
{
	// SimpleFileBrowser.FileSystemEntry SimpleFileBrowser.FileBrowser/<>c__DisplayClass200_0::fileInfo
	FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 ___fileInfo_0;
	// SimpleFileBrowser.FileBrowser SimpleFileBrowser.FileBrowser/<>c__DisplayClass200_0::<>4__this
	FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* ___U3CU3E4__this_1;
};

// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// BayatGames.Serialization.Formatters.Json.JsonTextReader
struct JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474  : public JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17
{
	// System.IO.TextReader BayatGames.Serialization.Formatters.Json.JsonTextReader::m_Reader
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___m_Reader_2;
};

// BayatGames.Serialization.Formatters.Json.JsonTextWriter
struct JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD  : public JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9
{
	// System.IO.TextWriter BayatGames.Serialization.Formatters.Json.JsonTextWriter::m_Writer
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___m_Writer_2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// SimpleFileBrowser.OnItemClickedHandler
struct OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// SimpleFileBrowser.FileBrowser/DirectoryPickCallback
struct DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79  : public MulticastDelegate_t
{
};

// SimpleFileBrowser.FileBrowser/OnCancel
struct OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919  : public MulticastDelegate_t
{
};

// SimpleFileBrowser.FileBrowser/OnSuccess
struct OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9  : public MulticastDelegate_t
{
};

// SimpleFileBrowser.FileBrowserDeleteConfirmationPanel/OnDeletionConfirmed
struct OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199  : public MulticastDelegate_t
{
};

// SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted
struct OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// BayatGames.Serialization.Formatters.Json.Examples.Example01
struct Example01_tF43994A55846837C8C71759579DA90606A3E4486  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField BayatGames.Serialization.Formatters.Json.Examples.Example01::m_FirstNameInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___m_FirstNameInput_4;
	// UnityEngine.UI.InputField BayatGames.Serialization.Formatters.Json.Examples.Example01::m_LastNameInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___m_LastNameInput_5;
	// UnityEngine.UI.InputField BayatGames.Serialization.Formatters.Json.Examples.Example01::m_JsonInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___m_JsonInput_6;
};

// BayatGames.Serialization.Formatters.Json.Examples.Example02
struct Example02_tCCAC9901C56A53B9C44F5D615DBBEE338701BF4E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField BayatGames.Serialization.Formatters.Json.Examples.Example02::m_TypeInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___m_TypeInput_4;
	// UnityEngine.UI.InputField BayatGames.Serialization.Formatters.Json.Examples.Example02::m_JsonInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___m_JsonInput_5;
};

// SimpleFileBrowser.FileBrowser
struct FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color SimpleFileBrowser.FileBrowser::normalFileColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___normalFileColor_15;
	// UnityEngine.Color SimpleFileBrowser.FileBrowser::hoveredFileColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___hoveredFileColor_16;
	// UnityEngine.Color SimpleFileBrowser.FileBrowser::selectedFileColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___selectedFileColor_17;
	// UnityEngine.Color SimpleFileBrowser.FileBrowser::wrongFilenameColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___wrongFilenameColor_18;
	// System.Int32 SimpleFileBrowser.FileBrowser::minWidth
	int32_t ___minWidth_19;
	// System.Int32 SimpleFileBrowser.FileBrowser::minHeight
	int32_t ___minHeight_20;
	// System.Single SimpleFileBrowser.FileBrowser::narrowScreenWidth
	float ___narrowScreenWidth_21;
	// System.Single SimpleFileBrowser.FileBrowser::quickLinksMaxWidthPercentage
	float ___quickLinksMaxWidthPercentage_22;
	// System.Boolean SimpleFileBrowser.FileBrowser::sortFilesByName
	bool ___sortFilesByName_23;
	// System.String[] SimpleFileBrowser.FileBrowser::excludeExtensions
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___excludeExtensions_24;
	// SimpleFileBrowser.FileBrowser/QuickLink[] SimpleFileBrowser.FileBrowser::quickLinks
	QuickLinkU5BU5D_tE49D5698C6FA56F69A8CA1F5E267D1EDE4CE2E44* ___quickLinks_25;
	// System.Collections.Generic.HashSet`1<System.String> SimpleFileBrowser.FileBrowser::excludedExtensionsSet
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___excludedExtensionsSet_27;
	// System.Collections.Generic.HashSet`1<System.String> SimpleFileBrowser.FileBrowser::addedQuickLinksSet
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___addedQuickLinksSet_28;
	// System.Boolean SimpleFileBrowser.FileBrowser::generateQuickLinksForDrives
	bool ___generateQuickLinksForDrives_29;
	// System.Boolean SimpleFileBrowser.FileBrowser::contextMenuShowDeleteButton
	bool ___contextMenuShowDeleteButton_30;
	// System.Boolean SimpleFileBrowser.FileBrowser::contextMenuShowRenameButton
	bool ___contextMenuShowRenameButton_31;
	// System.Boolean SimpleFileBrowser.FileBrowser::showResizeCursor
	bool ___showResizeCursor_32;
	// UnityEngine.Sprite SimpleFileBrowser.FileBrowser::folderIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___folderIcon_33;
	// UnityEngine.Sprite SimpleFileBrowser.FileBrowser::driveIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___driveIcon_34;
	// UnityEngine.Sprite SimpleFileBrowser.FileBrowser::defaultIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___defaultIcon_35;
	// SimpleFileBrowser.FileBrowser/FiletypeIcon[] SimpleFileBrowser.FileBrowser::filetypeIcons
	FiletypeIconU5BU5D_tAD309595CE0584F6422CF8090A71D8C44633BFD8* ___filetypeIcons_36;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite> SimpleFileBrowser.FileBrowser::filetypeToIcon
	Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* ___filetypeToIcon_37;
	// UnityEngine.Sprite SimpleFileBrowser.FileBrowser::multiSelectionToggleOffIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___multiSelectionToggleOffIcon_38;
	// UnityEngine.Sprite SimpleFileBrowser.FileBrowser::multiSelectionToggleOnIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___multiSelectionToggleOnIcon_39;
	// SimpleFileBrowser.FileBrowserMovement SimpleFileBrowser.FileBrowser::window
	FileBrowserMovement_t9BBE2FB80BBD18B9EB928D109A816EA2646D3EB7* ___window_40;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::windowTR
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___windowTR_41;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::topViewNarrowScreen
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___topViewNarrowScreen_42;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::middleView
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___middleView_43;
	// UnityEngine.Vector2 SimpleFileBrowser.FileBrowser::middleViewOriginalPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___middleViewOriginalPosition_44;
	// UnityEngine.Vector2 SimpleFileBrowser.FileBrowser::middleViewOriginalSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___middleViewOriginalSize_45;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::middleViewQuickLinks
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___middleViewQuickLinks_46;
	// UnityEngine.Vector2 SimpleFileBrowser.FileBrowser::middleViewQuickLinksOriginalSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___middleViewQuickLinksOriginalSize_47;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::middleViewFiles
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___middleViewFiles_48;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::middleViewSeparator
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___middleViewSeparator_49;
	// SimpleFileBrowser.FileBrowserItem SimpleFileBrowser.FileBrowser::itemPrefab
	FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* ___itemPrefab_50;
	// System.Collections.Generic.List`1<SimpleFileBrowser.FileBrowserItem> SimpleFileBrowser.FileBrowser::allItems
	List_1_t4563CEAEB7C1CC77CFDFF2A1C1B0F495EE33A3D3* ___allItems_51;
	// System.Single SimpleFileBrowser.FileBrowser::itemHeight
	float ___itemHeight_52;
	// SimpleFileBrowser.FileBrowserQuickLink SimpleFileBrowser.FileBrowser::quickLinkPrefab
	FileBrowserQuickLink_t306165881C5444A33F8F9801FE571444CCD52183* ___quickLinkPrefab_53;
	// UnityEngine.UI.Text SimpleFileBrowser.FileBrowser::titleText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___titleText_54;
	// UnityEngine.UI.Button SimpleFileBrowser.FileBrowser::backButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___backButton_55;
	// UnityEngine.UI.Button SimpleFileBrowser.FileBrowser::forwardButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___forwardButton_56;
	// UnityEngine.UI.Button SimpleFileBrowser.FileBrowser::upButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___upButton_57;
	// UnityEngine.UI.InputField SimpleFileBrowser.FileBrowser::pathInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___pathInputField_58;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::pathInputFieldSlotTop
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___pathInputFieldSlotTop_59;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::pathInputFieldSlotBottom
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___pathInputFieldSlotBottom_60;
	// UnityEngine.UI.InputField SimpleFileBrowser.FileBrowser::searchInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___searchInputField_61;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::quickLinksContainer
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___quickLinksContainer_62;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::filesContainer
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___filesContainer_63;
	// UnityEngine.UI.ScrollRect SimpleFileBrowser.FileBrowser::filesScrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___filesScrollRect_64;
	// SimpleFileBrowser.RecycledListView SimpleFileBrowser.FileBrowser::listView
	RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* ___listView_65;
	// UnityEngine.UI.InputField SimpleFileBrowser.FileBrowser::filenameInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___filenameInputField_66;
	// UnityEngine.UI.Text SimpleFileBrowser.FileBrowser::filenameInputFieldOverlayText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___filenameInputFieldOverlayText_67;
	// UnityEngine.UI.Image SimpleFileBrowser.FileBrowser::filenameImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___filenameImage_68;
	// UnityEngine.UI.Dropdown SimpleFileBrowser.FileBrowser::filtersDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___filtersDropdown_69;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::filtersDropdownContainer
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___filtersDropdownContainer_70;
	// UnityEngine.UI.Text SimpleFileBrowser.FileBrowser::filterItemTemplate
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___filterItemTemplate_71;
	// UnityEngine.UI.Toggle SimpleFileBrowser.FileBrowser::showHiddenFilesToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___showHiddenFilesToggle_72;
	// UnityEngine.UI.Text SimpleFileBrowser.FileBrowser::submitButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___submitButtonText_73;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::moreOptionsContextMenuPosition
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___moreOptionsContextMenuPosition_74;
	// SimpleFileBrowser.FileBrowserRenamedItem SimpleFileBrowser.FileBrowser::renameItem
	FileBrowserRenamedItem_tB7E8EAF76EC4BA1F717E321523EC2E21A8A7A6E1* ___renameItem_75;
	// SimpleFileBrowser.FileBrowserContextMenu SimpleFileBrowser.FileBrowser::contextMenu
	FileBrowserContextMenu_t80E73A074B4D276E4A27A7557C00988732BE6B23* ___contextMenu_76;
	// SimpleFileBrowser.FileBrowserDeleteConfirmationPanel SimpleFileBrowser.FileBrowser::deleteConfirmationPanel
	FileBrowserDeleteConfirmationPanel_tA7515B8CE379572856152113B0BB808555ACA6B6* ___deleteConfirmationPanel_77;
	// SimpleFileBrowser.FileBrowserCursorHandler SimpleFileBrowser.FileBrowser::resizeCursorHandler
	FileBrowserCursorHandler_t6D8D15963F508CBDE7F9C98D2CBF39F23D8BADBB* ___resizeCursorHandler_78;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_79;
	// UnityEngine.Canvas SimpleFileBrowser.FileBrowser::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_80;
	// System.IO.FileAttributes SimpleFileBrowser.FileBrowser::ignoredFileAttributes
	int32_t ___ignoredFileAttributes_81;
	// SimpleFileBrowser.FileSystemEntry[] SimpleFileBrowser.FileBrowser::allFileEntries
	FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* ___allFileEntries_82;
	// System.Collections.Generic.List`1<SimpleFileBrowser.FileSystemEntry> SimpleFileBrowser.FileBrowser::validFileEntries
	List_1_t5D818DED56F6D90F2F1BC32567F7A20945EE6926* ___validFileEntries_83;
	// System.Collections.Generic.List`1<System.Int32> SimpleFileBrowser.FileBrowser::selectedFileEntries
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___selectedFileEntries_84;
	// System.Collections.Generic.List`1<System.String> SimpleFileBrowser.FileBrowser::pendingFileEntrySelection
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___pendingFileEntrySelection_85;
	// System.Int32 SimpleFileBrowser.FileBrowser::multiSelectionPivotFileEntry
	int32_t ___multiSelectionPivotFileEntry_86;
	// System.Text.StringBuilder SimpleFileBrowser.FileBrowser::multiSelectionFilenameBuilder
	StringBuilder_t* ___multiSelectionFilenameBuilder_87;
	// System.Collections.Generic.List`1<SimpleFileBrowser.FileBrowser/Filter> SimpleFileBrowser.FileBrowser::filters
	List_1_t41AC3278D2B1F612D8B9C42513868B158DA959CA* ___filters_88;
	// SimpleFileBrowser.FileBrowser/Filter SimpleFileBrowser.FileBrowser::allFilesFilter
	Filter_t8153D54E830D1CFED3A7835AA70D748EC23BA0E4* ___allFilesFilter_89;
	// System.Boolean SimpleFileBrowser.FileBrowser::showAllFilesFilter
	bool ___showAllFilesFilter_90;
	// System.String SimpleFileBrowser.FileBrowser::defaultInitialPath
	String_t* ___defaultInitialPath_91;
	// System.Int32 SimpleFileBrowser.FileBrowser::currentPathIndex
	int32_t ___currentPathIndex_92;
	// System.Collections.Generic.List`1<System.String> SimpleFileBrowser.FileBrowser::pathsFollowed
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___pathsFollowed_93;
	// System.Collections.Generic.HashSet`1<System.Char> SimpleFileBrowser.FileBrowser::invalidFilenameChars
	HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* ___invalidFilenameChars_94;
	// System.Boolean SimpleFileBrowser.FileBrowser::canvasDimensionsChanged
	bool ___canvasDimensionsChanged_95;
	// UnityEngine.EventSystems.PointerEventData SimpleFileBrowser.FileBrowser::nullPointerEventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___nullPointerEventData_96;
	// System.String SimpleFileBrowser.FileBrowser::m_currentPath
	String_t* ___m_currentPath_97;
	// System.String SimpleFileBrowser.FileBrowser::m_searchString
	String_t* ___m_searchString_98;
	// System.Boolean SimpleFileBrowser.FileBrowser::m_acceptNonExistingFilename
	bool ___m_acceptNonExistingFilename_99;
	// SimpleFileBrowser.FileBrowser/PickMode SimpleFileBrowser.FileBrowser::m_pickerMode
	int32_t ___m_pickerMode_100;
	// System.Boolean SimpleFileBrowser.FileBrowser::m_allowMultiSelection
	bool ___m_allowMultiSelection_101;
	// System.Boolean SimpleFileBrowser.FileBrowser::m_multiSelectionToggleSelectionMode
	bool ___m_multiSelectionToggleSelectionMode_102;
	// SimpleFileBrowser.FileBrowser/OnSuccess SimpleFileBrowser.FileBrowser::onSuccess
	OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* ___onSuccess_103;
	// SimpleFileBrowser.FileBrowser/OnCancel SimpleFileBrowser.FileBrowser::onCancel
	OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* ___onCancel_104;
};

struct FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC_StaticFields
{
	// System.Boolean SimpleFileBrowser.FileBrowser::<IsOpen>k__BackingField
	bool ___U3CIsOpenU3Ek__BackingField_6;
	// System.Boolean SimpleFileBrowser.FileBrowser::<Success>k__BackingField
	bool ___U3CSuccessU3Ek__BackingField_7;
	// System.String[] SimpleFileBrowser.FileBrowser::<Result>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CResultU3Ek__BackingField_8;
	// System.Boolean SimpleFileBrowser.FileBrowser::m_askPermissions
	bool ___m_askPermissions_9;
	// System.Boolean SimpleFileBrowser.FileBrowser::m_singleClickMode
	bool ___m_singleClickMode_10;
	// System.String SimpleFileBrowser.FileBrowser::m_allFilesFilterText
	String_t* ___m_allFilesFilterText_11;
	// System.String SimpleFileBrowser.FileBrowser::m_foldersFilterText
	String_t* ___m_foldersFilterText_12;
	// System.String SimpleFileBrowser.FileBrowser::m_pickFolderQuickLinkText
	String_t* ___m_pickFolderQuickLinkText_13;
	// SimpleFileBrowser.FileBrowser SimpleFileBrowser.FileBrowser::m_instance
	FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* ___m_instance_14;
	// System.Boolean SimpleFileBrowser.FileBrowser::quickLinksInitialized
	bool ___quickLinksInitialized_26;
};

// SimpleFileBrowser.FileBrowserContextMenu
struct FileBrowserContextMenu_t80E73A074B4D276E4A27A7557C00988732BE6B23  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SimpleFileBrowser.FileBrowser SimpleFileBrowser.FileBrowserContextMenu::fileBrowser
	FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* ___fileBrowser_4;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserContextMenu::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_5;
	// UnityEngine.UI.Button SimpleFileBrowser.FileBrowserContextMenu::selectAllButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___selectAllButton_6;
	// UnityEngine.UI.Button SimpleFileBrowser.FileBrowserContextMenu::deselectAllButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___deselectAllButton_7;
	// UnityEngine.UI.Button SimpleFileBrowser.FileBrowserContextMenu::deleteButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___deleteButton_8;
	// UnityEngine.UI.Button SimpleFileBrowser.FileBrowserContextMenu::renameButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___renameButton_9;
	// UnityEngine.GameObject SimpleFileBrowser.FileBrowserContextMenu::selectAllButtonSeparator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectAllButtonSeparator_10;
	// System.Single SimpleFileBrowser.FileBrowserContextMenu::minDistanceToEdges
	float ___minDistanceToEdges_11;
};

// SimpleFileBrowser.FileBrowserCursorHandler
struct FileBrowserCursorHandler_t6D8D15963F508CBDE7F9C98D2CBF39F23D8BADBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SimpleFileBrowser.FileBrowserDeleteConfirmationPanel
struct FileBrowserDeleteConfirmationPanel_tA7515B8CE379572856152113B0BB808555ACA6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::deletedItems
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___deletedItems_4;
	// UnityEngine.UI.Image[] SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::deletedItemIcons
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___deletedItemIcons_5;
	// UnityEngine.UI.Text[] SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::deletedItemNames
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___deletedItemNames_6;
	// UnityEngine.GameObject SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::deletedItemsRest
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___deletedItemsRest_7;
	// UnityEngine.UI.Text SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::deletedItemsRestLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___deletedItemsRestLabel_8;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::yesButtonTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___yesButtonTransform_9;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::noButtonTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___noButtonTransform_10;
	// System.Single SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::narrowScreenWidth
	float ___narrowScreenWidth_11;
	// SimpleFileBrowser.FileBrowserDeleteConfirmationPanel/OnDeletionConfirmed SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::onDeletionConfirmed
	OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* ___onDeletionConfirmed_12;
};

// SimpleFileBrowser.FileBrowserMovement
struct FileBrowserMovement_t9BBE2FB80BBD18B9EB928D109A816EA2646D3EB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SimpleFileBrowser.FileBrowser SimpleFileBrowser.FileBrowserMovement::fileBrowser
	FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* ___fileBrowser_4;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserMovement::canvasTR
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___canvasTR_5;
	// UnityEngine.Camera SimpleFileBrowser.FileBrowserMovement::canvasCam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___canvasCam_6;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserMovement::window
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___window_7;
	// SimpleFileBrowser.RecycledListView SimpleFileBrowser.FileBrowserMovement::listView
	RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* ___listView_8;
	// UnityEngine.Vector2 SimpleFileBrowser.FileBrowserMovement::initialTouchPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialTouchPos_9;
	// UnityEngine.Vector2 SimpleFileBrowser.FileBrowserMovement::initialAnchoredPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialAnchoredPos_10;
	// UnityEngine.Vector2 SimpleFileBrowser.FileBrowserMovement::initialSizeDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialSizeDelta_11;
};

// SimpleFileBrowser.FileBrowserRenamedItem
struct FileBrowserRenamedItem_tB7E8EAF76EC4BA1F717E321523EC2E21A8A7A6E1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image SimpleFileBrowser.FileBrowserRenamedItem::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_4;
	// UnityEngine.UI.Image SimpleFileBrowser.FileBrowserRenamedItem::icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___icon_5;
	// UnityEngine.UI.InputField SimpleFileBrowser.FileBrowserRenamedItem::nameInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___nameInputField_6;
	// SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted SimpleFileBrowser.FileBrowserRenamedItem::onRenameCompleted
	OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* ___onRenameCompleted_7;
};

// SimpleFileBrowser.ListItem
struct ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Object SimpleFileBrowser.ListItem::<Tag>k__BackingField
	RuntimeObject* ___U3CTagU3Ek__BackingField_4;
	// System.Int32 SimpleFileBrowser.ListItem::<Position>k__BackingField
	int32_t ___U3CPositionU3Ek__BackingField_5;
	// SimpleFileBrowser.IListViewAdapter SimpleFileBrowser.ListItem::adapter
	RuntimeObject* ___adapter_6;
};

// SimpleFileBrowser.RecycledListView
struct RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform SimpleFileBrowser.RecycledListView::viewportTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___viewportTransform_4;
	// UnityEngine.RectTransform SimpleFileBrowser.RecycledListView::contentTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___contentTransform_5;
	// System.Single SimpleFileBrowser.RecycledListView::itemHeight
	float ___itemHeight_6;
	// System.Single SimpleFileBrowser.RecycledListView::_1OverItemHeight
	float ____1OverItemHeight_7;
	// System.Single SimpleFileBrowser.RecycledListView::viewportHeight
	float ___viewportHeight_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,SimpleFileBrowser.ListItem> SimpleFileBrowser.RecycledListView::items
	Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA* ___items_9;
	// System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem> SimpleFileBrowser.RecycledListView::pooledItems
	Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78* ___pooledItems_10;
	// SimpleFileBrowser.IListViewAdapter SimpleFileBrowser.RecycledListView::adapter
	RuntimeObject* ___adapter_11;
	// System.Int32 SimpleFileBrowser.RecycledListView::currentTopIndex
	int32_t ___currentTopIndex_12;
	// System.Int32 SimpleFileBrowser.RecycledListView::currentBottomIndex
	int32_t ___currentBottomIndex_13;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// SimpleFileBrowser.FileBrowserItem
struct FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98  : public ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6
{
	// SimpleFileBrowser.FileBrowser SimpleFileBrowser.FileBrowserItem::fileBrowser
	FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* ___fileBrowser_9;
	// UnityEngine.UI.Image SimpleFileBrowser.FileBrowserItem::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_10;
	// UnityEngine.UI.Image SimpleFileBrowser.FileBrowserItem::icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___icon_11;
	// UnityEngine.UI.Image SimpleFileBrowser.FileBrowserItem::multiSelectionToggle
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___multiSelectionToggle_12;
	// UnityEngine.UI.Text SimpleFileBrowser.FileBrowserItem::nameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___nameText_13;
	// System.Boolean SimpleFileBrowser.FileBrowserItem::isSelected
	bool ___isSelected_14;
	// System.Single SimpleFileBrowser.FileBrowserItem::pressTime
	float ___pressTime_15;
	// System.Single SimpleFileBrowser.FileBrowserItem::prevClickTime
	float ___prevClickTime_16;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserItem::m_transform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_transform_17;
	// System.Boolean SimpleFileBrowser.FileBrowserItem::<IsDirectory>k__BackingField
	bool ___U3CIsDirectoryU3Ek__BackingField_18;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// SimpleFileBrowser.FileBrowserQuickLink
struct FileBrowserQuickLink_t306165881C5444A33F8F9801FE571444CCD52183  : public FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98
{
	// System.String SimpleFileBrowser.FileBrowserQuickLink::m_targetPath
	String_t* ___m_targetPath_19;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// SimpleFileBrowser.NonDrawingGraphic
struct NonDrawingGraphic_tBD88EBAE96A6567101742516605DDD13CF579F6B  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// SimpleFileBrowser.FileSystemEntry[]
struct FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D  : public RuntimeArray
{
	ALIGN_FIELD (8) FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 m_Items[1];

	inline FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Path_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Extension_2), (void*)NULL);
		#endif
	}
	inline FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Path_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Extension_2), (void*)NULL);
		#endif
	}
};
// System.IO.FileSystemInfo[]
struct FileSystemInfoU5BU5D_tF7D37070CBD32AA8FF200811C4906E3543061AE7  : public RuntimeArray
{
	ALIGN_FIELD (8) FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* m_Items[1];

	inline FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC13D3ADFE27A073EC3C583E9C926C801A7EE1DDD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<SimpleFileBrowser.FileSystemEntry>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 List_1_get_Item_m9AD3730A1BB8D9560AD1FC0125C3786AB61F6644_gshared (List_1_t5D818DED56F6D90F2F1BC32567F7A20945EE6926* __this, int32_t ___index0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<SimpleFileBrowser.FileSystemEntry>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisFileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_m706E7433C777CFA6A8C90A738C34E9A70781CE9A_gshared (FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2FC8ACAFE956D789EAA03558DC9E281FA48D6243_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m71C125B79EE35648CFC416CA7DBBC27C8DBAD45A_gshared (UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* ___call0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mC13D3ADFE27A073EC3C583E9C926C801A7EE1DDD_gshared)(__this, ___collection0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
inline Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0 (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_inline (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Void SimpleFileBrowser.FileBrowser/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0244C519D5A98B89E27CEC5F6E70115405EB0CA1 (U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1* __this, const RuntimeMethod* method) ;
// System.Boolean SimpleFileBrowser.FileSystemEntry::get_IsDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystemEntry_get_IsDirectory_m9CF8DC534222B6057950EA69E24994C37D839263 (FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::CompareTo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF (String_t* __this, String_t* ___strB0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Void SimpleFileBrowser.FileBrowser::set_MultiSelectionToggleSelectionMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_set_MultiSelectionToggleSelectionMode_m4C6CFD17F43ACD3F6EDDA3C3DAFCE41AFBABB022 (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.RecycledListView::UpdateList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_UpdateList_mA53DC38064D6EB42E9D030647CD9C90CA4A00F4B (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_movementType_m2A900C10E6C005FD6866EFF1DA2DF78AA957534A_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenameCompleted__ctor_m0AC16860DB5FE13358EB2F30C513FCB054E5FA27 (OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserRenamedItem::Show(System.String,UnityEngine.Color,UnityEngine.Sprite,SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserRenamedItem_Show_m97F03325128D137986A0E058831610D98D6DF5D7 (FileBrowserRenamedItem_tB7E8EAF76EC4BA1F717E321523EC2E21A8A7A6E1* __this, String_t* ___initialFilename0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon2, OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* ___onRenameCompleted3, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String SimpleFileBrowser.FileBrowserHelpers::RenameDirectory(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserHelpers_RenameDirectory_m57956F16A010326F014BE59F41294E858477A07D (String_t* ___path0, String_t* ___newName1, const RuntimeMethod* method) ;
// System.String SimpleFileBrowser.FileBrowserHelpers::RenameFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserHelpers_RenameFile_m3E5B239347FB4D33E8340468409CFBD3C6B7DCBD (String_t* ___path0, String_t* ___newName1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void SimpleFileBrowser.FileBrowser::RefreshFiles(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_RefreshFiles_m3EDF0CC814752FF614A40B332B233AC7669B7CA9 (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, bool ___pathChanged0, const RuntimeMethod* method) ;
// System.Boolean SimpleFileBrowser.FileBrowser::ShowSaveDialog(SimpleFileBrowser.FileBrowser/OnSuccess,SimpleFileBrowser.FileBrowser/OnCancel,SimpleFileBrowser.FileBrowser/PickMode,System.Boolean,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileBrowser_ShowSaveDialog_mF39F7FEA5CD7FAB621E9C90EE40D6AE07A9C09F4 (OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* ___onSuccess0, OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* ___onCancel1, int32_t ___pickMode2, bool ___allowMultiSelection3, String_t* ___initialPath4, String_t* ___initialFilename5, String_t* ___title6, String_t* ___saveButtonText7, const RuntimeMethod* method) ;
// SimpleFileBrowser.FileBrowser SimpleFileBrowser.FileBrowser::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* FileBrowser_get_Instance_m3845763038DC80A9C50144D1658D6DB6EFEFDDDA (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean SimpleFileBrowser.FileBrowser::ShowLoadDialog(SimpleFileBrowser.FileBrowser/OnSuccess,SimpleFileBrowser.FileBrowser/OnCancel,SimpleFileBrowser.FileBrowser/PickMode,System.Boolean,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileBrowser_ShowLoadDialog_mBFC7D4E791C6C2AFE850393A29A00C7EAE2BCE40 (OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* ___onSuccess0, OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* ___onCancel1, int32_t ___pickMode2, bool ___allowMultiSelection3, String_t* ___initialPath4, String_t* ___initialFilename5, String_t* ___title6, String_t* ___loadButtonText7, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutRebuilder_ForceRebuildLayoutImmediate_mCCA094579654469919EFA4B5AA5D9AF93CD67B4A (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___layoutRoot0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Scale(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Scale_mEACE26803ED193717CE821462D85F1CA0573C051_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserContextMenu::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserContextMenu_Hide_m96EA64E5D219C3D2588F2BF74FA59B510716E34D (FileBrowserContextMenu_t80E73A074B4D276E4A27A7557C00988732BE6B23* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowser::SelectAllFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_SelectAllFiles_m6565B9098103CDFC96FC177B96B1DA009536CD0D (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowser::DeselectAllFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_DeselectAllFiles_m34796F35C8E2B4F462AB2A582D1E2951E82F52E1 (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowser::CreateNewFolder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_CreateNewFolder_m48287662AE72D8CD84F9085379C6D8D6960A8676 (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowser::DeleteSelectedFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_DeleteSelectedFiles_m54EEE2BF1DF3FEB5CE1EA112D4BFB8087B4BA4B9 (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowser::RenameSelectedFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_RenameSelectedFile_mAC3FAB8C923A08194B8F6FC1043EB77472ADD2CE (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<SimpleFileBrowser.FileSystemEntry>::get_Item(System.Int32)
inline FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 List_1_get_Item_m9AD3730A1BB8D9560AD1FC0125C3786AB61F6644 (List_1_t5D818DED56F6D90F2F1BC32567F7A20945EE6926* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 (*) (List_1_t5D818DED56F6D90F2F1BC32567F7A20945EE6926*, int32_t, const RuntimeMethod*))List_1_get_Item_m9AD3730A1BB8D9560AD1FC0125C3786AB61F6644_gshared)(__this, ___index0, method);
}
// UnityEngine.Sprite SimpleFileBrowser.FileBrowser::GetIconForFileEntry(SimpleFileBrowser.FileSystemEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* FileBrowser_GetIconForFileEntry_mADA5AD9742BCF63B96BF7CCCDB254C1632678E3F (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 ___fileInfo0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserDeleteConfirmationPanel/OnDeletionConfirmed::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnDeletionConfirmed_Invoke_mA8275C4700A288B8CD107292580B81F20873F639_inline (OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileSystemEntry::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemEntry__ctor_m98A1C0245241C15A7598558CFC8CFBC1CBB68591 (FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* __this, String_t* ___path0, String_t* ___name1, bool ___isDirectory2, const RuntimeMethod* method) ;
// System.String System.IO.FileSystemInfo::get_Extension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileSystemInfo_get_Extension_mC1DA9A769E890D35AC34C76DEF46EA3C570F7D71 (FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* __this, const RuntimeMethod* method) ;
// System.IO.FileAttributes System.IO.FileSystemInfo::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FileSystemInfo_get_Attributes_m38971A5B147214C5EE193CE9F60628EA834EF6DA (FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileSystemEntry::.ctor(System.IO.FileSystemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemEntry__ctor_mF430AF0B8B46B9648DD5AB64CACBE16FB6252528 (FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* __this, FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* ___fileInfo0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// UnityEngine.AndroidJavaClass SimpleFileBrowser.FileBrowserHelpers::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// System.Boolean SimpleFileBrowser.FileBrowserHelpers::get_ShouldUseSAF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374 (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject SimpleFileBrowser.FileBrowserHelpers::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52 (const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.FileSystemInfo[] System.IO.DirectoryInfo::GetFileSystemInfos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileSystemInfoU5BU5D_tF7D37070CBD32AA8FF200811C4906E3543061AE7* DirectoryInfo_GetFileSystemInfos_m35F27B3A479619281F13C053A9164ACC6C135BED (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<SimpleFileBrowser.FileSystemEntry>(T[]&,System.Int32)
inline void Array_Resize_TisFileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_m706E7433C777CFA6A8C90A738C34E9A70781CE9A (FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D**, int32_t, const RuntimeMethod*))Array_Resize_TisFileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_m706E7433C777CFA6A8C90A738C34E9A70781CE9A_gshared)(___array0, ___newSize1, method);
}
// System.IO.FileStream System.IO.File::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Create_m7A88AE26DE05E6D790E3C5B1140EE5DC91DCC519 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String SimpleFileBrowser.FileBrowserHelpers::get_TemporaryFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67 (const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077 (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1 (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method) ;
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m3798F05909C43D7EA26130D51D0A15CFCBE7458A (String_t* ___sourceFileName0, String_t* ___destFileName1, bool ___overwrite2, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, const RuntimeMethod* method) ;
// System.Void System.IO.File::AppendAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_AppendAllText_m08069DB321F56261289DCE3509565270F23DAEC6 (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C (String_t* ___path0, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Move_mBC9450111E0144A55D893A720F19E612D658AC37 (String_t* ___sourceFileName0, String_t* ___destFileName1, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* DirectoryInfo_get_Parent_m2B95E4D3CBA22F8DAA259247ED791F1411D93347 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Directory::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Directory_Move_mA9C7ED31B0223C808C52AC0AF5F4476305DB5D31 (String_t* ___sourceDirName0, String_t* ___destDirName1, const RuntimeMethod* method) ;
// System.Void System.IO.Directory::Delete(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Directory_Delete_mB5C70379DEFE9B8AA95F67BAE04233E60CEF09F4 (String_t* ___path0, bool ___recursive1, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6 (String_t* ___path0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject_CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2FC8ACAFE956D789EAA03558DC9E281FA48D6243 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2FC8ACAFE956D789EAA03558DC9E281FA48D6243_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___fileName0, const RuntimeMethod* method) ;
// System.Int64 System.IO.FileInfo::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.DateTime System.IO.FileSystemInfo::get_LastWriteTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D FileSystemInfo_get_LastWriteTime_m5009457B3D837E929AF4FBC9E2738F15BB6476C5 (FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserItem::set_IsDirectory(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileBrowserItem_set_IsDirectory_m9F7592FBAF14295A01ED6D87656F7A648229FA2B_inline (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean SimpleFileBrowser.FileBrowser::get_AllowMultiSelection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FileBrowser_get_AllowMultiSelection_m5CD514F83C2FB8D84F0BD6F780EAF90FAB4F0B79_inline (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowser::OnItemSelected(SimpleFileBrowser.FileBrowserItem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_OnItemSelected_mF25B0D44E64E5A398EBF3718C65A494CCFD07CC1 (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* ___item0, bool ___isDoubleClick1, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean SimpleFileBrowser.FileBrowser::get_MultiSelectionToggleSelectionMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FileBrowser_get_MultiSelectionToggleSelectionMode_mE441032C7477B6CDCB091003C3D00C75502B55C3_inline (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.ListItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem__ctor_mA0B5A84516018300245E2EA04E7C137BE13947C5 (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowser::EnsureWindowIsWithinBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_EnsureWindowIsWithinBounds_mB9776DD5C376A10E4B5ABA75D6B8479694E02853 (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowser::OnWindowDimensionsChanged(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_OnWindowDimensionsChanged_m963BC26F304A2261C5DD8DB1F6A8AD47834ADBE0 (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.RecycledListView::OnViewportDimensionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_OnViewportDimensionsChanged_m2237B1BEE18B250322CE2E7419E489CD814E9D65 (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserItem::SetFile(UnityEngine.Sprite,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_SetFile_mB4B753BFA604F05B00F90107421311AAB0E0FA95 (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon0, String_t* ___name1, bool ___isDirectory2, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem__ctor_m000628680830F8191990ACBD87D5C93085492FD3 (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsLastSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::ActivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_ActivateInputField_m4986DE5488FE44D93DE1D906C140D6500134DF05 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventSystem_get_alreadySelecting_m3DB9F620A5E2976EBF1362F95C05C12031BACCC4_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120_inline (OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* __this, String_t* ___filename0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic__ctor_m61FAEBEC21F22FE00B8CF39A8498AD31F62C0D6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.OnItemClickedHandler::Invoke(SimpleFileBrowser.ListItem)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_inline (OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.ScrollRect>()
inline ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ScrollRect_get_onValueChanged_mA6AF3832A97E82D31BB8C20BCD6E87A300E56C05_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m71C125B79EE35648CFC416CA7DBBC27C8DBAD45A (UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m71C125B79EE35648CFC416CA7DBBC27C8DBAD45A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851 (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669*, const RuntimeMethod*))UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851_gshared)(__this, ___call0, method);
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.RecycledListView::UpdateItemsInTheList(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_UpdateItemsInTheList_mB07D3C000F36B8624BF3C976062F0282F1A07735 (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, bool ___updateAllVisibleItems0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.RecycledListView::CreateItemsBetweenIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_CreateItemsBetweenIndices_m4B0B02E117999A197E4A0DEA516A278F1584A0D2 (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, int32_t ___topIndex0, int32_t ___bottomIndex1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.RecycledListView::DestroyItemsBetweenIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_DestroyItemsBetweenIndices_m28F635E7219C4C10E6E39FF007655C4F529369D8 (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, int32_t ___topIndex0, int32_t ___bottomIndex1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.RecycledListView::UpdateItemContentsBetweenIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_UpdateItemContentsBetweenIndices_m0E70EA7697E8AC97244265F6BF2754470410CF4F (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, int32_t ___topIndex0, int32_t ___bottomIndex1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.RecycledListView::CreateItemAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_CreateItemAtIndex_m3EE332AEF541E25FD8BD5FDBAA9E3EB4ED8F18E2 (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem>::get_Count()
inline int32_t Stack_1_get_Count_m9670CF8806836FEB46CE672C75CEA1ACB706CF2C_inline (Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem>::Pop()
inline ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* Stack_1_Pop_m2DB79BEEAC46CA0F95E450AB79CF477496FA634D (Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78* __this, const RuntimeMethod* method)
{
	return ((  ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* (*) (Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.ListItem::SetAdapter(SimpleFileBrowser.IListViewAdapter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ListItem_SetAdapter_m1803AD912C0AF6D5DFF1174084D94CF168BF11E0_inline (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* __this, RuntimeObject* ___listView0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,SimpleFileBrowser.ListItem>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7A87FE6684BC522309696445F66237AAD2D50827 (Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA* __this, int32_t ___key0, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA*, int32_t, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,SimpleFileBrowser.ListItem>::get_Item(TKey)
inline ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* Dictionary_2_get_Item_m0E1C03676D4E791872A99AB041C306C8B902EB58 (Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* (*) (Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem>::Push(T)
inline void Stack_1_Push_mD9EE743EA81C0D6BD49D98ED4F5780142A7FFB28 (Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78*, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Void SimpleFileBrowser.ListItem::set_Position(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ListItem_set_Position_m418B3AB7AE5529DD304CA048D3C3012849DFEAC3_inline (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,SimpleFileBrowser.ListItem>::.ctor()
inline void Dictionary_2__ctor_mB70BDA2D428588C94AC1C399CEC6CADAE6371FE7 (Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem>::.ctor()
inline void Stack_1__ctor_m8E7BCB8B45FC4751476B177A619B2686668DB34E (Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.String BayatGames.Serialization.Formatters.Json.JsonFormatter::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_SerializeObject_m956FF5AE113893CCF39F8E2B7B32F1366B6EAC41 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void BayatGames.Serialization.Formatters.Json.JsonExtensions::AppendUntilStringEnd(System.Text.StringBuilder,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonExtensions_AppendUntilStringEnd_m9FDD0E1709EFDB0CB3B49F2CB0A0ABD0C3F11E4E (StringBuilder_t* ___builder0, String_t* ___json1, int32_t* ___index2, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E (StreamingContext_t56760522A751890146EE45F82F866B55B7E33677* __this, int32_t ___state0, const RuntimeMethod* method) ;
// System.Void BayatGames.Serialization.Formatters.Json.JsonFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFormatter__ctor_m86D45CFA0322444A3A0E02A671E463DA25519B03 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, RuntimeObject* ___selector0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void System.IO.StringWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_m072DFF5FFA84EBA7C38B282975D053E738C56E6D (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* __this, const RuntimeMethod* method) ;
// System.Void BayatGames.Serialization.Formatters.Json.JsonFormatter::Serialize(System.IO.TextWriter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFormatter_Serialize_m3E88E1ABEDD01031E9F1510F727EE323C56A3FF0 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___output0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void BayatGames.Serialization.Formatters.Json.JsonTextWriter::.ctor(System.IO.TextWriter,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextWriter__ctor_m29262AA3EC180CDEAC28EBE4C0CDBBC529D74373 (JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, RuntimeObject* ___selector1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Object BayatGames.Serialization.Formatters.Json.JsonFormatter::Deserialize(System.IO.TextReader,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonFormatter_Deserialize_m9F52247A22CF3BD2159BAA025FA70A9986F377F3 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___input0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void BayatGames.Serialization.Formatters.Json.JsonTextReader::.ctor(System.IO.TextReader,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextReader__ctor_mEFE987FB6C89C6CB8EFCFDE996C0E8C222C1A678 (JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, RuntimeObject* ___selector1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) ;
// System.Void BayatGames.Serialization.Formatters.Json.JsonFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFormatter__ctor_m4076518176650A20C5D22108A603CF296655FA4C (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, const RuntimeMethod* method) ;
// System.String BayatGames.Serialization.Formatters.Json.JsonFormatter::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_Serialize_m5A7540A0CF91DCC70DEE7C8F2D459B776BEFA6B1 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Object BayatGames.Serialization.Formatters.Json.JsonFormatter::Deserialize(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonFormatter_Deserialize_mCB230A49FEDD5AE5D726CF5F32C980E949B71354 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, String_t* ___input0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Void BayatGames.Serialization.Formatters.Json.JsonReader::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mD25427CE289FAC14CBCBF402BB9AA465B735BD22 (JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17* __this, RuntimeObject* ___selector0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.String BayatGames.Serialization.Formatters.Json.JsonExtensions::RemoveWhitespaceJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonExtensions_RemoveWhitespaceJson_mBDDE45D16A07C4EB4D2300E7894B3DD34978477D (String_t* ___json0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___value0, Type_t* ___conversionType1, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.String[] BayatGames.Serialization.Formatters.Json.JsonExtensions::SplitJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* JsonExtensions_SplitJson_m8C9A649E94EDA7B6DF75A964F6283F81342E1FBC (String_t* ___json0, const RuntimeMethod* method) ;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___elementType0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___value0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554 (Type_t* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types0, const RuntimeMethod* method) ;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.FormatterServices::GetUninitializedObject(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormatterServices_GetUninitializedObject_mA2B57E3C189694129FE2870B8188421DF78468A1 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.FormatterConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatterConverter__ctor_mC6145A6BF40990C62266BE7EF029A58F2768DC85 (FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::.ctor(System.Type,System.Runtime.Serialization.IFormatterConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo__ctor_m6AC4F08744E2365305F33E8B028832139DAEBEA3 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, Type_t* ___type0, RuntimeObject* ___converter1, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B (FieldInfo_t* ___left0, FieldInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616 (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* __this, const RuntimeMethod* method) ;
// System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_mD1FA406C26994B6C2FE816374F92B2CA12F75A01 (JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9* __this, RuntimeObject* ___selector0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F (Type_t* __this, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPublic_m73C84BEEAE6C993FACC6199B81DBF2B80D3810E5 (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139 (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsLiteral_mBE7DDC6A709439F775873859C82BAAD1EEFF791A (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsNotSerialized_m45A8D6AAF795FCF6E8F51802E956FD5FF37469E1 (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, const RuntimeMethod* method) ;
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationInfoEnumerator_get_Name_m58B6D682B6C829258730C1E952E9099ACDDAE734 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfoEnumerator_get_Value_mBB22843FD639AD42D9A819A9745C21191C3B1DD9 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.Void System.IO.TextWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriter_Dispose_m5B2CA4D250335AB11031AFC7F202AA5B7A70C4D7 (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Object BayatGames.Serialization.Formatters.Json.JsonFormatter::DeserializeObject(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonFormatter_DeserializeObject_mA507740B921D75E80C24401C8175B7B164B1084D (String_t* ___json0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SimpleFileBrowser.FileBrowser/FiletypeIcon
IL2CPP_EXTERN_C void FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshal_pinvoke(const FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F& unmarshaled, FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___icon_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'icon' of type 'FiletypeIcon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___icon_1Exception, NULL);
}
IL2CPP_EXTERN_C void FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshal_pinvoke_back(const FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshaled_pinvoke& marshaled, FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F& unmarshaled)
{
	Exception_t* ___icon_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'icon' of type 'FiletypeIcon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___icon_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleFileBrowser.FileBrowser/FiletypeIcon
IL2CPP_EXTERN_C void FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshal_pinvoke_cleanup(FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SimpleFileBrowser.FileBrowser/FiletypeIcon
IL2CPP_EXTERN_C void FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshal_com(const FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F& unmarshaled, FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshaled_com& marshaled)
{
	Exception_t* ___icon_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'icon' of type 'FiletypeIcon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___icon_1Exception, NULL);
}
IL2CPP_EXTERN_C void FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshal_com_back(const FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshaled_com& marshaled, FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F& unmarshaled)
{
	Exception_t* ___icon_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'icon' of type 'FiletypeIcon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___icon_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleFileBrowser.FileBrowser/FiletypeIcon
IL2CPP_EXTERN_C void FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshal_com_cleanup(FiletypeIcon_tAF9B6250D9C6F9930AC26698F5FEF1667BA6B16F_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SimpleFileBrowser.FileBrowser/QuickLink
IL2CPP_EXTERN_C void QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshal_pinvoke(const QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4& unmarshaled, QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___icon_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'icon' of type 'QuickLink': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___icon_2Exception, NULL);
}
IL2CPP_EXTERN_C void QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshal_pinvoke_back(const QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshaled_pinvoke& marshaled, QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4& unmarshaled)
{
	Exception_t* ___icon_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'icon' of type 'QuickLink': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___icon_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleFileBrowser.FileBrowser/QuickLink
IL2CPP_EXTERN_C void QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshal_pinvoke_cleanup(QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SimpleFileBrowser.FileBrowser/QuickLink
IL2CPP_EXTERN_C void QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshal_com(const QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4& unmarshaled, QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshaled_com& marshaled)
{
	Exception_t* ___icon_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'icon' of type 'QuickLink': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___icon_2Exception, NULL);
}
IL2CPP_EXTERN_C void QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshal_com_back(const QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshaled_com& marshaled, QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4& unmarshaled)
{
	Exception_t* ___icon_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'icon' of type 'QuickLink': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___icon_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleFileBrowser.FileBrowser/QuickLink
IL2CPP_EXTERN_C void QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshal_com_cleanup(QuickLink_tA71513138CFDAD9E66D8B3F3F18F4041FEC50EF4_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleFileBrowser.FileBrowser/Filter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter__ctor_m65464AEA7044CD6BF3510F350C3ACAA351806C87 (Filter_t8153D54E830D1CFED3A7835AA70D748EC23BA0E4* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// internal Filter( string name )
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		// extensions = null;
		__this->___extensions_1 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extensions_1), (void*)(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)NULL);
		// defaultExtension = null;
		__this->___defaultExtension_2 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultExtension_2), (void*)(String_t*)NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowser/Filter::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter__ctor_m063A3F85444DC6F026F664318A431E4776319DAC (Filter_t8153D54E830D1CFED3A7835AA70D748EC23BA0E4* __this, String_t* ___name0, String_t* ___extension1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Filter( string name, string extension )
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		// extension = extension.ToLowerInvariant();
		String_t* L_1 = ___extension1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_1, NULL);
		___extension1 = L_2;
		// extensions = new HashSet<string>() { extension };
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_3, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_4 = L_3;
		String_t* L_5 = ___extension1;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_4, L_5, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		__this->___extensions_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extensions_1), (void*)L_4);
		// defaultExtension = extension;
		String_t* L_7 = ___extension1;
		__this->___defaultExtension_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultExtension_2), (void*)L_7);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowser/Filter::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter__ctor_m179B8215185ACFBDDC5512D6BB09D553135F4874 (Filter_t8153D54E830D1CFED3A7835AA70D748EC23BA0E4* __this, String_t* ___name0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___extensions1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public Filter( string name, params string[] extensions )
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		// for( int i = 0; i < extensions.Length; i++ )
		V_0 = 0;
		goto IL_0020;
	}

IL_0011:
	{
		// extensions[i] = extensions[i].ToLowerInvariant();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___extensions1;
		int32_t L_2 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___extensions1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_6, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_7);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (String_t*)L_7);
		// for( int i = 0; i < extensions.Length; i++ )
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		// for( int i = 0; i < extensions.Length; i++ )
		int32_t L_9 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___extensions1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// this.extensions = new HashSet<string>( extensions );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___extensions1;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_12 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62(L_12, (RuntimeObject*)L_11, HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62_RuntimeMethod_var);
		__this->___extensions_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extensions_1), (void*)L_12);
		// defaultExtension = extensions[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ___extensions1;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		__this->___defaultExtension_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultExtension_2), (void*)L_15);
		// }
		return;
	}
}
// System.String SimpleFileBrowser.FileBrowser/Filter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Filter_ToString_mC1432BE428B37E4C8C93EB3172904F17CB25D395 (Filter_t8153D54E830D1CFED3A7835AA70D748EC23BA0E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		// string result = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		// if( name != null )
		String_t* L_1 = __this->___name_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// result += name;
		String_t* L_2 = V_0;
		String_t* L_3 = __this->___name_0;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, L_3, NULL);
		V_0 = L_4;
	}

IL_001b:
	{
		// if( extensions != null )
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_5 = __this->___extensions_1;
		if (!L_5)
		{
			goto IL_009b;
		}
	}
	{
		// if( name != null )
		String_t* L_6 = __this->___name_0;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// result += " (";
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, NULL);
		V_0 = L_8;
	}

IL_0037:
	{
		// int index = 0;
		V_1 = 0;
		// foreach( string extension in extensions )
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_9 = __this->___extensions_1;
		NullCheck(L_9);
		Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C L_10;
		L_10 = HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B(L_9, HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B_RuntimeMethod_var);
		V_2 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0((&V_2), Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006e_1;
			}

IL_0047_1:
			{
				// foreach( string extension in extensions )
				String_t* L_11;
				L_11 = Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_inline((&V_2), Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_RuntimeMethod_var);
				V_3 = L_11;
				// if( index++ > 0 )
				int32_t L_12 = V_1;
				int32_t L_13 = L_12;
				V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
				if ((((int32_t)L_13) <= ((int32_t)0)))
				{
					goto IL_0066_1;
				}
			}
			{
				// result += ", " + extension;
				String_t* L_14 = V_0;
				String_t* L_15 = V_3;
				String_t* L_16;
				L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_14, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_15, NULL);
				V_0 = L_16;
				goto IL_006e_1;
			}

IL_0066_1:
			{
				// result += extension;
				String_t* L_17 = V_0;
				String_t* L_18 = V_3;
				String_t* L_19;
				L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_17, L_18, NULL);
				V_0 = L_19;
			}

IL_006e_1:
			{
				// foreach( string extension in extensions )
				bool L_20;
				L_20 = Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F((&V_2), Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0047_1;
				}
			}
			{
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// if( name != null )
		String_t* L_21 = __this->___name_0;
		if (!L_21)
		{
			goto IL_009b;
		}
	}
	{
		// result += ")";
		String_t* L_22 = V_0;
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_22, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		V_0 = L_23;
	}

IL_009b:
	{
		// return result;
		String_t* L_24 = V_0;
		return L_24;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnSuccess_Invoke_m312C6E2A6A55109600D1EFF83CF29AA5F9A5C96A_Multicast(OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* currentDelegate = reinterpret_cast<OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___paths0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnSuccess_Invoke_m312C6E2A6A55109600D1EFF83CF29AA5F9A5C96A_OpenInst(OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method)
{
	NullCheck(___paths0);
	typedef void (*FunctionPointerType) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___paths0, method);
}
void OnSuccess_Invoke_m312C6E2A6A55109600D1EFF83CF29AA5F9A5C96A_OpenStatic(OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___paths0, method);
}
void OnSuccess_Invoke_m312C6E2A6A55109600D1EFF83CF29AA5F9A5C96A_OpenStaticInvoker(OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, ___paths0);
}
void OnSuccess_Invoke_m312C6E2A6A55109600D1EFF83CF29AA5F9A5C96A_ClosedStaticInvoker(OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___paths0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9 (OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___paths0' to native representation
	char** ____paths0_marshaled = NULL;
	if (___paths0 != NULL)
	{
		il2cpp_array_size_t ____paths0_Length = (___paths0)->max_length;
		____paths0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____paths0_Length + 1);
		(____paths0_marshaled)[____paths0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_Length); i++)
		{
			(____paths0_marshaled)[i] = il2cpp_codegen_marshal_string((___paths0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____paths0_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____paths0_marshaled);

	// Marshaling cleanup of parameter '___paths0' native representation
	if (____paths0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____paths0_marshaled_CleanupLoopCount = (___paths0 != NULL) ? (___paths0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____paths0_marshaled)[i]);
			(____paths0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____paths0_marshaled);
		____paths0_marshaled = NULL;
	}

}
// System.Void SimpleFileBrowser.FileBrowser/OnSuccess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSuccess__ctor_m76B9CCBA3FF4CD68D2D523501E7D309D1DA68B7B (OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSuccess_Invoke_m312C6E2A6A55109600D1EFF83CF29AA5F9A5C96A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnSuccess_Invoke_m312C6E2A6A55109600D1EFF83CF29AA5F9A5C96A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSuccess_Invoke_m312C6E2A6A55109600D1EFF83CF29AA5F9A5C96A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnSuccess_Invoke_m312C6E2A6A55109600D1EFF83CF29AA5F9A5C96A_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnSuccess_Invoke_m312C6E2A6A55109600D1EFF83CF29AA5F9A5C96A_Multicast;
}
// System.Void SimpleFileBrowser.FileBrowser/OnSuccess::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSuccess_Invoke_m312C6E2A6A55109600D1EFF83CF29AA5F9A5C96A (OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___paths0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SimpleFileBrowser.FileBrowser/OnSuccess::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSuccess_BeginInvoke_m0E80F183537D1C7321CE6DBBA44F814E2818D695 (OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___paths0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SimpleFileBrowser.FileBrowser/OnSuccess::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSuccess_EndInvoke_mFD0759363A4D6B90DDD947CF35F0EB46A6722C75 (OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnCancel_Invoke_mB33450C68364418702BDF6C78B620294A0F3F7CE_Multicast(OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* currentDelegate = reinterpret_cast<OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCancel_Invoke_mB33450C68364418702BDF6C78B620294A0F3F7CE_OpenInst(OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnCancel_Invoke_mB33450C68364418702BDF6C78B620294A0F3F7CE_OpenStatic(OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnCancel_Invoke_mB33450C68364418702BDF6C78B620294A0F3F7CE_OpenStaticInvoker(OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnCancel_Invoke_mB33450C68364418702BDF6C78B620294A0F3F7CE_ClosedStaticInvoker(OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919 (OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void SimpleFileBrowser.FileBrowser/OnCancel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancel__ctor_mF1C0F80E0435477E17A37905C3226D48639C4341 (OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCancel_Invoke_mB33450C68364418702BDF6C78B620294A0F3F7CE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCancel_Invoke_mB33450C68364418702BDF6C78B620294A0F3F7CE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCancel_Invoke_mB33450C68364418702BDF6C78B620294A0F3F7CE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnCancel_Invoke_mB33450C68364418702BDF6C78B620294A0F3F7CE_Multicast;
}
// System.Void SimpleFileBrowser.FileBrowser/OnCancel::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancel_Invoke_mB33450C68364418702BDF6C78B620294A0F3F7CE (OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SimpleFileBrowser.FileBrowser/OnCancel::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCancel_BeginInvoke_mA9037DC4137244723BBC0075005450A98A1574EA (OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void SimpleFileBrowser.FileBrowser/OnCancel::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancel_EndInvoke_m4962D3EB6D44F9B2B26817E4843E70012A8F4C6E (OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DirectoryPickCallback_Invoke_mDCA60E994020778ADBAC3531339DF6D058FBB2CC_Multicast(DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79* __this, String_t* ___rawUri0, String_t* ___name1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79* currentDelegate = reinterpret_cast<DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___rawUri0, ___name1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DirectoryPickCallback_Invoke_mDCA60E994020778ADBAC3531339DF6D058FBB2CC_OpenInst(DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79* __this, String_t* ___rawUri0, String_t* ___name1, const RuntimeMethod* method)
{
	NullCheck(___rawUri0);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___rawUri0, ___name1, method);
}
void DirectoryPickCallback_Invoke_mDCA60E994020778ADBAC3531339DF6D058FBB2CC_OpenStatic(DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79* __this, String_t* ___rawUri0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___rawUri0, ___name1, method);
}
void DirectoryPickCallback_Invoke_mDCA60E994020778ADBAC3531339DF6D058FBB2CC_OpenStaticInvoker(DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79* __this, String_t* ___rawUri0, String_t* ___name1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___rawUri0, ___name1);
}
void DirectoryPickCallback_Invoke_mDCA60E994020778ADBAC3531339DF6D058FBB2CC_ClosedStaticInvoker(DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79* __this, String_t* ___rawUri0, String_t* ___name1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___rawUri0, ___name1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79 (DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79* __this, String_t* ___rawUri0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___rawUri0' to native representation
	char* ____rawUri0_marshaled = NULL;
	____rawUri0_marshaled = il2cpp_codegen_marshal_string(___rawUri0);

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	il2cppPInvokeFunc(____rawUri0_marshaled, ____name1_marshaled);

	// Marshaling cleanup of parameter '___rawUri0' native representation
	il2cpp_codegen_marshal_free(____rawUri0_marshaled);
	____rawUri0_marshaled = NULL;

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

}
// System.Void SimpleFileBrowser.FileBrowser/DirectoryPickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryPickCallback__ctor_mF2F6DC33F61C37A7C2F974E7EE05BB77CC656450 (DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DirectoryPickCallback_Invoke_mDCA60E994020778ADBAC3531339DF6D058FBB2CC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DirectoryPickCallback_Invoke_mDCA60E994020778ADBAC3531339DF6D058FBB2CC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DirectoryPickCallback_Invoke_mDCA60E994020778ADBAC3531339DF6D058FBB2CC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&DirectoryPickCallback_Invoke_mDCA60E994020778ADBAC3531339DF6D058FBB2CC_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DirectoryPickCallback_Invoke_mDCA60E994020778ADBAC3531339DF6D058FBB2CC_Multicast;
}
// System.Void SimpleFileBrowser.FileBrowser/DirectoryPickCallback::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryPickCallback_Invoke_mDCA60E994020778ADBAC3531339DF6D058FBB2CC (DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79* __this, String_t* ___rawUri0, String_t* ___name1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___rawUri0, ___name1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SimpleFileBrowser.FileBrowser/DirectoryPickCallback::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DirectoryPickCallback_BeginInvoke_mA40D0007938EF81BCCFF10F0DD36E920D0A2A26C (DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79* __this, String_t* ___rawUri0, String_t* ___name1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___rawUri0;
	__d_args[1] = ___name1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SimpleFileBrowser.FileBrowser/DirectoryPickCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryPickCallback_EndInvoke_m632E2F98DDA8E2124D791C7A367BBD8CBB141728 (DirectoryPickCallback_tF1318D7FFD295E2E2611CCC1AE0767D654847A79* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleFileBrowser.FileBrowser/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE106F38B8B37D03187CF316AD148148C206684DA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1* L_0 = (U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1*)il2cpp_codegen_object_new(U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m0244C519D5A98B89E27CEC5F6E70115405EB0CA1(L_0, NULL);
		((U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowser/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0244C519D5A98B89E27CEC5F6E70115405EB0CA1 (U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 SimpleFileBrowser.FileBrowser/<>c::<RefreshFiles>b__195_0(SimpleFileBrowser.FileSystemEntry,SimpleFileBrowser.FileSystemEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRefreshFilesU3Eb__195_0_m0D99F783FAC0D8720B73E45997B8144C342379D6 (U3CU3Ec_tD6A3F5F529B57FF979B76B925CBAFFF8B18E10C1* __this, FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 ___entry10, FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 ___entry21, const RuntimeMethod* method) 
{
	{
		// if( entry1.IsDirectory != entry2.IsDirectory )
		bool L_0;
		L_0 = FileSystemEntry_get_IsDirectory_m9CF8DC534222B6057950EA69E24994C37D839263((&___entry10), NULL);
		bool L_1;
		L_1 = FileSystemEntry_get_IsDirectory_m9CF8DC534222B6057950EA69E24994C37D839263((&___entry21), NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001d;
		}
	}
	{
		// return entry1.IsDirectory ? -1 : 1;
		bool L_2;
		L_2 = FileSystemEntry_get_IsDirectory_m9CF8DC534222B6057950EA69E24994C37D839263((&___entry10), NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		return (-1);
	}

IL_001d:
	{
		// return entry1.Name.CompareTo( entry2.Name );
		FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 L_3 = ___entry10;
		String_t* L_4 = L_3.___Name_1;
		FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 L_5 = ___entry21;
		String_t* L_6 = L_5.___Name_1;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF(L_4, L_6, NULL);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleFileBrowser.FileBrowser/<CreateNewFolderCoroutine>d__199::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateNewFolderCoroutineU3Ed__199__ctor_mC4A2B0C1B69E0F97C9541AB8A636A471E97025B4 (U3CCreateNewFolderCoroutineU3Ed__199_tB0D7F02442ADD3909ED887CCE575A53C09D520C4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowser/<CreateNewFolderCoroutine>d__199::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateNewFolderCoroutineU3Ed__199_System_IDisposable_Dispose_m912A03762A70D59EF1C5400A81ECD3DFC901CCBA (U3CCreateNewFolderCoroutineU3Ed__199_tB0D7F02442ADD3909ED887CCE575A53C09D520C4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SimpleFileBrowser.FileBrowser/<CreateNewFolderCoroutine>d__199::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCreateNewFolderCoroutineU3Ed__199_MoveNext_m21060B9D714F3F92B398F57CD22B557F69ADADD9 (U3CCreateNewFolderCoroutineU3Ed__199_tB0D7F02442ADD3909ED887CCE575A53C09D520C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileBrowser_U3CCreateNewFolderCoroutineU3Eb__199_0_m402D783F4B13A13F1A4989CAB00FE0BB5E6060F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00ac;
			}
			case 2:
			{
				goto IL_00df;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// filesScrollRect.verticalNormalizedPosition = 1f;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_3 = V_1;
		NullCheck(L_3);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_4 = L_3->___filesScrollRect_64;
		NullCheck(L_4);
		ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C(L_4, (1.0f), NULL);
		// filesScrollRect.velocity = Vector2.zero;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_5 = V_1;
		NullCheck(L_5);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_6 = L_5->___filesScrollRect_64;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_6);
		ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline(L_6, L_7, NULL);
		// if( selectedFileEntries.Count > 0 )
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_8 = V_1;
		NullCheck(L_8);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = L_8->___selectedFileEntries_84;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_9, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		// selectedFileEntries.Clear();
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_11 = V_1;
		NullCheck(L_11);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = L_11->___selectedFileEntries_84;
		NullCheck(L_12);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_12, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// MultiSelectionToggleSelectionMode = false;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_13 = V_1;
		NullCheck(L_13);
		FileBrowser_set_MultiSelectionToggleSelectionMode_m4C6CFD17F43ACD3F6EDDA3C3DAFCE41AFBABB022(L_13, (bool)0, NULL);
		// filenameInputField.text = string.Empty;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_14 = V_1;
		NullCheck(L_14);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_15 = L_14->___filenameInputField_66;
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_15);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_15, L_16, NULL);
		// filenameInputField.interactable = true;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_17 = V_1;
		NullCheck(L_17);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_18 = L_17->___filenameInputField_66;
		NullCheck(L_18);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_18, (bool)1, NULL);
		// listView.UpdateList();
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_19 = V_1;
		NullCheck(L_19);
		RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* L_20 = L_19->___listView_65;
		NullCheck(L_20);
		RecycledListView_UpdateList_mA53DC38064D6EB42E9D030647CD9C90CA4A00F4B(L_20, NULL);
	}

IL_0090:
	{
		// filesScrollRect.movementType = ScrollRect.MovementType.Unrestricted;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_21 = V_1;
		NullCheck(L_21);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_22 = L_21->___filesScrollRect_64;
		NullCheck(L_22);
		ScrollRect_set_movementType_m2A900C10E6C005FD6866EFF1DA2DF78AA957534A_inline(L_22, 0, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ac:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// filesContainer.anchoredPosition = new Vector2( 0f, -itemHeight );
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_23 = V_1;
		NullCheck(L_23);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = L_23->___filesContainer_63;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_25 = V_1;
		NullCheck(L_25);
		float L_26 = L_25->___itemHeight_52;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_27), (0.0f), ((-L_26)), /*hidden argument*/NULL);
		NullCheck(L_24);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_24, L_27, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00df:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// filesContainer.anchoredPosition = new Vector2( 0f, -itemHeight );
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_28 = V_1;
		NullCheck(L_28);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_29 = L_28->___filesContainer_63;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_30 = V_1;
		NullCheck(L_30);
		float L_31 = L_30->___itemHeight_52;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_32), (0.0f), ((-L_31)), /*hidden argument*/NULL);
		NullCheck(L_29);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_29, L_32, NULL);
		// ( (RectTransform) renameItem.transform ).anchoredPosition = new Vector2( 1f, itemHeight );
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_33 = V_1;
		NullCheck(L_33);
		FileBrowserRenamedItem_tB7E8EAF76EC4BA1F717E321523EC2E21A8A7A6E1* L_34 = L_33->___renameItem_75;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_36 = V_1;
		NullCheck(L_36);
		float L_37 = L_36->___itemHeight_52;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_38), (1.0f), L_37, /*hidden argument*/NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_35, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_35, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_38, NULL);
		// renameItem.Show( string.Empty, selectedFileColor, folderIcon, ( folderName ) =>
		// {
		//     filesScrollRect.movementType = ScrollRect.MovementType.Clamped;
		//     filesContainer.anchoredPosition = Vector2.zero;
		// 
		//     if( string.IsNullOrEmpty( folderName ) )
		//         return;
		// 
		//     FileBrowserHelpers.CreateFolderInDirectory( CurrentPath, folderName );
		// 
		//     pendingFileEntrySelection.Clear();
		//     pendingFileEntrySelection.Add( folderName );
		// 
		//     RefreshFiles( true );
		// 
		//     if( m_pickerMode != PickMode.Files )
		//         filenameInputField.text = folderName;
		// 
		//     // Focus on the newly created folder
		//     int fileEntryIndex = 0;
		//     for( int i = 0; i < validFileEntries.Count; i++ )
		//     {
		//         if( validFileEntries[i].Name == folderName )
		//         {
		//             fileEntryIndex = i;
		//             break;
		//         }
		//     }
		// 
		//     filesScrollRect.verticalNormalizedPosition = validFileEntries.Count > 1 ? ( 1f - (float) fileEntryIndex / ( validFileEntries.Count - 1 ) ) : 1f;
		// } );
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_39 = V_1;
		NullCheck(L_39);
		FileBrowserRenamedItem_tB7E8EAF76EC4BA1F717E321523EC2E21A8A7A6E1* L_40 = L_39->___renameItem_75;
		String_t* L_41 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_42 = V_1;
		NullCheck(L_42);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = L_42->___selectedFileColor_17;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_44 = V_1;
		NullCheck(L_44);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_45 = L_44->___folderIcon_33;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_46 = V_1;
		OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* L_47 = (OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4*)il2cpp_codegen_object_new(OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		OnRenameCompleted__ctor_m0AC16860DB5FE13358EB2F30C513FCB054E5FA27(L_47, L_46, (intptr_t)((void*)FileBrowser_U3CCreateNewFolderCoroutineU3Eb__199_0_m402D783F4B13A13F1A4989CAB00FE0BB5E6060F9_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		FileBrowserRenamedItem_Show_m97F03325128D137986A0E058831610D98D6DF5D7(L_40, L_41, L_43, L_45, L_47, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SimpleFileBrowser.FileBrowser/<CreateNewFolderCoroutine>d__199::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateNewFolderCoroutineU3Ed__199_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0C46E9BB1BB4BDB754BCA4BA577281E59D968AC8 (U3CCreateNewFolderCoroutineU3Ed__199_tB0D7F02442ADD3909ED887CCE575A53C09D520C4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleFileBrowser.FileBrowser/<CreateNewFolderCoroutine>d__199::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateNewFolderCoroutineU3Ed__199_System_Collections_IEnumerator_Reset_m8F3D02203D9D302EAF7148AC226A9D23248A4931 (U3CCreateNewFolderCoroutineU3Ed__199_tB0D7F02442ADD3909ED887CCE575A53C09D520C4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateNewFolderCoroutineU3Ed__199_System_Collections_IEnumerator_Reset_m8F3D02203D9D302EAF7148AC226A9D23248A4931_RuntimeMethod_var)));
	}
}
// System.Object SimpleFileBrowser.FileBrowser/<CreateNewFolderCoroutine>d__199::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateNewFolderCoroutineU3Ed__199_System_Collections_IEnumerator_get_Current_mD5A7869254A22C9EEDBCA4432C95357D9A9FD76F (U3CCreateNewFolderCoroutineU3Ed__199_tB0D7F02442ADD3909ED887CCE575A53C09D520C4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleFileBrowser.FileBrowser/<>c__DisplayClass200_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass200_0__ctor_m2EA0CABEA7B4F45026181DD2E4AC7CEDB43C3A69 (U3CU3Ec__DisplayClass200_0_tA258BC6627E9A0EA981939C70D9DF173627AC86D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowser/<>c__DisplayClass200_0::<RenameSelectedFile>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass200_0_U3CRenameSelectedFileU3Eb__0_mC5FC589FC8248FCA15F6924B54B5077A7E28722E (U3CU3Ec__DisplayClass200_0_tA258BC6627E9A0EA981939C70D9DF173627AC86D* __this, String_t* ___newName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( string.IsNullOrEmpty( newName ) || newName == fileInfo.Name )
		String_t* L_0 = ___newName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = ___newName0;
		FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* L_3 = (&__this->___fileInfo_0);
		String_t* L_4 = L_3->___Name_1;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		// return;
		return;
	}

IL_001c:
	{
		// if( fileInfo.IsDirectory )
		FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* L_6 = (&__this->___fileInfo_0);
		bool L_7;
		L_7 = FileSystemEntry_get_IsDirectory_m9CF8DC534222B6057950EA69E24994C37D839263(L_6, NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// FileBrowserHelpers.RenameDirectory( fileInfo.Path, newName );
		FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* L_8 = (&__this->___fileInfo_0);
		String_t* L_9 = L_8->___Path_0;
		String_t* L_10 = ___newName0;
		String_t* L_11;
		L_11 = FileBrowserHelpers_RenameDirectory_m57956F16A010326F014BE59F41294E858477A07D(L_9, L_10, NULL);
		goto IL_004f;
	}

IL_003d:
	{
		// FileBrowserHelpers.RenameFile( fileInfo.Path, newName );
		FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* L_12 = (&__this->___fileInfo_0);
		String_t* L_13 = L_12->___Path_0;
		String_t* L_14 = ___newName0;
		String_t* L_15;
		L_15 = FileBrowserHelpers_RenameFile_m3E5B239347FB4D33E8340468409CFBD3C6B7DCBD(L_13, L_14, NULL);
	}

IL_004f:
	{
		// pendingFileEntrySelection.Clear();
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_16 = __this->___U3CU3E4__this_1;
		NullCheck(L_16);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = L_16->___pendingFileEntrySelection_85;
		NullCheck(L_17);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_17, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// pendingFileEntrySelection.Add( newName );
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_18 = __this->___U3CU3E4__this_1;
		NullCheck(L_18);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = L_18->___pendingFileEntrySelection_85;
		String_t* L_20 = ___newName0;
		NullCheck(L_19);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_19, L_20, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// RefreshFiles( true );
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_21 = __this->___U3CU3E4__this_1;
		NullCheck(L_21);
		FileBrowser_RefreshFiles_m3EDF0CC814752FF614A40B332B233AC7669B7CA9(L_21, (bool)1, NULL);
		// if( ( fileInfo.IsDirectory && m_pickerMode != PickMode.Files ) || ( !fileInfo.IsDirectory && m_pickerMode != PickMode.Folders ) )
		FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* L_22 = (&__this->___fileInfo_0);
		bool L_23;
		L_23 = FileSystemEntry_get_IsDirectory_m9CF8DC534222B6057950EA69E24994C37D839263(L_22, NULL);
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_24 = __this->___U3CU3E4__this_1;
		NullCheck(L_24);
		int32_t L_25 = L_24->___m_pickerMode_100;
		if (L_25)
		{
			goto IL_00b1;
		}
	}

IL_0096:
	{
		FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* L_26 = (&__this->___fileInfo_0);
		bool L_27;
		L_27 = FileSystemEntry_get_IsDirectory_m9CF8DC534222B6057950EA69E24994C37D839263(L_26, NULL);
		if (L_27)
		{
			goto IL_00c2;
		}
	}
	{
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_28 = __this->___U3CU3E4__this_1;
		NullCheck(L_28);
		int32_t L_29 = L_28->___m_pickerMode_100;
		if ((((int32_t)L_29) == ((int32_t)1)))
		{
			goto IL_00c2;
		}
	}

IL_00b1:
	{
		// filenameInputField.text = newName;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_30 = __this->___U3CU3E4__this_1;
		NullCheck(L_30);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_31 = L_30->___filenameInputField_66;
		String_t* L_32 = ___newName0;
		NullCheck(L_31);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_31, L_32, NULL);
	}

IL_00c2:
	{
		// } );
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSaveDialogU3Ed__218__ctor_m33FBAAE3A20F381E5BD0D467A9D95F7F62AF0339 (U3CWaitForSaveDialogU3Ed__218_tC3ACD1751B824A75B0B297D9B348D83F50B88D95* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSaveDialogU3Ed__218_System_IDisposable_Dispose_mC4D4D67AA61106A93BC06982A5D9E0C09F58E919 (U3CWaitForSaveDialogU3Ed__218_tC3ACD1751B824A75B0B297D9B348D83F50B88D95* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForSaveDialogU3Ed__218_MoveNext_m7917D7279C4A643DCC80D3EFA617A55F7C89AD47 (U3CWaitForSaveDialogU3Ed__218_tC3ACD1751B824A75B0B297D9B348D83F50B88D95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if( !ShowSaveDialog( null, null, pickMode, allowMultiSelection, initialPath, initialFilename, title, saveButtonText ) )
		int32_t L_3 = __this->___pickMode_2;
		bool L_4 = __this->___allowMultiSelection_3;
		String_t* L_5 = __this->___initialPath_4;
		String_t* L_6 = __this->___initialFilename_5;
		String_t* L_7 = __this->___title_6;
		String_t* L_8 = __this->___saveButtonText_7;
		il2cpp_codegen_runtime_class_init_inline(FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = FileBrowser_ShowSaveDialog_mF39F7FEA5CD7FAB621E9C90EE40D6AE07A9C09F4((OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9*)NULL, (OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919*)NULL, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0046:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0056:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005d:
	{
		// while( Instance.gameObject.activeSelf )
		il2cpp_codegen_runtime_class_init_inline(FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC_il2cpp_TypeInfo_var);
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_10;
		L_10 = FileBrowser_get_Instance_m3845763038DC80A9C50144D1658D6DB6EFEFDDDA(NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_11, NULL);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForSaveDialogU3Ed__218_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m210D094B02CB2A140115DFDF5753061D39D9FDAF (U3CWaitForSaveDialogU3Ed__218_tC3ACD1751B824A75B0B297D9B348D83F50B88D95* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSaveDialogU3Ed__218_System_Collections_IEnumerator_Reset_m1796C3E29F679E5476B25E232802DFDD3BECBE71 (U3CWaitForSaveDialogU3Ed__218_tC3ACD1751B824A75B0B297D9B348D83F50B88D95* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForSaveDialogU3Ed__218_System_Collections_IEnumerator_Reset_m1796C3E29F679E5476B25E232802DFDD3BECBE71_RuntimeMethod_var)));
	}
}
// System.Object SimpleFileBrowser.FileBrowser/<WaitForSaveDialog>d__218::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForSaveDialogU3Ed__218_System_Collections_IEnumerator_get_Current_m3808434ACA5BA27AA50B6403B8D5C9F6E5BFCBF8 (U3CWaitForSaveDialogU3Ed__218_tC3ACD1751B824A75B0B297D9B348D83F50B88D95* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForLoadDialogU3Ed__219__ctor_m7D6946B99964D0A885BAB968EDCAD39F02C11204 (U3CWaitForLoadDialogU3Ed__219_tFA869042CB0D21BA06BC7D1FA01C4784902E149A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForLoadDialogU3Ed__219_System_IDisposable_Dispose_mDBCABF616B3B3A8197C1295A64820F964124A607 (U3CWaitForLoadDialogU3Ed__219_tFA869042CB0D21BA06BC7D1FA01C4784902E149A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForLoadDialogU3Ed__219_MoveNext_m2C4BAD6770F434A2CBD61640FC71C0D49F175DE4 (U3CWaitForLoadDialogU3Ed__219_tFA869042CB0D21BA06BC7D1FA01C4784902E149A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if( !ShowLoadDialog( null, null, pickMode, allowMultiSelection, initialPath, initialFilename, title, loadButtonText ) )
		int32_t L_3 = __this->___pickMode_2;
		bool L_4 = __this->___allowMultiSelection_3;
		String_t* L_5 = __this->___initialPath_4;
		String_t* L_6 = __this->___initialFilename_5;
		String_t* L_7 = __this->___title_6;
		String_t* L_8 = __this->___loadButtonText_7;
		il2cpp_codegen_runtime_class_init_inline(FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = FileBrowser_ShowLoadDialog_mBFC7D4E791C6C2AFE850393A29A00C7EAE2BCE40((OnSuccess_t4C073BB20F440FCD4682C12350F071246BB3B7C9*)NULL, (OnCancel_t0B79566E5ECED9ADC8170B98E037657346F39919*)NULL, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0046:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0056:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005d:
	{
		// while( Instance.gameObject.activeSelf )
		il2cpp_codegen_runtime_class_init_inline(FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC_il2cpp_TypeInfo_var);
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_10;
		L_10 = FileBrowser_get_Instance_m3845763038DC80A9C50144D1658D6DB6EFEFDDDA(NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_11, NULL);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForLoadDialogU3Ed__219_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m797A6B8FE1304C98C80C5D33EAD9C9D277394130 (U3CWaitForLoadDialogU3Ed__219_tFA869042CB0D21BA06BC7D1FA01C4784902E149A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForLoadDialogU3Ed__219_System_Collections_IEnumerator_Reset_mFFFBD0A9D3D983350CD6A33AD5DBC97E986AE449 (U3CWaitForLoadDialogU3Ed__219_tFA869042CB0D21BA06BC7D1FA01C4784902E149A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForLoadDialogU3Ed__219_System_Collections_IEnumerator_Reset_mFFFBD0A9D3D983350CD6A33AD5DBC97E986AE449_RuntimeMethod_var)));
	}
}
// System.Object SimpleFileBrowser.FileBrowser/<WaitForLoadDialog>d__219::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForLoadDialogU3Ed__219_System_Collections_IEnumerator_get_Current_m488DBF2A039BBA393E86A16BBC1B306BFA12B9B2 (U3CWaitForLoadDialogU3Ed__219_tFA869042CB0D21BA06BC7D1FA01C4784902E149A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleFileBrowser.FileBrowserContextMenu::Show(System.Boolean,System.Boolean,System.Boolean,System.Boolean,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserContextMenu_Show_mE5A2CBCBBD46F067D231ED64336D11FF23DEDCDE (FileBrowserContextMenu_t80E73A074B4D276E4A27A7557C00988732BE6B23* __this, bool ___selectAllButtonVisible0, bool ___deselectAllButtonVisible1, bool ___deleteButtonVisible2, bool ___renameButtonVisible3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position4, bool ___isMoreOptionsMenu5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// selectAllButton.gameObject.SetActive( selectAllButtonVisible );
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___selectAllButton_6;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2 = ___selectAllButtonVisible0;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// deselectAllButton.gameObject.SetActive( deselectAllButtonVisible );
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___deselectAllButton_7;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		bool L_5 = ___deselectAllButtonVisible1;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
		// deleteButton.gameObject.SetActive( deleteButtonVisible );
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___deleteButton_8;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		bool L_8 = ___deleteButtonVisible2;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, L_8, NULL);
		// renameButton.gameObject.SetActive( renameButtonVisible );
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___renameButton_9;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		bool L_11 = ___renameButtonVisible3;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, L_11, NULL);
		// selectAllButtonSeparator.SetActive( !deselectAllButtonVisible );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___selectAllButtonSeparator_10;
		bool L_13 = ___deselectAllButtonVisible1;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0), NULL);
		// rectTransform.anchoredPosition = position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___rectTransform_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___position4;
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_14, L_15, NULL);
		// gameObject.SetActive( true );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// if( isMoreOptionsMenu )
		bool L_17 = ___isMoreOptionsMenu5;
		if (!L_17)
		{
			goto IL_0082;
		}
	}
	{
		// rectTransform.pivot = Vector2.one;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->___rectTransform_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		NullCheck(L_18);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_18, L_19, NULL);
		return;
	}

IL_0082:
	{
		// LayoutRebuilder.ForceRebuildLayoutImmediate( rectTransform );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->___rectTransform_5;
		il2cpp_codegen_runtime_class_init_inline(LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		LayoutRebuilder_ForceRebuildLayoutImmediate_mCCA094579654469919EFA4B5AA5D9AF93CD67B4A(L_20, NULL);
		// Vector2 size = rectTransform.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = __this->___rectTransform_5;
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_21, NULL);
		V_0 = L_22;
		// Vector2 canvasSize = fileBrowser.rectTransform.sizeDelta;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_23 = __this->___fileBrowser_4;
		NullCheck(L_23);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = L_23->___rectTransform_79;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_24, NULL);
		V_1 = L_25;
		// Vector2 positionOffset = canvasSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_1;
		V_2 = L_26;
		// positionOffset.Scale( fileBrowser.rectTransform.pivot );
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_27 = __this->___fileBrowser_4;
		NullCheck(L_27);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28 = L_27->___rectTransform_79;
		NullCheck(L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_28, NULL);
		Vector2_Scale_mEACE26803ED193717CE821462D85F1CA0573C051_inline((&V_2), L_29, NULL);
		// position += positionOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___position4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_30, L_31, NULL);
		___position4 = L_32;
		// Vector2 cornerPos = position + new Vector2( size.x + minDistanceToEdges, -size.y - minDistanceToEdges );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = ___position4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_0;
		float L_35 = L_34.___x_0;
		float L_36 = __this->___minDistanceToEdges_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_0;
		float L_38 = L_37.___y_1;
		float L_39 = __this->___minDistanceToEdges_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), ((float)il2cpp_codegen_add(L_35, L_36)), ((float)il2cpp_codegen_subtract(((-L_38)), L_39)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_33, L_40, NULL);
		V_3 = L_41;
		// if( cornerPos.x <= canvasSize.x && cornerPos.y >= 0f )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_3;
		float L_43 = L_42.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_1;
		float L_45 = L_44.___x_0;
		if ((!(((float)L_43) <= ((float)L_45))))
		{
			goto IL_012b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = V_3;
		float L_47 = L_46.___y_1;
		if ((!(((float)L_47) >= ((float)(0.0f)))))
		{
			goto IL_012b;
		}
	}
	{
		// rectTransform.pivot = new Vector2( 0f, 1f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_48 = __this->___rectTransform_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_49), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_48);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_48, L_49, NULL);
		return;
	}

IL_012b:
	{
		// cornerPos = position - new Vector2( size.x + minDistanceToEdges, size.y + minDistanceToEdges );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = ___position4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_0;
		float L_52 = L_51.___x_0;
		float L_53 = __this->___minDistanceToEdges_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = V_0;
		float L_55 = L_54.___y_1;
		float L_56 = __this->___minDistanceToEdges_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_57), ((float)il2cpp_codegen_add(L_52, L_53)), ((float)il2cpp_codegen_add(L_55, L_56)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_50, L_57, NULL);
		V_3 = L_58;
		// if( cornerPos.x >= 0f && cornerPos.y >= 0f )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_3;
		float L_60 = L_59.___x_0;
		if ((!(((float)L_60) >= ((float)(0.0f)))))
		{
			goto IL_017d;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = V_3;
		float L_62 = L_61.___y_1;
		if ((!(((float)L_62) >= ((float)(0.0f)))))
		{
			goto IL_017d;
		}
	}
	{
		// rectTransform.pivot = Vector2.one;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_63 = __this->___rectTransform_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64;
		L_64 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		NullCheck(L_63);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_63, L_64, NULL);
		return;
	}

IL_017d:
	{
		// cornerPos = position + new Vector2( size.x + minDistanceToEdges, size.y + minDistanceToEdges );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65 = ___position4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = V_0;
		float L_67 = L_66.___x_0;
		float L_68 = __this->___minDistanceToEdges_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_0;
		float L_70 = L_69.___y_1;
		float L_71 = __this->___minDistanceToEdges_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_72), ((float)il2cpp_codegen_add(L_67, L_68)), ((float)il2cpp_codegen_add(L_70, L_71)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_65, L_72, NULL);
		V_3 = L_73;
		// if( cornerPos.x <= canvasSize.x && cornerPos.y <= canvasSize.y )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74 = V_3;
		float L_75 = L_74.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76 = V_1;
		float L_77 = L_76.___x_0;
		if ((!(((float)L_75) <= ((float)L_77))))
		{
			goto IL_01d1;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78 = V_3;
		float L_79 = L_78.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80 = V_1;
		float L_81 = L_80.___y_1;
		if ((!(((float)L_79) <= ((float)L_81))))
		{
			goto IL_01d1;
		}
	}
	{
		// rectTransform.pivot = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_82 = __this->___rectTransform_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83;
		L_83 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_82);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_82, L_83, NULL);
		return;
	}

IL_01d1:
	{
		// rectTransform.pivot = new Vector2( 1f, 0f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_84 = __this->___rectTransform_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85;
		memset((&L_85), 0, sizeof(L_85));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_85), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_84);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_84, L_85, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserContextMenu::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserContextMenu_Hide_m96EA64E5D219C3D2588F2BF74FA59B510716E34D (FileBrowserContextMenu_t80E73A074B4D276E4A27A7557C00988732BE6B23* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserContextMenu::OnSelectAllButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserContextMenu_OnSelectAllButtonClicked_m6B66AD0B70D7365C8B57A09C6B0CCF575B8BAAD6 (FileBrowserContextMenu_t80E73A074B4D276E4A27A7557C00988732BE6B23* __this, const RuntimeMethod* method) 
{
	{
		// Hide();
		FileBrowserContextMenu_Hide_m96EA64E5D219C3D2588F2BF74FA59B510716E34D(__this, NULL);
		// fileBrowser.SelectAllFiles();
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_0 = __this->___fileBrowser_4;
		NullCheck(L_0);
		FileBrowser_SelectAllFiles_m6565B9098103CDFC96FC177B96B1DA009536CD0D(L_0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserContextMenu::OnDeselectAllButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserContextMenu_OnDeselectAllButtonClicked_mC0686EBAA56E7DA079A08F49F491E2149A33A172 (FileBrowserContextMenu_t80E73A074B4D276E4A27A7557C00988732BE6B23* __this, const RuntimeMethod* method) 
{
	{
		// Hide();
		FileBrowserContextMenu_Hide_m96EA64E5D219C3D2588F2BF74FA59B510716E34D(__this, NULL);
		// fileBrowser.DeselectAllFiles();
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_0 = __this->___fileBrowser_4;
		NullCheck(L_0);
		FileBrowser_DeselectAllFiles_m34796F35C8E2B4F462AB2A582D1E2951E82F52E1(L_0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserContextMenu::OnCreateFolderButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserContextMenu_OnCreateFolderButtonClicked_mE1E21B7D6F55B13D4CC03DF51D2FCC2ACD83D4E9 (FileBrowserContextMenu_t80E73A074B4D276E4A27A7557C00988732BE6B23* __this, const RuntimeMethod* method) 
{
	{
		// Hide();
		FileBrowserContextMenu_Hide_m96EA64E5D219C3D2588F2BF74FA59B510716E34D(__this, NULL);
		// fileBrowser.CreateNewFolder();
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_0 = __this->___fileBrowser_4;
		NullCheck(L_0);
		FileBrowser_CreateNewFolder_m48287662AE72D8CD84F9085379C6D8D6960A8676(L_0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserContextMenu::OnDeleteButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserContextMenu_OnDeleteButtonClicked_mCECBC5E1776791CD2F13E059F9E18FAF6623ADF7 (FileBrowserContextMenu_t80E73A074B4D276E4A27A7557C00988732BE6B23* __this, const RuntimeMethod* method) 
{
	{
		// Hide();
		FileBrowserContextMenu_Hide_m96EA64E5D219C3D2588F2BF74FA59B510716E34D(__this, NULL);
		// fileBrowser.DeleteSelectedFiles();
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_0 = __this->___fileBrowser_4;
		NullCheck(L_0);
		FileBrowser_DeleteSelectedFiles_m54EEE2BF1DF3FEB5CE1EA112D4BFB8087B4BA4B9(L_0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserContextMenu::OnRenameButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserContextMenu_OnRenameButtonClicked_m1526AE601AD7B7343F10472641A319D4AED326DF (FileBrowserContextMenu_t80E73A074B4D276E4A27A7557C00988732BE6B23* __this, const RuntimeMethod* method) 
{
	{
		// Hide();
		FileBrowserContextMenu_Hide_m96EA64E5D219C3D2588F2BF74FA59B510716E34D(__this, NULL);
		// fileBrowser.RenameSelectedFile();
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_0 = __this->___fileBrowser_4;
		NullCheck(L_0);
		FileBrowser_RenameSelectedFile_mAC3FAB8C923A08194B8F6FC1043EB77472ADD2CE(L_0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserContextMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserContextMenu__ctor_m158FB938A7E55DE36AFBF65E22802B898868DEB7 (FileBrowserContextMenu_t80E73A074B4D276E4A27A7557C00988732BE6B23* __this, const RuntimeMethod* method) 
{
	{
		// private float minDistanceToEdges = 10f;
		__this->___minDistanceToEdges_11 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleFileBrowser.FileBrowserCursorHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserCursorHandler__ctor_m1FD630DFE06871A2716DBEF5A9303E1B69350297 (FileBrowserCursorHandler_t6D8D15963F508CBDE7F9C98D2CBF39F23D8BADBB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::Show(SimpleFileBrowser.FileBrowser,System.Collections.Generic.List`1<SimpleFileBrowser.FileSystemEntry>,System.Collections.Generic.List`1<System.Int32>,SimpleFileBrowser.FileBrowserDeleteConfirmationPanel/OnDeletionConfirmed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserDeleteConfirmationPanel_Show_mB573317E4143B0666FA1D6197188040B36A9AA83 (FileBrowserDeleteConfirmationPanel_tA7515B8CE379572856152113B0BB808555ACA6B6* __this, FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* ___fileBrowser0, List_1_t5D818DED56F6D90F2F1BC32567F7A20945EE6926* ___items1, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___selectedItemIndices2, OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* ___onDeletionConfirmed3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9AD3730A1BB8D9560AD1FC0125C3786AB61F6644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral009A8934F0648E3EB0A447C7544AE01B1ED99410);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B3083335A631B0ED536F90AB3EB03F976A064D6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// this.onDeletionConfirmed = onDeletionConfirmed;
		OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* L_0 = ___onDeletionConfirmed3;
		__this->___onDeletionConfirmed_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onDeletionConfirmed_12), (void*)L_0);
		// for( int i = 0; i < deletedItems.Length; i++ )
		V_0 = 0;
		goto IL_0026;
	}

IL_000c:
	{
		// deletedItems[i].SetActive( i < selectedItemIndices.Count );
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___deletedItems_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = ___selectedItemIndices2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_6, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0), NULL);
		// for( int i = 0; i < deletedItems.Length; i++ )
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0026:
	{
		// for( int i = 0; i < deletedItems.Length; i++ )
		int32_t L_9 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___deletedItems_4;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// for( int i = 0; i < deletedItems.Length && i < selectedItemIndices.Count; i++ )
		V_1 = 0;
		goto IL_0078;
	}

IL_0035:
	{
		// deletedItemIcons[i].sprite = fileBrowser.GetIconForFileEntry( items[selectedItemIndices[i]] );
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_11 = __this->___deletedItemIcons_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_15 = ___fileBrowser0;
		List_1_t5D818DED56F6D90F2F1BC32567F7A20945EE6926* L_16 = ___items1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_17 = ___selectedItemIndices2;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_17, L_18, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_16);
		FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 L_20;
		L_20 = List_1_get_Item_m9AD3730A1BB8D9560AD1FC0125C3786AB61F6644(L_16, L_19, List_1_get_Item_m9AD3730A1BB8D9560AD1FC0125C3786AB61F6644_RuntimeMethod_var);
		NullCheck(L_15);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21;
		L_21 = FileBrowser_GetIconForFileEntry_mADA5AD9742BCF63B96BF7CCCDB254C1632678E3F(L_15, L_20, NULL);
		NullCheck(L_14);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_14, L_21, NULL);
		// deletedItemNames[i].text = items[selectedItemIndices[i]].Name;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_22 = __this->___deletedItemNames_6;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		List_1_t5D818DED56F6D90F2F1BC32567F7A20945EE6926* L_26 = ___items1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_27 = ___selectedItemIndices2;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29;
		L_29 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_27, L_28, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_26);
		FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 L_30;
		L_30 = List_1_get_Item_m9AD3730A1BB8D9560AD1FC0125C3786AB61F6644(L_26, L_29, List_1_get_Item_m9AD3730A1BB8D9560AD1FC0125C3786AB61F6644_RuntimeMethod_var);
		String_t* L_31 = L_30.___Name_1;
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_31);
		// for( int i = 0; i < deletedItems.Length && i < selectedItemIndices.Count; i++ )
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0078:
	{
		// for( int i = 0; i < deletedItems.Length && i < selectedItemIndices.Count; i++ )
		int32_t L_33 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_34 = __this->___deletedItems_4;
		NullCheck(L_34);
		if ((((int32_t)L_33) >= ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_35 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_36 = ___selectedItemIndices2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_36, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0035;
		}
	}

IL_008c:
	{
		// if( selectedItemIndices.Count > deletedItems.Length )
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_38 = ___selectedItemIndices2;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_38, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_40 = __this->___deletedItems_4;
		NullCheck(L_40);
		if ((((int32_t)L_39) <= ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_00db;
		}
	}
	{
		// deletedItemsRestLabel.text = string.Concat( "...and ", ( selectedItemIndices.Count - deletedItems.Length ).ToString(), " other" );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_41 = __this->___deletedItemsRestLabel_8;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_42 = ___selectedItemIndices2;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_42, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_44 = __this->___deletedItems_4;
		NullCheck(L_44);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_43, ((int32_t)(((RuntimeArray*)L_44)->max_length))));
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_46;
		L_46 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral3B3083335A631B0ED536F90AB3EB03F976A064D6, L_45, _stringLiteral009A8934F0648E3EB0A447C7544AE01B1ED99410, NULL);
		NullCheck(L_41);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, L_46);
		// deletedItemsRest.SetActive( true );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___deletedItemsRest_7;
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)1, NULL);
		goto IL_00e7;
	}

IL_00db:
	{
		// deletedItemsRest.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___deletedItemsRest_7;
		NullCheck(L_48);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)0, NULL);
	}

IL_00e7:
	{
		// gameObject.SetActive( true );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_49);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_49, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::OnCanvasDimensionsChanged(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserDeleteConfirmationPanel_OnCanvasDimensionsChanged_mBB3FA2BE241663F41E85FA08B3739E27815ABD93 (FileBrowserDeleteConfirmationPanel_tA7515B8CE379572856152113B0BB808555ACA6B6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size0, const RuntimeMethod* method) 
{
	{
		// if( size.x >= narrowScreenWidth )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___size0;
		float L_1 = L_0.___x_0;
		float L_2 = __this->___narrowScreenWidth_11;
		if ((!(((float)L_1) >= ((float)L_2))))
		{
			goto IL_005d;
		}
	}
	{
		// yesButtonTransform.anchorMin = new Vector2( 0.5f, 0f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___yesButtonTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_3, L_4, NULL);
		// yesButtonTransform.anchorMax = new Vector2( 0.75f, 1f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___yesButtonTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (0.75f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_5, L_6, NULL);
		// noButtonTransform.anchorMin = new Vector2( 0.75f, 0f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___noButtonTransform_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), (0.75f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_7, L_8, NULL);
		return;
	}

IL_005d:
	{
		// yesButtonTransform.anchorMin = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___yesButtonTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_9);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_9, L_10, NULL);
		// yesButtonTransform.anchorMax = new Vector2( 0.5f, 1f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___yesButtonTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_11, L_12, NULL);
		// noButtonTransform.anchorMin = new Vector2( 0.5f, 0f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___noButtonTransform_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::YesButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserDeleteConfirmationPanel_YesButtonClicked_m3D99B1816EB8762DA9068FA0D52A8DFE2006F644 (FileBrowserDeleteConfirmationPanel_tA7515B8CE379572856152113B0BB808555ACA6B6* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if( onDeletionConfirmed != null )
		OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* L_1 = __this->___onDeletionConfirmed_12;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// onDeletionConfirmed();
		OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* L_2 = __this->___onDeletionConfirmed_12;
		NullCheck(L_2);
		OnDeletionConfirmed_Invoke_mA8275C4700A288B8CD107292580B81F20873F639_inline(L_2, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::NoButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserDeleteConfirmationPanel_NoButtonClicked_mC6608BBF158C1E5875EDC5B17A7E2B69F259BD02 (FileBrowserDeleteConfirmationPanel_tA7515B8CE379572856152113B0BB808555ACA6B6* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserDeleteConfirmationPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserDeleteConfirmationPanel__ctor_mBC79D05333B34491D3E2B8F127CF2DC70A792603 (FileBrowserDeleteConfirmationPanel_tA7515B8CE379572856152113B0BB808555ACA6B6* __this, const RuntimeMethod* method) 
{
	{
		// private float narrowScreenWidth = 380f;
		__this->___narrowScreenWidth_11 = (380.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnDeletionConfirmed_Invoke_mA8275C4700A288B8CD107292580B81F20873F639_Multicast(OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* currentDelegate = reinterpret_cast<OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnDeletionConfirmed_Invoke_mA8275C4700A288B8CD107292580B81F20873F639_OpenInst(OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnDeletionConfirmed_Invoke_mA8275C4700A288B8CD107292580B81F20873F639_OpenStatic(OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnDeletionConfirmed_Invoke_mA8275C4700A288B8CD107292580B81F20873F639_OpenStaticInvoker(OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnDeletionConfirmed_Invoke_mA8275C4700A288B8CD107292580B81F20873F639_ClosedStaticInvoker(OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199 (OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void SimpleFileBrowser.FileBrowserDeleteConfirmationPanel/OnDeletionConfirmed::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDeletionConfirmed__ctor_mD02A2A0F1AB0225BF56924FAB1358CF3BF9F4615 (OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnDeletionConfirmed_Invoke_mA8275C4700A288B8CD107292580B81F20873F639_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnDeletionConfirmed_Invoke_mA8275C4700A288B8CD107292580B81F20873F639_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnDeletionConfirmed_Invoke_mA8275C4700A288B8CD107292580B81F20873F639_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnDeletionConfirmed_Invoke_mA8275C4700A288B8CD107292580B81F20873F639_Multicast;
}
// System.Void SimpleFileBrowser.FileBrowserDeleteConfirmationPanel/OnDeletionConfirmed::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDeletionConfirmed_Invoke_mA8275C4700A288B8CD107292580B81F20873F639 (OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SimpleFileBrowser.FileBrowserDeleteConfirmationPanel/OnDeletionConfirmed::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDeletionConfirmed_BeginInvoke_m223517BF135FF7B59892345E6D63894C9C50CB36 (OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void SimpleFileBrowser.FileBrowserDeleteConfirmationPanel/OnDeletionConfirmed::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDeletionConfirmed_EndInvoke_mF0C0F8C92318AE79A0C8976F50943285F4F8E3FD (OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SimpleFileBrowser.FileSystemEntry
IL2CPP_EXTERN_C void FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshal_pinvoke(const FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246& unmarshaled, FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshaled_pinvoke& marshaled)
{
	marshaled.___Path_0 = il2cpp_codegen_marshal_string(unmarshaled.___Path_0);
	marshaled.___Name_1 = il2cpp_codegen_marshal_string(unmarshaled.___Name_1);
	marshaled.___Extension_2 = il2cpp_codegen_marshal_string(unmarshaled.___Extension_2);
	marshaled.___Attributes_3 = unmarshaled.___Attributes_3;
}
IL2CPP_EXTERN_C void FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshal_pinvoke_back(const FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshaled_pinvoke& marshaled, FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246& unmarshaled)
{
	unmarshaled.___Path_0 = il2cpp_codegen_marshal_string_result(marshaled.___Path_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Path_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Path_0));
	unmarshaled.___Name_1 = il2cpp_codegen_marshal_string_result(marshaled.___Name_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Name_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Name_1));
	unmarshaled.___Extension_2 = il2cpp_codegen_marshal_string_result(marshaled.___Extension_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Extension_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Extension_2));
	int32_t unmarshaledAttributes_temp_3 = 0;
	unmarshaledAttributes_temp_3 = marshaled.___Attributes_3;
	unmarshaled.___Attributes_3 = unmarshaledAttributes_temp_3;
}
// Conversion method for clean up from marshalling of: SimpleFileBrowser.FileSystemEntry
IL2CPP_EXTERN_C void FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshal_pinvoke_cleanup(FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Path_0);
	marshaled.___Path_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Name_1);
	marshaled.___Name_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Extension_2);
	marshaled.___Extension_2 = NULL;
}
// Conversion methods for marshalling of: SimpleFileBrowser.FileSystemEntry
IL2CPP_EXTERN_C void FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshal_com(const FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246& unmarshaled, FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshaled_com& marshaled)
{
	marshaled.___Path_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___Path_0);
	marshaled.___Name_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___Name_1);
	marshaled.___Extension_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___Extension_2);
	marshaled.___Attributes_3 = unmarshaled.___Attributes_3;
}
IL2CPP_EXTERN_C void FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshal_com_back(const FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshaled_com& marshaled, FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246& unmarshaled)
{
	unmarshaled.___Path_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___Path_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Path_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Path_0));
	unmarshaled.___Name_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___Name_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Name_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Name_1));
	unmarshaled.___Extension_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___Extension_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Extension_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Extension_2));
	int32_t unmarshaledAttributes_temp_3 = 0;
	unmarshaledAttributes_temp_3 = marshaled.___Attributes_3;
	unmarshaled.___Attributes_3 = unmarshaledAttributes_temp_3;
}
// Conversion method for clean up from marshalling of: SimpleFileBrowser.FileSystemEntry
IL2CPP_EXTERN_C void FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshal_com_cleanup(FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Path_0);
	marshaled.___Path_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___Name_1);
	marshaled.___Name_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___Extension_2);
	marshaled.___Extension_2 = NULL;
}
// System.Boolean SimpleFileBrowser.FileSystemEntry::get_IsDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystemEntry_get_IsDirectory_m9CF8DC534222B6057950EA69E24994C37D839263 (FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDirectory { get { return ( Attributes & FileAttributes.Directory ) == FileAttributes.Directory; } }
		int32_t L_0 = __this->___Attributes_3;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&((int32_t)16)))) == ((int32_t)((int32_t)16)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool FileSystemEntry_get_IsDirectory_m9CF8DC534222B6057950EA69E24994C37D839263_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246*>(__this + _offset);
	bool _returnValue;
	_returnValue = FileSystemEntry_get_IsDirectory_m9CF8DC534222B6057950EA69E24994C37D839263(_thisAdjusted, method);
	return _returnValue;
}
// System.Void SimpleFileBrowser.FileSystemEntry::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemEntry__ctor_m98A1C0245241C15A7598558CFC8CFBC1CBB68591 (FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* __this, String_t* ___path0, String_t* ___name1, bool ___isDirectory2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* G_B2_0 = NULL;
	FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* G_B3_1 = NULL;
	FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* G_B5_0 = NULL;
	FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* G_B6_1 = NULL;
	{
		// Path = path;
		String_t* L_0 = ___path0;
		__this->___Path_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Path_0), (void*)L_0);
		// Name = name;
		String_t* L_1 = ___name1;
		__this->___Name_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_1), (void*)L_1);
		// Extension = isDirectory ? null : System.IO.Path.GetExtension( name );
		bool L_2 = ___isDirectory2;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = ___name1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_3, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		G_B3_1->___Extension_2 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___Extension_2), (void*)G_B3_0);
		// Attributes = isDirectory ? FileAttributes.Directory : FileAttributes.Normal;
		bool L_5 = ___isDirectory2;
		G_B4_0 = __this;
		if (L_5)
		{
			G_B5_0 = __this;
			goto IL_002b;
		}
	}
	{
		G_B6_0 = ((int32_t)128);
		G_B6_1 = G_B4_0;
		goto IL_002d;
	}

IL_002b:
	{
		G_B6_0 = ((int32_t)16);
		G_B6_1 = G_B5_0;
	}

IL_002d:
	{
		G_B6_1->___Attributes_3 = G_B6_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FileSystemEntry__ctor_m98A1C0245241C15A7598558CFC8CFBC1CBB68591_AdjustorThunk (RuntimeObject* __this, String_t* ___path0, String_t* ___name1, bool ___isDirectory2, const RuntimeMethod* method)
{
	FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246*>(__this + _offset);
	FileSystemEntry__ctor_m98A1C0245241C15A7598558CFC8CFBC1CBB68591(_thisAdjusted, ___path0, ___name1, ___isDirectory2, method);
}
// System.Void SimpleFileBrowser.FileSystemEntry::.ctor(System.IO.FileSystemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemEntry__ctor_mF430AF0B8B46B9648DD5AB64CACBE16FB6252528 (FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* __this, FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* ___fileInfo0, const RuntimeMethod* method) 
{
	{
		// Path = fileInfo.FullName;
		FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* L_0 = ___fileInfo0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_0);
		__this->___Path_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Path_0), (void*)L_1);
		// Name = fileInfo.Name;
		FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* L_2 = ___fileInfo0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.IO.FileSystemInfo::get_Name() */, L_2);
		__this->___Name_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_1), (void*)L_3);
		// Extension = fileInfo.Extension;
		FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* L_4 = ___fileInfo0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = FileSystemInfo_get_Extension_mC1DA9A769E890D35AC34C76DEF46EA3C570F7D71(L_4, NULL);
		__this->___Extension_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Extension_2), (void*)L_5);
		// Attributes = fileInfo.Attributes;
		FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* L_6 = ___fileInfo0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = FileSystemInfo_get_Attributes_m38971A5B147214C5EE193CE9F60628EA834EF6DA(L_6, NULL);
		__this->___Attributes_3 = L_7;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FileSystemEntry__ctor_mF430AF0B8B46B9648DD5AB64CACBE16FB6252528_AdjustorThunk (RuntimeObject* __this, FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* ___fileInfo0, const RuntimeMethod* method)
{
	FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246*>(__this + _offset);
	FileSystemEntry__ctor_mF430AF0B8B46B9648DD5AB64CACBE16FB6252528(_thisAdjusted, ___fileInfo0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AndroidJavaClass SimpleFileBrowser.FileBrowserHelpers::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8899CAE7A33FDDEFDE39165F452FFA9BC98688AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_ajc == null )
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_ajc_0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// m_ajc = new AndroidJavaClass( "com.yasirkula.unity.FileBrowser" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral8899CAE7A33FDDEFDE39165F452FFA9BC98688AA, NULL);
		((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_ajc_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_ajc_0), (void*)L_1);
	}

IL_0016:
	{
		// return m_ajc;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_ajc_0;
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject SimpleFileBrowser.FileBrowserHelpers::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// if( m_context == null )
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_context_1;
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// using( AndroidJavaObject unityClass = new AndroidJavaClass( "com.unity3d.player.UnityPlayer" ) )
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// m_context = unityClass.GetStatic<AndroidJavaObject>( "currentActivity" );
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
			NullCheck(L_4);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
			L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_context_1 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_context_1), (void*)L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// return m_context;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_context_1;
		return L_6;
	}
}
// System.String SimpleFileBrowser.FileBrowserHelpers::get_TemporaryFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE9C364467FA311799A2D07B23F2A30E6BE16412);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_temporaryFilePath == null )
		String_t* L_0 = ((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_temporaryFilePath_2;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_temporaryFilePath = Path.Combine( Application.temporaryCachePath, "tmpFile" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, _stringLiteralCE9C364467FA311799A2D07B23F2A30E6BE16412, NULL);
		((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_temporaryFilePath_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_temporaryFilePath_2), (void*)L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4;
		L_4 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_3, NULL);
	}

IL_0026:
	{
		// return m_temporaryFilePath;
		String_t* L_5 = ((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_temporaryFilePath_2;
		return L_5;
	}
}
// System.Boolean SimpleFileBrowser.FileBrowserHelpers::get_ShouldUseSAF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F22EF407A5C59A4CC893EF10F6CC790F12F88AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_shouldUseSAF == null )
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_shouldUseSAF_3), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		// m_shouldUseSAF = AJC.CallStatic<bool>( "CheckSAF" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_3;
		L_3 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_1, _stringLiteral6F22EF407A5C59A4CC893EF10F6CC790F12F88AD, L_2, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_shouldUseSAF_3 = L_4;
	}

IL_002a:
	{
		// return m_shouldUseSAF.Value;
		bool L_5;
		L_5 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&((FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowserHelpers_t6F6DD5249721799FF549BC981AFC81FCAD662CD5_il2cpp_TypeInfo_var))->___m_shouldUseSAF_3), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		return L_5;
	}
}
// System.Boolean SimpleFileBrowser.FileBrowserHelpers::FileExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileBrowserHelpers_FileExists_mF0493C6F38C38026113B292CB40BF41EE3BCCD7F (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A4B4902A65D338E1F86D18A50879EC823FDAEC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// return AJC.CallStatic<bool>( "SAFEntryExists", Context, path );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___path0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_1);
		bool L_7;
		L_7 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_1, _stringLiteral78A4B4902A65D338E1F86D18A50879EC823FDAEC, L_5, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_7;
	}

IL_0029:
	{
		// return File.Exists( path );
		String_t* L_8 = ___path0;
		bool L_9;
		L_9 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_8, NULL);
		return L_9;
	}
}
// System.Boolean SimpleFileBrowser.FileBrowserHelpers::DirectoryExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileBrowserHelpers_DirectoryExists_m3E13D3AA6C8CB6296C211710B18094A9A2F80D85 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A4B4902A65D338E1F86D18A50879EC823FDAEC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// return AJC.CallStatic<bool>( "SAFEntryExists", Context, path );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___path0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_1);
		bool L_7;
		L_7 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_1, _stringLiteral78A4B4902A65D338E1F86D18A50879EC823FDAEC, L_5, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_7;
	}

IL_0029:
	{
		// return Directory.Exists( path );
		String_t* L_8 = ___path0;
		bool L_9;
		L_9 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_8, NULL);
		return L_9;
	}
}
// System.Boolean SimpleFileBrowser.FileBrowserHelpers::IsDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileBrowserHelpers_IsDirectory_mAD2C3B323A145A08195FF4D8EF9FA599D1322A9E (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD61079644ADCD6250BB5DB991D2C9CCF263E13FC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// return AJC.CallStatic<bool>( "SAFEntryDirectory", Context, path );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___path0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_1);
		bool L_7;
		L_7 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_1, _stringLiteralD61079644ADCD6250BB5DB991D2C9CCF263E13FC, L_5, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_7;
	}

IL_0029:
	{
		// if( Directory.Exists( path ) )
		String_t* L_8 = ___path0;
		bool L_9;
		L_9 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_8, NULL);
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0033:
	{
		// if( File.Exists( path ) )
		String_t* L_10 = ___path0;
		bool L_11;
		L_11 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_10, NULL);
		if (!L_11)
		{
			goto IL_003d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003d:
	{
		// string extension = Path.GetExtension( path );
		String_t* L_12 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_12, NULL);
		V_0 = L_13;
		// return extension == null || extension.Length <= 1; // extension includes '.'
		String_t* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		return (bool)((((int32_t)((((int32_t)L_16) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0054:
	{
		return (bool)1;
	}
}
// SimpleFileBrowser.FileSystemEntry[] SimpleFileBrowser.FileBrowserHelpers::GetEntriesInDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* FileBrowserHelpers_GetEntriesInDirectory_mD4673AB7DEDC68170F11DE8EAA3365D36CA2F3D3 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisFileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_m706E7433C777CFA6A8C90A738C34E9A70781CE9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09D118F02225C61685E23552516BAD09FB7F7C35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DF28F9B6550D416DF3102931950BEEBD8DB8094);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1297249A84B5425E0AAEA8A4221FB2C94ED18CE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A4E11696C6F0CA1AEEE640E0125226FC0BC7737);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FE47837D3AD2CDD816FE51F1892552820FCAB10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAED36B7262CE52C999E860488E4D6B1352B7E39B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7D51F95DBD7F8C00A48D3B0B774B2E7EC58567E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* V_3 = NULL;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	FileSystemInfoU5BU5D_tF7D37070CBD32AA8FF200811C4906E3543061AE7* V_11 = NULL;
	FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_0149;
		}
	}
	{
		// string resultRaw = AJC.CallStatic<string>( "OpenSAFFolder", Context, path );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___path0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_1);
		String_t* L_7;
		L_7 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_1, _stringLiteral7FE47837D3AD2CDD816FE51F1892552820FCAB10, L_5, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_7;
		// int separatorIndex = resultRaw.IndexOf( "<>" );
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_8, _stringLiteral09D118F02225C61685E23552516BAD09FB7F7C35, NULL);
		V_1 = L_9;
		// if( separatorIndex <= 0 )
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		// Debug.LogError( "Entry count does not exist" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD7D51F95DBD7F8C00A48D3B0B774B2E7EC58567E, NULL);
		// return null;
		return (FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D*)NULL;
	}

IL_0048:
	{
		// int entryCount = 0;
		V_2 = 0;
		// for( int i = 0; i < separatorIndex; i++ )
		V_4 = 0;
		goto IL_0082;
	}

IL_004f:
	{
		// char ch = resultRaw[i];
		String_t* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, L_12, NULL);
		V_5 = L_13;
		// if( ch < '0' && ch > '9' )
		Il2CppChar L_14 = V_5;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)48))))
		{
			goto IL_0071;
		}
	}
	{
		Il2CppChar L_15 = V_5;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0071;
		}
	}
	{
		// Debug.LogError( "Couldn't parse entry count" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral1297249A84B5425E0AAEA8A4221FB2C94ED18CE4, NULL);
		// return null;
		return (FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D*)NULL;
	}

IL_0071:
	{
		// entryCount = entryCount * 10 + ( ch - '0' );
		int32_t L_16 = V_2;
		Il2CppChar L_17 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)10))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, ((int32_t)48)))));
		// for( int i = 0; i < separatorIndex; i++ )
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0082:
	{
		// for( int i = 0; i < separatorIndex; i++ )
		int32_t L_19 = V_4;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_004f;
		}
	}
	{
		// if( entryCount <= 0 )
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		// return null;
		return (FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D*)NULL;
	}

IL_008d:
	{
		// FileSystemEntry[] result = new FileSystemEntry[entryCount];
		int32_t L_22 = V_2;
		FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* L_23 = (FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D*)(FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D*)SZArrayNew(FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D_il2cpp_TypeInfo_var, (uint32_t)L_22);
		V_3 = L_23;
		// for( int i = 0; i < entryCount; i++ )
		V_6 = 0;
		goto IL_013f;
	}

IL_009c:
	{
		// separatorIndex += 2;
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 2));
		// if( separatorIndex >= resultRaw.Length )
		int32_t L_25 = V_1;
		String_t* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_26, NULL);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_00b5;
		}
	}
	{
		// Debug.LogError( "Couldn't fetch directory attribute" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral5A4E11696C6F0CA1AEEE640E0125226FC0BC7737, NULL);
		// return null;
		return (FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D*)NULL;
	}

IL_00b5:
	{
		// bool isDirectory = resultRaw[separatorIndex] == 'd';
		String_t* L_28 = V_0;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		Il2CppChar L_30;
		L_30 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_28, L_29, NULL);
		V_7 = (bool)((((int32_t)L_30) == ((int32_t)((int32_t)100)))? 1 : 0);
		// separatorIndex++;
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		// int nextSeparatorIndex = resultRaw.IndexOf( "<>", separatorIndex );
		String_t* L_32 = V_0;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		int32_t L_34;
		L_34 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_32, _stringLiteral09D118F02225C61685E23552516BAD09FB7F7C35, L_33, NULL);
		V_8 = L_34;
		// if( nextSeparatorIndex <= 0 )
		int32_t L_35 = V_8;
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		// Debug.LogError( "Entry name is empty" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralAED36B7262CE52C999E860488E4D6B1352B7E39B, NULL);
		// return null;
		return (FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D*)NULL;
	}

IL_00e5:
	{
		// string entryName = resultRaw.Substring( separatorIndex, nextSeparatorIndex - separatorIndex );
		String_t* L_36 = V_0;
		int32_t L_37 = V_1;
		int32_t L_38 = V_8;
		int32_t L_39 = V_1;
		NullCheck(L_36);
		String_t* L_40;
		L_40 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_36, L_37, ((int32_t)il2cpp_codegen_subtract(L_38, L_39)), NULL);
		V_9 = L_40;
		// separatorIndex = nextSeparatorIndex + 2;
		int32_t L_41 = V_8;
		V_1 = ((int32_t)il2cpp_codegen_add(L_41, 2));
		// nextSeparatorIndex = resultRaw.IndexOf( "<>", separatorIndex );
		String_t* L_42 = V_0;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		int32_t L_44;
		L_44 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_42, _stringLiteral09D118F02225C61685E23552516BAD09FB7F7C35, L_43, NULL);
		V_8 = L_44;
		// if( nextSeparatorIndex <= 0 )
		int32_t L_45 = V_8;
		if ((((int32_t)L_45) > ((int32_t)0)))
		{
			goto IL_0116;
		}
	}
	{
		// Debug.LogError( "Entry rawUri is empty" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral0DF28F9B6550D416DF3102931950BEEBD8DB8094, NULL);
		// return null;
		return (FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D*)NULL;
	}

IL_0116:
	{
		// string rawUri = resultRaw.Substring( separatorIndex, nextSeparatorIndex - separatorIndex );
		String_t* L_46 = V_0;
		int32_t L_47 = V_1;
		int32_t L_48 = V_8;
		int32_t L_49 = V_1;
		NullCheck(L_46);
		String_t* L_50;
		L_50 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_46, L_47, ((int32_t)il2cpp_codegen_subtract(L_48, L_49)), NULL);
		V_10 = L_50;
		// separatorIndex = nextSeparatorIndex;
		int32_t L_51 = V_8;
		V_1 = L_51;
		// result[i] = new FileSystemEntry( rawUri, entryName, isDirectory );
		FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* L_52 = V_3;
		int32_t L_53 = V_6;
		String_t* L_54 = V_10;
		String_t* L_55 = V_9;
		bool L_56 = V_7;
		FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 L_57;
		memset((&L_57), 0, sizeof(L_57));
		FileSystemEntry__ctor_m98A1C0245241C15A7598558CFC8CFBC1CBB68591((&L_57), L_54, L_55, L_56, /*hidden argument*/NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246)L_57);
		// for( int i = 0; i < entryCount; i++ )
		int32_t L_58 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_013f:
	{
		// for( int i = 0; i < entryCount; i++ )
		int32_t L_59 = V_6;
		int32_t L_60 = V_2;
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_009c;
		}
	}
	{
		// return result;
		FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* L_61 = V_3;
		return L_61;
	}

IL_0149:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// FileSystemInfo[] items = new DirectoryInfo( path ).GetFileSystemInfos();
			String_t* L_62 = ___path0;
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_63 = (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2*)il2cpp_codegen_object_new(DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
			NullCheck(L_63);
			DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9(L_63, L_62, NULL);
			NullCheck(L_63);
			FileSystemInfoU5BU5D_tF7D37070CBD32AA8FF200811C4906E3543061AE7* L_64;
			L_64 = DirectoryInfo_GetFileSystemInfos_m35F27B3A479619281F13C053A9164ACC6C135BED(L_63, NULL);
			V_11 = L_64;
			// FileSystemEntry[] result = new FileSystemEntry[items.Length];
			FileSystemInfoU5BU5D_tF7D37070CBD32AA8FF200811C4906E3543061AE7* L_65 = V_11;
			NullCheck(L_65);
			FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* L_66 = (FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D*)(FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D*)SZArrayNew(FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)));
			V_12 = L_66;
			// int index = 0;
			V_13 = 0;
			// for( int i = 0; i < items.Length; i++ )
			V_14 = 0;
			goto IL_0193_1;
		}

IL_016a_1:
		{
		}
		try
		{// begin try (depth: 2)
			// result[index] = new FileSystemEntry( items[i] );
			FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* L_67 = V_12;
			int32_t L_68 = V_13;
			FileSystemInfoU5BU5D_tF7D37070CBD32AA8FF200811C4906E3543061AE7* L_69 = V_11;
			int32_t L_70 = V_14;
			NullCheck(L_69);
			int32_t L_71 = L_70;
			FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
			FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246 L_73;
			memset((&L_73), 0, sizeof(L_73));
			FileSystemEntry__ctor_mF430AF0B8B46B9648DD5AB64CACBE16FB6252528((&L_73), L_72, /*hidden argument*/NULL);
			NullCheck(L_67);
			(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (FileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246)L_73);
			// index++;
			int32_t L_74 = V_13;
			V_13 = ((int32_t)il2cpp_codegen_add(L_74, 1));
			// }
			goto IL_018d_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0186_1;
			}
			throw e;
		}

CATCH_0186_1:
		{// begin catch(System.Exception)
			// Debug.LogException( e );
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_018d_1;
		}// end catch (depth: 2)

IL_018d_1:
		{
			// for( int i = 0; i < items.Length; i++ )
			int32_t L_75 = V_14;
			V_14 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		}

IL_0193_1:
		{
			// for( int i = 0; i < items.Length; i++ )
			int32_t L_76 = V_14;
			FileSystemInfoU5BU5D_tF7D37070CBD32AA8FF200811C4906E3543061AE7* L_77 = V_11;
			NullCheck(L_77);
			if ((((int32_t)L_76) < ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))
			{
				goto IL_016a_1;
			}
		}
		{
			// if( result.Length != index )
			FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* L_78 = V_12;
			NullCheck(L_78);
			int32_t L_79 = V_13;
			if ((((int32_t)((int32_t)(((RuntimeArray*)L_78)->max_length))) == ((int32_t)L_79)))
			{
				goto IL_01ac_1;
			}
		}
		{
			// System.Array.Resize( ref result, index );
			int32_t L_80 = V_13;
			Array_Resize_TisFileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_m706E7433C777CFA6A8C90A738C34E9A70781CE9A((&V_12), L_80, Array_Resize_TisFileSystemEntry_t6D99D98D54FEA30F39FFE18734761C3B27ADD246_m706E7433C777CFA6A8C90A738C34E9A70781CE9A_RuntimeMethod_var);
		}

IL_01ac_1:
		{
			// return result;
			FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* L_81 = V_12;
			V_15 = L_81;
			goto IL_01bc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b2;
		}
		throw e;
	}

CATCH_01b2:
	{// begin catch(System.Exception)
		// Debug.LogException( e );
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// return null;
		V_15 = (FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01bc;
	}// end catch (depth: 1)

IL_01bc:
	{
		// }
		FileSystemEntryU5BU5D_t57A1007241C194F10F81F90472D3C613EA1F972D* L_82 = V_15;
		return L_82;
	}
}
// System.String SimpleFileBrowser.FileBrowserHelpers::CreateFileInDirectory(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserHelpers_CreateFileInDirectory_m802EC7CBEAD09A7DA135F4462BF2CE545401386A (String_t* ___directoryPath0, String_t* ___filename1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A447E8D23D75FD6437F9ED031F1938CFDA74898);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_1 = NULL;
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		// return AJC.CallStatic<string>( "CreateSAFEntry", Context, directoryPath, false, filename );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___directoryPath0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		bool L_8 = ((bool)0);
		RuntimeObject* L_9 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_7;
		String_t* L_11 = ___filename1;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		NullCheck(L_1);
		String_t* L_12;
		L_12 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_1, _stringLiteral4A447E8D23D75FD6437F9ED031F1938CFDA74898, L_10, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_12;
	}

IL_0036:
	{
		// string path = Path.Combine( directoryPath, filename );
		String_t* L_13 = ___directoryPath0;
		String_t* L_14 = ___filename1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_13, L_14, NULL);
		V_0 = L_15;
		// using( File.Create( path ) ) { }
		String_t* L_16 = V_0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_17;
		L_17 = File_Create_m7A88AE26DE05E6D790E3C5B1140EE5DC91DCC519(L_16, NULL);
		V_1 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_18 = V_1;
					if (!L_18)
					{
						goto IL_0050;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_19 = V_1;
					NullCheck(L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// using( File.Create( path ) ) { }
			goto IL_0051;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		// return path;
		String_t* L_20 = V_0;
		return L_20;
	}
}
// System.String SimpleFileBrowser.FileBrowserHelpers::CreateFolderInDirectory(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserHelpers_CreateFolderInDirectory_mC245F416C717ABD84E1C17CA8C5CEB21C6E6C67C (String_t* ___directoryPath0, String_t* ___folderName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A447E8D23D75FD6437F9ED031F1938CFDA74898);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		// return AJC.CallStatic<string>( "CreateSAFEntry", Context, directoryPath, true, folderName );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___directoryPath0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		bool L_8 = ((bool)1);
		RuntimeObject* L_9 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_7;
		String_t* L_11 = ___folderName1;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		NullCheck(L_1);
		String_t* L_12;
		L_12 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_1, _stringLiteral4A447E8D23D75FD6437F9ED031F1938CFDA74898, L_10, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_12;
	}

IL_0036:
	{
		// string path = Path.Combine( directoryPath, folderName );
		String_t* L_13 = ___directoryPath0;
		String_t* L_14 = ___folderName1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_13, L_14, NULL);
		// Directory.CreateDirectory( path );
		String_t* L_16 = L_15;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_17;
		L_17 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_16, NULL);
		// return path;
		return L_16;
	}
}
// System.Void SimpleFileBrowser.FileBrowserHelpers::WriteBytesToFile(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserHelpers_WriteBytesToFile_mF65FE71151B1715E35031D3721FC01911F1430DA (String_t* ___targetPath0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFACFD7C0A2D03977F91FD6FA7D17D6E08F698D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		// File.WriteAllBytes( TemporaryFilePath, bytes );
		String_t* L_1;
		L_1 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytes1;
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_1, L_2, NULL);
		// AJC.CallStatic( "WriteToSAFEntry", Context, targetPath, TemporaryFilePath, false );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3;
		L_3 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___targetPath0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10;
		L_10 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		bool L_12 = ((bool)0);
		RuntimeObject* L_13 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_13);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_3, _stringLiteralDFACFD7C0A2D03977F91FD6FA7D17D6E08F698D6, L_11, NULL);
		// File.Delete( TemporaryFilePath );
		String_t* L_14;
		L_14 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_14, NULL);
		// return;
		return;
	}

IL_004f:
	{
		// File.WriteAllBytes( targetPath, bytes );
		String_t* L_15 = ___targetPath0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___bytes1;
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserHelpers::WriteTextToFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserHelpers_WriteTextToFile_m99620D1046DE1C5C5B0C42C7AB3E888F99DA41F2 (String_t* ___targetPath0, String_t* ___text1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFACFD7C0A2D03977F91FD6FA7D17D6E08F698D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		// File.WriteAllText( TemporaryFilePath, text );
		String_t* L_1;
		L_1 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		String_t* L_2 = ___text1;
		File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1(L_1, L_2, NULL);
		// AJC.CallStatic( "WriteToSAFEntry", Context, targetPath, TemporaryFilePath, false );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3;
		L_3 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___targetPath0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10;
		L_10 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		bool L_12 = ((bool)0);
		RuntimeObject* L_13 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_13);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_3, _stringLiteralDFACFD7C0A2D03977F91FD6FA7D17D6E08F698D6, L_11, NULL);
		// File.Delete( TemporaryFilePath );
		String_t* L_14;
		L_14 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_14, NULL);
		// return;
		return;
	}

IL_004f:
	{
		// File.WriteAllText( targetPath, text );
		String_t* L_15 = ___targetPath0;
		String_t* L_16 = ___text1;
		File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserHelpers::WriteCopyToFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserHelpers_WriteCopyToFile_m22EA1C49C25CBAB4DE4BF9A013A981129F29F4D7 (String_t* ___targetPath0, String_t* ___sourceFile1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFACFD7C0A2D03977F91FD6FA7D17D6E08F698D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		// AJC.CallStatic( "WriteToSAFEntry", Context, targetPath, sourceFile, false );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___targetPath0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___sourceFile1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		bool L_10 = ((bool)0);
		RuntimeObject* L_11 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteralDFACFD7C0A2D03977F91FD6FA7D17D6E08F698D6, L_9, NULL);
		// return;
		return;
	}

IL_0036:
	{
		// File.Copy( sourceFile, targetPath, true );
		String_t* L_12 = ___sourceFile1;
		String_t* L_13 = ___targetPath0;
		File_Copy_m3798F05909C43D7EA26130D51D0A15CFCBE7458A(L_12, L_13, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserHelpers::AppendBytesToFile(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserHelpers_AppendBytesToFile_mAE56C2C4D9E75D9400600D0A957195D2DB8786E4 (String_t* ___targetPath0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFACFD7C0A2D03977F91FD6FA7D17D6E08F698D6);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		// File.WriteAllBytes( TemporaryFilePath, bytes );
		String_t* L_1;
		L_1 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytes1;
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_1, L_2, NULL);
		// AJC.CallStatic( "WriteToSAFEntry", Context, targetPath, TemporaryFilePath, true );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3;
		L_3 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___targetPath0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10;
		L_10 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		bool L_12 = ((bool)1);
		RuntimeObject* L_13 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_13);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_3, _stringLiteralDFACFD7C0A2D03977F91FD6FA7D17D6E08F698D6, L_11, NULL);
		// File.Delete( TemporaryFilePath );
		String_t* L_14;
		L_14 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_14, NULL);
		// return;
		return;
	}

IL_004f:
	{
		// using( var stream = new FileStream( targetPath, FileMode.Append, FileAccess.Write ) )
		String_t* L_15 = ___targetPath0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_16 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9(L_16, L_15, 6, 2, NULL);
		V_0 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_17 = V_0;
					if (!L_17)
					{
						goto IL_006e;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_18 = V_0;
					NullCheck(L_18);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
				}

IL_006e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// stream.Write( bytes, 0, bytes.Length );
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_19 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___bytes1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___bytes1;
			NullCheck(L_21);
			NullCheck(L_19);
			VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, 0, ((int32_t)(((RuntimeArray*)L_21)->max_length)));
			// }
			goto IL_006f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserHelpers::AppendTextToFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserHelpers_AppendTextToFile_mD61F5903ED55A6336E512DA1901BF83B12A06D21 (String_t* ___targetPath0, String_t* ___text1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFACFD7C0A2D03977F91FD6FA7D17D6E08F698D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		// File.WriteAllText( TemporaryFilePath, text );
		String_t* L_1;
		L_1 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		String_t* L_2 = ___text1;
		File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1(L_1, L_2, NULL);
		// AJC.CallStatic( "WriteToSAFEntry", Context, targetPath, TemporaryFilePath, true );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3;
		L_3 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___targetPath0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10;
		L_10 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		bool L_12 = ((bool)1);
		RuntimeObject* L_13 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_13);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_3, _stringLiteralDFACFD7C0A2D03977F91FD6FA7D17D6E08F698D6, L_11, NULL);
		// File.Delete( TemporaryFilePath );
		String_t* L_14;
		L_14 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_14, NULL);
		// return;
		return;
	}

IL_004f:
	{
		// File.AppendAllText( targetPath, text );
		String_t* L_15 = ___targetPath0;
		String_t* L_16 = ___text1;
		File_AppendAllText_m08069DB321F56261289DCE3509565270F23DAEC6(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserHelpers::AppendCopyToFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserHelpers_AppendCopyToFile_m5C4FDCA7D86F3BFB92F68054FB849F12EB1A1B44 (String_t* ___targetPath0, String_t* ___sourceFile1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFACFD7C0A2D03977F91FD6FA7D17D6E08F698D6);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		// AJC.CallStatic( "WriteToSAFEntry", Context, targetPath, sourceFile, true );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___targetPath0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___sourceFile1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		bool L_10 = ((bool)1);
		RuntimeObject* L_11 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteralDFACFD7C0A2D03977F91FD6FA7D17D6E08F698D6, L_9, NULL);
		// return;
		return;
	}

IL_0036:
	{
		// using( Stream input = File.OpenRead( sourceFile ) )
		String_t* L_12 = ___sourceFile1;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_13;
		L_13 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_12, NULL);
		V_0 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0078:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = V_0;
					if (!L_14)
					{
						goto IL_0081;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = V_0;
					NullCheck(L_15);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
				}

IL_0081:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using( Stream output = new FileStream( targetPath, FileMode.Append, FileAccess.Write ) )
				String_t* L_16 = ___targetPath0;
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_17 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9(L_17, L_16, 6, 2, NULL);
				V_1 = L_17;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_006e_1:
					{// begin finally (depth: 2)
						{
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18 = V_1;
							if (!L_18)
							{
								goto IL_0077_1;
							}
						}
						{
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19 = V_1;
							NullCheck(L_19);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
						}

IL_0077_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// byte[] buffer = new byte[4096];
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
						V_2 = L_20;
						goto IL_005c_2;
					}

IL_0053_2:
					{
						// output.Write( buffer, 0, bytesRead );
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = V_1;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
						int32_t L_23 = V_3;
						NullCheck(L_21);
						VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_21, L_22, 0, L_23);
					}

IL_005c_2:
					{
						// while( ( bytesRead = input.Read( buffer, 0, buffer.Length ) ) > 0 )
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = V_0;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_2;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_2;
						NullCheck(L_26);
						NullCheck(L_24);
						int32_t L_27;
						L_27 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_24, L_25, 0, ((int32_t)(((RuntimeArray*)L_26)->max_length)));
						int32_t L_28 = L_27;
						V_3 = L_28;
						if ((((int32_t)L_28) > ((int32_t)0)))
						{
							goto IL_0053_2;
						}
					}
					{
						// }
						goto IL_0082;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Byte[] SimpleFileBrowser.FileBrowserHelpers::ReadBytesFromFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FileBrowserHelpers_ReadBytesFromFile_m85D823A47A01E570E027D851A6546954DDC1654E (String_t* ___sourcePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC14E746F6B6DFC16CB20AC49C1BFE2D3146CC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		// AJC.CallStatic( "ReadFromSAFEntry", Context, sourcePath, TemporaryFilePath );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___sourcePath0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8;
		L_8 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteral3CC14E746F6B6DFC16CB20AC49C1BFE2D3146CC5, L_7, NULL);
		// byte[] result = File.ReadAllBytes( TemporaryFilePath );
		String_t* L_9;
		L_9 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_9, NULL);
		// File.Delete( TemporaryFilePath );
		String_t* L_11;
		L_11 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_11, NULL);
		// return result;
		return L_10;
	}

IL_0045:
	{
		// return File.ReadAllBytes( sourcePath );
		String_t* L_12 = ___sourcePath0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_12, NULL);
		return L_13;
	}
}
// System.String SimpleFileBrowser.FileBrowserHelpers::ReadTextFromFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserHelpers_ReadTextFromFile_mE5C6AB4A1F0281DFE1EA61AB9E8A5A66A84E5F99 (String_t* ___sourcePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC14E746F6B6DFC16CB20AC49C1BFE2D3146CC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		// AJC.CallStatic( "ReadFromSAFEntry", Context, sourcePath, TemporaryFilePath );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___sourcePath0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8;
		L_8 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteral3CC14E746F6B6DFC16CB20AC49C1BFE2D3146CC5, L_7, NULL);
		// string result = File.ReadAllText( TemporaryFilePath );
		String_t* L_9;
		L_9 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		String_t* L_10;
		L_10 = File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA(L_9, NULL);
		// File.Delete( TemporaryFilePath );
		String_t* L_11;
		L_11 = FileBrowserHelpers_get_TemporaryFilePath_mDC28E7DD2724F275E1D19CE4AA5FBCCE903C9D67(NULL);
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_11, NULL);
		// return result;
		return L_10;
	}

IL_0045:
	{
		// return File.ReadAllText( sourcePath );
		String_t* L_12 = ___sourcePath0;
		String_t* L_13;
		L_13 = File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA(L_12, NULL);
		return L_13;
	}
}
// System.Void SimpleFileBrowser.FileBrowserHelpers::ReadCopyFromFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserHelpers_ReadCopyFromFile_m16F48628CED87FB7DDF87D9306B86E78DE6907F6 (String_t* ___sourcePath0, String_t* ___destinationFile1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC14E746F6B6DFC16CB20AC49C1BFE2D3146CC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// AJC.CallStatic( "ReadFromSAFEntry", Context, sourcePath, destinationFile );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___sourcePath0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___destinationFile1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteral3CC14E746F6B6DFC16CB20AC49C1BFE2D3146CC5, L_7, NULL);
		// return;
		return;
	}

IL_002d:
	{
		// File.Copy( sourcePath, destinationFile, true );
		String_t* L_9 = ___sourcePath0;
		String_t* L_10 = ___destinationFile1;
		File_Copy_m3798F05909C43D7EA26130D51D0A15CFCBE7458A(L_9, L_10, (bool)1, NULL);
		// }
		return;
	}
}
// System.String SimpleFileBrowser.FileBrowserHelpers::RenameFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserHelpers_RenameFile_m3E5B239347FB4D33E8340468409CFBD3C6B7DCBD (String_t* ___path0, String_t* ___newName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCAB26D1AC0E925089F063AA00F617E2EF208E64);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// return AJC.CallStatic<string>( "RenameSAFEntry", Context, path, newName );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___path0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___newName1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		NullCheck(L_1);
		String_t* L_9;
		L_9 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_1, _stringLiteralBCAB26D1AC0E925089F063AA00F617E2EF208E64, L_7, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_9;
	}

IL_002d:
	{
		// string newPath = Path.Combine( Path.GetDirectoryName( path ), newName );
		String_t* L_10 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_10, NULL);
		String_t* L_12 = ___newName1;
		String_t* L_13;
		L_13 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_11, L_12, NULL);
		V_0 = L_13;
		// File.Move( path, newPath );
		String_t* L_14 = ___path0;
		String_t* L_15 = V_0;
		File_Move_mBC9450111E0144A55D893A720F19E612D658AC37(L_14, L_15, NULL);
		// return newPath;
		String_t* L_16 = V_0;
		return L_16;
	}
}
// System.String SimpleFileBrowser.FileBrowserHelpers::RenameDirectory(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserHelpers_RenameDirectory_m57956F16A010326F014BE59F41294E858477A07D (String_t* ___path0, String_t* ___newName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCAB26D1AC0E925089F063AA00F617E2EF208E64);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// return AJC.CallStatic<string>( "RenameSAFEntry", Context, path, newName );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___path0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___newName1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		NullCheck(L_1);
		String_t* L_9;
		L_9 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_1, _stringLiteralBCAB26D1AC0E925089F063AA00F617E2EF208E64, L_7, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_9;
	}

IL_002d:
	{
		// string newPath = Path.Combine( new DirectoryInfo( path ).Parent.FullName, newName );
		String_t* L_10 = ___path0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_11 = (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2*)il2cpp_codegen_object_new(DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9(L_11, L_10, NULL);
		NullCheck(L_11);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_12;
		L_12 = DirectoryInfo_get_Parent_m2B95E4D3CBA22F8DAA259247ED791F1411D93347(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_12);
		String_t* L_14 = ___newName1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_13, L_14, NULL);
		V_0 = L_15;
		// Directory.Move( path, newPath );
		String_t* L_16 = ___path0;
		String_t* L_17 = V_0;
		Directory_Move_mA9C7ED31B0223C808C52AC0AF5F4476305DB5D31(L_16, L_17, NULL);
		// return newPath;
		String_t* L_18 = V_0;
		return L_18;
	}
}
// System.Void SimpleFileBrowser.FileBrowserHelpers::DeleteFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserHelpers_DeleteFile_m48B0381730B661596D8F2A57E778D998E6A0F81D (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE5DA79E61F7F0E125C3F4BF9A78A874CC0D946A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// AJC.CallStatic<bool>( "DeleteSAFEntry", Context, path );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___path0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_1);
		bool L_7;
		L_7 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_1, _stringLiteralDE5DA79E61F7F0E125C3F4BF9A78A874CC0D946A, L_5, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		// return;
		return;
	}

IL_002a:
	{
		// File.Delete( path );
		String_t* L_8 = ___path0;
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_8, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserHelpers::DeleteDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserHelpers_DeleteDirectory_m74C880E81FE3C73E25F90D1EE5B2041C0D1DAE95 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE5DA79E61F7F0E125C3F4BF9A78A874CC0D946A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// AJC.CallStatic<bool>( "DeleteSAFEntry", Context, path );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___path0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_1);
		bool L_7;
		L_7 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_1, _stringLiteralDE5DA79E61F7F0E125C3F4BF9A78A874CC0D946A, L_5, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		// return;
		return;
	}

IL_002a:
	{
		// Directory.Delete( path, true );
		String_t* L_8 = ___path0;
		Directory_Delete_mB5C70379DEFE9B8AA95F67BAE04233E60CEF09F4(L_8, (bool)1, NULL);
		// }
		return;
	}
}
// System.String SimpleFileBrowser.FileBrowserHelpers::GetFilename(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserHelpers_GetFilename_m6736D531D19A92EAADCADB446FE2227599464DCB (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B3175575B000E41A09B0C0CE0219DA320C1F07D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// return AJC.CallStatic<string>( "SAFEntryName", Context, path );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___path0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_1);
		String_t* L_7;
		L_7 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_1, _stringLiteral9B3175575B000E41A09B0C0CE0219DA320C1F07D, L_5, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_7;
	}

IL_0029:
	{
		// return Path.GetFileName( path );
		String_t* L_8 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_8, NULL);
		return L_9;
	}
}
// System.Int64 SimpleFileBrowser.FileBrowserHelpers::GetFilesize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileBrowserHelpers_GetFilesize_m26D99D7558B7E041F7324E31E3BF084A2FFDAF5F (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2FC8ACAFE956D789EAA03558DC9E281FA48D6243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3687C2A9F253D3266A08F4BE31045635234D66CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// return AJC.CallStatic<long>( "SAFEntrySize", Context, path );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___path0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_1);
		int64_t L_7;
		L_7 = AndroidJavaObject_CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2FC8ACAFE956D789EAA03558DC9E281FA48D6243(L_1, _stringLiteral3687C2A9F253D3266A08F4BE31045635234D66CE, L_5, AndroidJavaObject_CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2FC8ACAFE956D789EAA03558DC9E281FA48D6243_RuntimeMethod_var);
		return L_7;
	}

IL_0029:
	{
		// return new FileInfo( path ).Length;
		String_t* L_8 = ___path0;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_9 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_9, L_8, NULL);
		NullCheck(L_9);
		int64_t L_10;
		L_10 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_9, NULL);
		return L_10;
	}
}
// System.DateTime SimpleFileBrowser.FileBrowserHelpers::GetLastModifiedDate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D FileBrowserHelpers_GetLastModifiedDate_m43FEF5828E7B4CB88C22F20FDFBCE66C2D466B08 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2FC8ACAFE956D789EAA03558DC9E281FA48D6243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF26B318DE750209A1769AA97922C5926003A04C);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if( ShouldUseSAF )
		bool L_0;
		L_0 = FileBrowserHelpers_get_ShouldUseSAF_m9C509297CB3DF3F15EE86D9A3C38D48D59725374(NULL);
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// return new System.DateTime( 1970, 1, 1, 0, 0, 0 ).AddMilliseconds( AJC.CallStatic<long>( "SAFEntryLastModified", Context, path ) );
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		memset((&L_1), 0, sizeof(L_1));
		DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00((&L_1), ((int32_t)1970), 1, 1, 0, 0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2;
		L_2 = FileBrowserHelpers_get_AJC_m09211AB30FA9D27A1B5661C0B318AF02DC4790CB(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = FileBrowserHelpers_get_Context_m3522D88B3887381CCB24496C375F9C9FCB8BAA52(NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___path0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_2);
		int64_t L_8;
		L_8 = AndroidJavaObject_CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2FC8ACAFE956D789EAA03558DC9E281FA48D6243(L_2, _stringLiteralBF26B318DE750209A1769AA97922C5926003A04C, L_6, AndroidJavaObject_CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2FC8ACAFE956D789EAA03558DC9E281FA48D6243_RuntimeMethod_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9;
		L_9 = DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05((&V_0), ((double)L_8), NULL);
		return L_9;
	}

IL_0041:
	{
		// return new FileInfo( path ).LastWriteTime;
		String_t* L_10 = ___path0;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_11 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_11, L_10, NULL);
		NullCheck(L_11);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12;
		L_12 = FileSystemInfo_get_LastWriteTime_m5009457B3D837E929AF4FBC9E2738F15BB6476C5(L_11, NULL);
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserItem::get_TransformComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FileBrowserItem_get_TransformComponent_m355327F7BAFAF9B9CA5A0BBE0B1A081B53757937 (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_transform == null )
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_transform_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_transform = (RectTransform) transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___m_transform_17 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_2, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_transform_17), (void*)((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_2, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
	}

IL_001f:
	{
		// return m_transform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___m_transform_17;
		return L_3;
	}
}
// System.String SimpleFileBrowser.FileBrowserItem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserItem_get_Name_mF52B563D047D2ABA17CDE4E6D2DA435EE90BFED1 (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get { return nameText.text; } }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___nameText_13;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		return L_1;
	}
}
// System.Boolean SimpleFileBrowser.FileBrowserItem::get_IsDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileBrowserItem_get_IsDirectory_m0B8AB857C96E632AB1D0DB602F8A772244E920A4 (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDirectory { get; private set; }
		bool L_0 = __this->___U3CIsDirectoryU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::set_IsDirectory(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_set_IsDirectory_m9F7592FBAF14295A01ED6D87656F7A648229FA2B (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDirectory { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsDirectoryU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::SetFileBrowser(SimpleFileBrowser.FileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_SetFileBrowser_mF7299821CE4896F0A32A7BD2796106490A9F0C41 (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* ___fileBrowser0, const RuntimeMethod* method) 
{
	{
		// this.fileBrowser = fileBrowser;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_0 = ___fileBrowser0;
		__this->___fileBrowser_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileBrowser_9), (void*)L_0);
		// background.color = fileBrowser.normalFileColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___background_10;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_2 = ___fileBrowser0;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = L_2->___normalFileColor_15;
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::SetFile(UnityEngine.Sprite,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_SetFile_mB4B753BFA604F05B00F90107421311AAB0E0FA95 (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon0, String_t* ___name1, bool ___isDirectory2, const RuntimeMethod* method) 
{
	{
		// this.icon.sprite = icon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___icon_11;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___icon0;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// nameText.text = name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___nameText_13;
		String_t* L_3 = ___name1;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// IsDirectory = isDirectory;
		bool L_4 = ___isDirectory2;
		FileBrowserItem_set_IsDirectory_m9F7592FBAF14295A01ED6D87656F7A648229FA2B_inline(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_Update_m08AA52A5E05B1EA65FF637453DA0E9D112EE1C46 (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, const RuntimeMethod* method) 
{
	{
		// if( fileBrowser.AllowMultiSelection && Time.realtimeSinceStartup - pressTime >= TOGGLE_MULTI_SELECTION_HOLD_TIME )
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_0 = __this->___fileBrowser_9;
		NullCheck(L_0);
		bool L_1;
		L_1 = FileBrowser_get_AllowMultiSelection_m5CD514F83C2FB8D84F0BD6F780EAF90FAB4F0B79_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		float L_2;
		L_2 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_3 = __this->___pressTime_15;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_2, L_3))) >= ((float)(0.5f)))))
		{
			goto IL_004c;
		}
	}
	{
		// pressTime = Mathf.Infinity;
		__this->___pressTime_15 = (std::numeric_limits<float>::infinity());
		// fileBrowser.MultiSelectionToggleSelectionMode = true;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_4 = __this->___fileBrowser_9;
		NullCheck(L_4);
		FileBrowser_set_MultiSelectionToggleSelectionMode_m4C6CFD17F43ACD3F6EDDA3C3DAFCE41AFBABB022(L_4, (bool)1, NULL);
		// if( !isSelected )
		bool L_5 = __this->___isSelected_14;
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		// fileBrowser.OnItemSelected( this, false );
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_6 = __this->___fileBrowser_9;
		NullCheck(L_6);
		FileBrowser_OnItemSelected_mF25B0D44E64E5A398EBF3718C65A494CCFD07CC1(L_6, __this, (bool)0, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_OnPointerClick_m6A26D6D1CD8F51104C1556E404202D1B8B098B2F (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if( Time.realtimeSinceStartup - prevClickTime < DOUBLE_CLICK_TIME )
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = __this->___prevClickTime_16;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_0, L_1))) < ((float)(0.5f)))))
		{
			goto IL_002c;
		}
	}
	{
		// prevClickTime = 0f;
		__this->___prevClickTime_16 = (0.0f);
		// fileBrowser.OnItemSelected( this, true );
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_2 = __this->___fileBrowser_9;
		NullCheck(L_2);
		FileBrowser_OnItemSelected_mF25B0D44E64E5A398EBF3718C65A494CCFD07CC1(L_2, __this, (bool)1, NULL);
		return;
	}

IL_002c:
	{
		// prevClickTime = Time.realtimeSinceStartup;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___prevClickTime_16 = L_3;
		// fileBrowser.OnItemSelected( this, false );
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_4 = __this->___fileBrowser_9;
		NullCheck(L_4);
		FileBrowser_OnItemSelected_mF25B0D44E64E5A398EBF3718C65A494CCFD07CC1(L_4, __this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_OnPointerDown_m081B0A57FD7C93D719159F51BAF14824259AA630 (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// pressTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___pressTime_15 = L_0;
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_OnPointerUp_m24C5BE0468532D0F9A19DF69EFE65FCF69FAC459 (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if( pressTime == Mathf.Infinity )
		float L_0 = __this->___pressTime_15;
		if ((!(((float)L_0) == ((float)(std::numeric_limits<float>::infinity())))))
		{
			goto IL_0015;
		}
	}
	{
		// eventData.eligibleForClick = false;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline(L_1, (bool)0, NULL);
		return;
	}

IL_0015:
	{
		// pressTime = Mathf.Infinity;
		__this->___pressTime_15 = (std::numeric_limits<float>::infinity());
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::SetSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_SetSelected_m1F6C6C0E20A0BF57B23D0AEA9FCF4CA8A0E138E7 (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, bool ___isSelected0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_1 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B8_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B7_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B9_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B9_1 = NULL;
	{
		// this.isSelected = isSelected;
		bool L_0 = ___isSelected0;
		__this->___isSelected_14 = L_0;
		// background.color = isSelected ? fileBrowser.selectedFileColor : fileBrowser.normalFileColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___background_10;
		bool L_2 = ___isSelected0;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_001d;
		}
	}
	{
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_3 = __this->___fileBrowser_9;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = L_3->___normalFileColor_15;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_001d:
	{
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_5 = __this->___fileBrowser_9;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = L_5->___selectedFileColor_17;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// if( fileBrowser.MultiSelectionToggleSelectionMode )
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_7 = __this->___fileBrowser_9;
		NullCheck(L_7);
		bool L_8;
		L_8 = FileBrowser_get_MultiSelectionToggleSelectionMode_mE441032C7477B6CDCB091003C3D00C75502B55C3_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_00e0;
		}
	}
	{
		// if( !multiSelectionToggle.gameObject.activeSelf )
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___multiSelectionToggle_12;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_10, NULL);
		if (L_11)
		{
			goto IL_00b9;
		}
	}
	{
		// multiSelectionToggle.gameObject.SetActive( true );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___multiSelectionToggle_12;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// Vector2 shiftAmount = new Vector2( multiSelectionToggle.rectTransform.sizeDelta.x, 0f );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___multiSelectionToggle_12;
		NullCheck(L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15;
		L_15 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_14, NULL);
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_15, NULL);
		float L_17 = L_16.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_17, (0.0f), NULL);
		// icon.rectTransform.anchoredPosition += shiftAmount;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___icon_11;
		NullCheck(L_18);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19;
		L_19 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_18, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = L_19;
		NullCheck(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_21, L_22, NULL);
		NullCheck(L_20);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_20, L_23, NULL);
		// nameText.rectTransform.anchoredPosition += shiftAmount;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___nameText_13;
		NullCheck(L_24);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25;
		L_25 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_24, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = L_25;
		NullCheck(L_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_27, L_28, NULL);
		NullCheck(L_26);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_26, L_29, NULL);
	}

IL_00b9:
	{
		// multiSelectionToggle.sprite = isSelected ? fileBrowser.multiSelectionToggleOnIcon : fileBrowser.multiSelectionToggleOffIcon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_30 = __this->___multiSelectionToggle_12;
		bool L_31 = ___isSelected0;
		G_B7_0 = L_30;
		if (L_31)
		{
			G_B8_0 = L_30;
			goto IL_00cf;
		}
	}
	{
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_32 = __this->___fileBrowser_9;
		NullCheck(L_32);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_33 = L_32->___multiSelectionToggleOffIcon_38;
		G_B9_0 = L_33;
		G_B9_1 = G_B7_0;
		goto IL_00da;
	}

IL_00cf:
	{
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_34 = __this->___fileBrowser_9;
		NullCheck(L_34);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_35 = L_34->___multiSelectionToggleOnIcon_39;
		G_B9_0 = L_35;
		G_B9_1 = G_B8_0;
	}

IL_00da:
	{
		NullCheck(G_B9_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(G_B9_1, G_B9_0, NULL);
		return;
	}

IL_00e0:
	{
		// else if( multiSelectionToggle.gameObject.activeSelf )
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_36 = __this->___multiSelectionToggle_12;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		NullCheck(L_37);
		bool L_38;
		L_38 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_37, NULL);
		if (!L_38)
		{
			goto IL_0168;
		}
	}
	{
		// multiSelectionToggle.gameObject.SetActive( false );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39 = __this->___multiSelectionToggle_12;
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
		// Vector2 shiftAmount = new Vector2( -multiSelectionToggle.rectTransform.sizeDelta.x, 0f );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_41 = __this->___multiSelectionToggle_12;
		NullCheck(L_41);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42;
		L_42 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_41, NULL);
		NullCheck(L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_42, NULL);
		float L_44 = L_43.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((-L_44)), (0.0f), NULL);
		// icon.rectTransform.anchoredPosition += shiftAmount;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_45 = __this->___icon_11;
		NullCheck(L_45);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_46;
		L_46 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_45, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_47 = L_46;
		NullCheck(L_47);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_47, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_48, L_49, NULL);
		NullCheck(L_47);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_47, L_50, NULL);
		// nameText.rectTransform.anchoredPosition += shiftAmount;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_51 = __this->___nameText_13;
		NullCheck(L_51);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_52;
		L_52 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_51, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_53 = L_52;
		NullCheck(L_53);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		L_54 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_53, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		L_56 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_54, L_55, NULL);
		NullCheck(L_53);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_53, L_56, NULL);
		// prevClickTime = 0f;
		__this->___prevClickTime_16 = (0.0f);
	}

IL_0168:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::SetHidden(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_SetHidden_mB4665285A24C5615F1AD860C7DEC1EB67C52DB65 (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, bool ___isHidden0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B5_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B6_1 = NULL;
	{
		// Color c = icon.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___icon_11;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		V_0 = L_1;
		// c.a = isHidden ? 0.5f : 1f;
		bool L_2 = ___isHidden0;
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_0018;
		}
	}
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0018:
	{
		G_B3_0 = (0.5f);
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		G_B3_1->___a_3 = G_B3_0;
		// icon.color = c;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___icon_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// c = nameText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___nameText_13;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		V_0 = L_6;
		// c.a = isHidden ? 0.55f : 1f;
		bool L_7 = ___isHidden0;
		G_B4_0 = (&V_0);
		if (L_7)
		{
			G_B5_0 = (&V_0);
			goto IL_0046;
		}
	}
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B4_0;
		goto IL_004b;
	}

IL_0046:
	{
		G_B6_0 = (0.550000012f);
		G_B6_1 = G_B5_0;
	}

IL_004b:
	{
		G_B6_1->___a_3 = G_B6_0;
		// nameText.color = c;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___nameText_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem__ctor_m000628680830F8191990ACBD87D5C93085492FD3 (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, const RuntimeMethod* method) 
{
	{
		// private float pressTime = Mathf.Infinity;
		__this->___pressTime_15 = (std::numeric_limits<float>::infinity());
		ListItem__ctor_mA0B5A84516018300245E2EA04E7C137BE13947C5(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleFileBrowser.FileBrowserMovement::Initialize(SimpleFileBrowser.FileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_Initialize_mE0D772805AC078B17337875EF9597BA88CA4371D (FileBrowserMovement_t9BBE2FB80BBD18B9EB928D109A816EA2646D3EB7* __this, FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* ___fileBrowser0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.fileBrowser = fileBrowser;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_0 = ___fileBrowser0;
		__this->___fileBrowser_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileBrowser_4), (void*)L_0);
		// canvasTR = fileBrowser.GetComponent<RectTransform>();
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_1 = ___fileBrowser0;
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_1, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___canvasTR_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasTR_5), (void*)L_2);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::OnDragStarted(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_OnDragStarted_mE23A847BCD0257B4599AE2529F05C50A15A34ACD (FileBrowserMovement_t9BBE2FB80BBD18B9EB928D109A816EA2646D3EB7* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	{
		// PointerEventData pointer = (PointerEventData) data;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___data0;
		V_0 = ((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var));
		// canvasCam = pointer.pressEventCamera;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = V_0;
		NullCheck(L_1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_1, NULL);
		__this->___canvasCam_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasCam_6), (void*)L_2);
		// RectTransformUtility.ScreenPointToLocalPointInRectangle( window, pointer.pressPosition, canvasCam, out initialTouchPos );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___window_7;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = V_0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_4, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___canvasCam_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___initialTouchPos_9);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_3, L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::OnDrag(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_OnDrag_m307AF9C4346E9AF93EA4B54749F67F90C2022FA8 (FileBrowserMovement_t9BBE2FB80BBD18B9EB928D109A816EA2646D3EB7* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// PointerEventData pointer = (PointerEventData) data;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___data0;
		V_0 = ((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var));
		// RectTransformUtility.ScreenPointToLocalPointInRectangle( window, pointer.position, canvasCam, out touchPos );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___window_7;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = V_0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___canvasCam_6;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_1, L_3, L_4, (&V_1), NULL);
		// window.anchoredPosition += touchPos - initialTouchPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___window_7;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = L_6;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___initialTouchPos_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_9, L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_8, L_11, NULL);
		NullCheck(L_7);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_7, L_12, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::OnEndDrag(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_OnEndDrag_m4ED38A8A490B3A7081C591F061577FACAB68E7F3 (FileBrowserMovement_t9BBE2FB80BBD18B9EB928D109A816EA2646D3EB7* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	{
		// fileBrowser.EnsureWindowIsWithinBounds();
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_0 = __this->___fileBrowser_4;
		NullCheck(L_0);
		FileBrowser_EnsureWindowIsWithinBounds_mB9776DD5C376A10E4B5ABA75D6B8479694E02853(L_0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::OnResizeStarted(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_OnResizeStarted_m412B58CA5FAC0008C18CB3E870DE218DAC3AD3DE (FileBrowserMovement_t9BBE2FB80BBD18B9EB928D109A816EA2646D3EB7* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	{
		// PointerEventData pointer = (PointerEventData) data;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___data0;
		V_0 = ((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var));
		// canvasCam = pointer.pressEventCamera;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = V_0;
		NullCheck(L_1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_1, NULL);
		__this->___canvasCam_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasCam_6), (void*)L_2);
		// initialAnchoredPos = window.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___window_7;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_3, NULL);
		__this->___initialAnchoredPos_10 = L_4;
		// initialSizeDelta = window.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___window_7;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_5, NULL);
		__this->___initialSizeDelta_11 = L_6;
		// RectTransformUtility.ScreenPointToLocalPointInRectangle( canvasTR, pointer.pressPosition, canvasCam, out initialTouchPos );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___canvasTR_5;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = V_0;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_8, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___canvasCam_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___initialTouchPos_9);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_7, L_9, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::OnResize(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_OnResize_mAC7825BDEA865680A3E24CED7B5B7C27CAB75B94 (FileBrowserMovement_t9BBE2FB80BBD18B9EB928D109A816EA2646D3EB7* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// PointerEventData pointer = (PointerEventData) data;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___data0;
		V_0 = ((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var));
		// RectTransformUtility.ScreenPointToLocalPointInRectangle( canvasTR, pointer.position, canvasCam, out touchPos );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___canvasTR_5;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = V_0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___canvasCam_6;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_1, L_3, L_4, (&V_1), NULL);
		// Vector2 delta = touchPos - initialTouchPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___initialTouchPos_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_7, NULL);
		V_2 = L_8;
		// Vector2 newSize = initialSizeDelta + new Vector2( delta.x, -delta.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___initialSizeDelta_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_2;
		float L_11 = L_10.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = L_12.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), L_11, ((-L_13)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_9, L_14, NULL);
		V_3 = L_15;
		// Vector2 canvasSize = canvasTR.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___canvasTR_5;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_16, NULL);
		V_4 = L_17;
		// if( newSize.x < fileBrowser.minWidth ) newSize.x = fileBrowser.minWidth;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_3;
		float L_19 = L_18.___x_0;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_20 = __this->___fileBrowser_4;
		NullCheck(L_20);
		int32_t L_21 = L_20->___minWidth_19;
		if ((!(((float)L_19) < ((float)((float)L_21)))))
		{
			goto IL_0080;
		}
	}
	{
		// if( newSize.x < fileBrowser.minWidth ) newSize.x = fileBrowser.minWidth;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_22 = __this->___fileBrowser_4;
		NullCheck(L_22);
		int32_t L_23 = L_22->___minWidth_19;
		(&V_3)->___x_0 = ((float)L_23);
	}

IL_0080:
	{
		// if( newSize.y < fileBrowser.minHeight ) newSize.y = fileBrowser.minHeight;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_3;
		float L_25 = L_24.___y_1;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_26 = __this->___fileBrowser_4;
		NullCheck(L_26);
		int32_t L_27 = L_26->___minHeight_20;
		if ((!(((float)L_25) < ((float)((float)L_27)))))
		{
			goto IL_00a7;
		}
	}
	{
		// if( newSize.y < fileBrowser.minHeight ) newSize.y = fileBrowser.minHeight;
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_28 = __this->___fileBrowser_4;
		NullCheck(L_28);
		int32_t L_29 = L_28->___minHeight_20;
		(&V_3)->___y_1 = ((float)L_29);
	}

IL_00a7:
	{
		// if( newSize.x > canvasSize.x ) newSize.x = canvasSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_3;
		float L_31 = L_30.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_4;
		float L_33 = L_32.___x_0;
		if ((!(((float)L_31) > ((float)L_33))))
		{
			goto IL_00c4;
		}
	}
	{
		// if( newSize.x > canvasSize.x ) newSize.x = canvasSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_4;
		float L_35 = L_34.___x_0;
		(&V_3)->___x_0 = L_35;
	}

IL_00c4:
	{
		// if( newSize.y > canvasSize.y ) newSize.y = canvasSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_3;
		float L_37 = L_36.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_4;
		float L_39 = L_38.___y_1;
		if ((!(((float)L_37) > ((float)L_39))))
		{
			goto IL_00e1;
		}
	}
	{
		// if( newSize.y > canvasSize.y ) newSize.y = canvasSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_4;
		float L_41 = L_40.___y_1;
		(&V_3)->___y_1 = L_41;
	}

IL_00e1:
	{
		// newSize.x = (int) newSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_3;
		float L_43 = L_42.___x_0;
		(&V_3)->___x_0 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(L_43));
		// newSize.y = (int) newSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_3;
		float L_45 = L_44.___y_1;
		(&V_3)->___y_1 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(L_45));
		// delta = newSize - initialSizeDelta;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = __this->___initialSizeDelta_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_46, L_47, NULL);
		V_2 = L_48;
		// window.anchoredPosition = initialAnchoredPos + new Vector2( delta.x * 0.5f, delta.y * -0.5f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49 = __this->___window_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = __this->___initialAnchoredPos_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_2;
		float L_52 = L_51.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = V_2;
		float L_54 = L_53.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_55), ((float)il2cpp_codegen_multiply(L_52, (0.5f))), ((float)il2cpp_codegen_multiply(L_54, (-0.5f))), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		L_56 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_50, L_55, NULL);
		NullCheck(L_49);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_49, L_56, NULL);
		// if( window.sizeDelta != newSize )
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_57 = __this->___window_7;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_57, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_3;
		bool L_60;
		L_60 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_58, L_59, NULL);
		if (!L_60)
		{
			goto IL_016a;
		}
	}
	{
		// window.sizeDelta = newSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_61 = __this->___window_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_3;
		NullCheck(L_61);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_61, L_62, NULL);
		// fileBrowser.OnWindowDimensionsChanged( newSize );
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_63 = __this->___fileBrowser_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = V_3;
		NullCheck(L_63);
		FileBrowser_OnWindowDimensionsChanged_m963BC26F304A2261C5DD8DB1F6A8AD47834ADBE0(L_63, L_64, NULL);
	}

IL_016a:
	{
		// listView.OnViewportDimensionsChanged();
		RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* L_65 = __this->___listView_8;
		NullCheck(L_65);
		RecycledListView_OnViewportDimensionsChanged_m2237B1BEE18B250322CE2E7419E489CD814E9D65(L_65, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::OnEndResize(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_OnEndResize_m3B1F7980285CE8AC33270667C7C4276FE67BAB1F (FileBrowserMovement_t9BBE2FB80BBD18B9EB928D109A816EA2646D3EB7* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	{
		// fileBrowser.EnsureWindowIsWithinBounds();
		FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* L_0 = __this->___fileBrowser_4;
		NullCheck(L_0);
		FileBrowser_EnsureWindowIsWithinBounds_mB9776DD5C376A10E4B5ABA75D6B8479694E02853(L_0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement__ctor_m0E6E6FE5458DEE7C8CD5E2EB1FC3EF8C6AA2C57B (FileBrowserMovement_t9BBE2FB80BBD18B9EB928D109A816EA2646D3EB7* __this, const RuntimeMethod* method) 
{
	{
		// private Vector2 initialTouchPos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___initialTouchPos_9 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String SimpleFileBrowser.FileBrowserQuickLink::get_TargetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserQuickLink_get_TargetPath_m6F4B9B6BBB4A415F70942DD572901C704185E872 (FileBrowserQuickLink_t306165881C5444A33F8F9801FE571444CCD52183* __this, const RuntimeMethod* method) 
{
	{
		// public string TargetPath { get { return m_targetPath; } }
		String_t* L_0 = __this->___m_targetPath_19;
		return L_0;
	}
}
// System.Void SimpleFileBrowser.FileBrowserQuickLink::SetQuickLink(UnityEngine.Sprite,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserQuickLink_SetQuickLink_m20230790B324072F4BC622D5715CB10A6F5EFEA5 (FileBrowserQuickLink_t306165881C5444A33F8F9801FE571444CCD52183* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon0, String_t* ___name1, String_t* ___targetPath2, const RuntimeMethod* method) 
{
	{
		// SetFile( icon, name, true );
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___icon0;
		String_t* L_1 = ___name1;
		FileBrowserItem_SetFile_mB4B753BFA604F05B00F90107421311AAB0E0FA95(__this, L_0, L_1, (bool)1, NULL);
		// m_targetPath = targetPath;
		String_t* L_2 = ___targetPath2;
		__this->___m_targetPath_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_targetPath_19), (void*)L_2);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserQuickLink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserQuickLink__ctor_m141334B761B92D81F5D380B23B919D419750AEB7 (FileBrowserQuickLink_t306165881C5444A33F8F9801FE571444CCD52183* __this, const RuntimeMethod* method) 
{
	{
		FileBrowserItem__ctor_m000628680830F8191990ACBD87D5C93085492FD3(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleFileBrowser.FileBrowserRenamedItem::Show(System.String,UnityEngine.Color,UnityEngine.Sprite,SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserRenamedItem_Show_m97F03325128D137986A0E058831610D98D6DF5D7 (FileBrowserRenamedItem_tB7E8EAF76EC4BA1F717E321523EC2E21A8A7A6E1* __this, String_t* ___initialFilename0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon2, OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* ___onRenameCompleted3, const RuntimeMethod* method) 
{
	{
		// background.color = backgroundColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___background_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___backgroundColor1;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// this.icon.sprite = icon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___icon_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = ___icon2;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// this.onRenameCompleted = onRenameCompleted;
		OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* L_4 = ___onRenameCompleted3;
		__this->___onRenameCompleted_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onRenameCompleted_7), (void*)L_4);
		// transform.SetAsLastSibling();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_5, NULL);
		// gameObject.SetActive( true );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// nameInputField.text = initialFilename;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_7 = __this->___nameInputField_6;
		String_t* L_8 = ___initialFilename0;
		NullCheck(L_7);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_7, L_8, NULL);
		// nameInputField.ActivateInputField();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_9 = __this->___nameInputField_6;
		NullCheck(L_9);
		InputField_ActivateInputField_m4986DE5488FE44D93DE1D906C140D6500134DF05(L_9, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserRenamedItem::OnInputFieldEndEdit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserRenamedItem_OnInputFieldEndEdit_mF57E7A7764F41C9506B8F5144E3B8F935457893C (FileBrowserRenamedItem_tB7E8EAF76EC4BA1F717E321523EC2E21A8A7A6E1* __this, String_t* ___filename0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if( !EventSystem.current.alreadySelecting && EventSystem.current.currentSelectedGameObject == nameInputField.gameObject )
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1;
		L_1 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = EventSystem_get_alreadySelecting_m3DB9F620A5E2976EBF1362F95C05C12031BACCC4_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_3;
		L_3 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_3, NULL);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___nameInputField_6;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// EventSystem.current.SetSelectedGameObject( null );
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_8;
		L_8 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_8);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_8, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
	}

IL_003f:
	{
		// if( onRenameCompleted != null )
		OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* L_9 = __this->___onRenameCompleted_7;
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		// onRenameCompleted( filename );
		OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* L_10 = __this->___onRenameCompleted_7;
		String_t* L_11 = ___filename0;
		NullCheck(L_10);
		OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120_inline(L_10, L_11, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserRenamedItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserRenamedItem__ctor_m38283B99834832A4A6B80183B793F326C41F57BA (FileBrowserRenamedItem_tB7E8EAF76EC4BA1F717E321523EC2E21A8A7A6E1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120_Multicast(OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* __this, String_t* ___filename0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* currentDelegate = reinterpret_cast<OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___filename0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120_OpenInst(OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* __this, String_t* ___filename0, const RuntimeMethod* method)
{
	NullCheck(___filename0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___filename0, method);
}
void OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120_OpenStatic(OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* __this, String_t* ___filename0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___filename0, method);
}
void OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120_OpenStaticInvoker(OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* __this, String_t* ___filename0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___filename0);
}
void OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120_ClosedStaticInvoker(OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* __this, String_t* ___filename0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___filename0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4 (OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* __this, String_t* ___filename0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___filename0' to native representation
	char* ____filename0_marshaled = NULL;
	____filename0_marshaled = il2cpp_codegen_marshal_string(___filename0);

	// Native function invocation
	il2cppPInvokeFunc(____filename0_marshaled);

	// Marshaling cleanup of parameter '___filename0' native representation
	il2cpp_codegen_marshal_free(____filename0_marshaled);
	____filename0_marshaled = NULL;

}
// System.Void SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenameCompleted__ctor_m0AC16860DB5FE13358EB2F30C513FCB054E5FA27 (OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120_Multicast;
}
// System.Void SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120 (OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* __this, String_t* ___filename0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___filename0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRenameCompleted_BeginInvoke_m621C0B07683F15A4318B721C41E3CAF06722CE59 (OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* __this, String_t* ___filename0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___filename0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenameCompleted_EndInvoke_m218BFB063D2CC68C4371A69F90D72D4E8FD20098 (OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleFileBrowser.NonDrawingGraphic::SetMaterialDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDrawingGraphic_SetMaterialDirty_m6E41316CE05E0CAB1FA05419CA693BA5D7785FD8 (NonDrawingGraphic_tBD88EBAE96A6567101742516605DDD13CF579F6B* __this, const RuntimeMethod* method) 
{
	{
		// public override void SetMaterialDirty() { return; }
		return;
	}
}
// System.Void SimpleFileBrowser.NonDrawingGraphic::SetVerticesDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDrawingGraphic_SetVerticesDirty_mF30C9F8E723F6646487B841EE01C0FB83018E7E1 (NonDrawingGraphic_tBD88EBAE96A6567101742516605DDD13CF579F6B* __this, const RuntimeMethod* method) 
{
	{
		// public override void SetVerticesDirty() { return; }
		return;
	}
}
// System.Void SimpleFileBrowser.NonDrawingGraphic::OnPopulateMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDrawingGraphic_OnPopulateMesh_m70317351D8D844824197E793309CF3C076F61063 (NonDrawingGraphic_tBD88EBAE96A6567101742516605DDD13CF579F6B* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, const RuntimeMethod* method) 
{
	{
		// vh.Clear();
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___vh0;
		NullCheck(L_0);
		VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5(L_0, NULL);
		// return;
		return;
	}
}
// System.Void SimpleFileBrowser.NonDrawingGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDrawingGraphic__ctor_m1C812CD8CDF1A4D32B0625F6E942B8AA2F4D7111 (NonDrawingGraphic_tBD88EBAE96A6567101742516605DDD13CF579F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		Graphic__ctor_m61FAEBEC21F22FE00B8CF39A8498AD31F62C0D6D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_Multicast(OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* currentDelegate = reinterpret_cast<OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenInst(OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	typedef void (*FunctionPointerType) (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___item0, method);
}
void OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenStatic(OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___item0, method);
}
void OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenStaticInvoker(OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* >::Invoke(__this->___method_ptr_0, method, NULL, ___item0);
}
void OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_ClosedStaticInvoker(OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___item0);
}
void OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenVirtual(OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___item0);
}
void OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenInterface(OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___item0);
}
void OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenGenericVirtual(OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	GenericVirtualActionInvoker0::Invoke(method, ___item0);
}
void OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenGenericInterface(OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	GenericInterfaceActionInvoker0::Invoke(method, ___item0);
}
// System.Void SimpleFileBrowser.OnItemClickedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemClickedHandler__ctor_m1925BAF36E9D7946CFE1504BD6DD96F153B388C0 (OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_Multicast;
}
// System.Void SimpleFileBrowser.OnItemClickedHandler::Invoke(SimpleFileBrowser.ListItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D (OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SimpleFileBrowser.OnItemClickedHandler::BeginInvoke(SimpleFileBrowser.ListItem,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnItemClickedHandler_BeginInvoke_mD91366BA755620887726C82170BA4E091B77F498 (OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___item0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SimpleFileBrowser.OnItemClickedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemClickedHandler_EndInvoke_m6D444A89749730A60901F4A18DCC63B9C7DDA53B (OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object SimpleFileBrowser.ListItem::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListItem_get_Tag_m1597F56AFCE6C67862A46C01E1C9B34CC7E73082 (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* __this, const RuntimeMethod* method) 
{
	{
		// public object Tag { get; set; }
		RuntimeObject* L_0 = __this->___U3CTagU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SimpleFileBrowser.ListItem::set_Tag(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem_set_Tag_m4FEE0178187A3031BC25CD8A62039653E2BB6A3D (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Tag { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTagU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTagU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Int32 SimpleFileBrowser.ListItem::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListItem_get_Position_m77F63B6D9D6144C78DF9DF9BA48B34A5F728E47A (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* __this, const RuntimeMethod* method) 
{
	{
		// public int Position { get; set; }
		int32_t L_0 = __this->___U3CPositionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SimpleFileBrowser.ListItem::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem_set_Position_m418B3AB7AE5529DD304CA048D3C3012849DFEAC3 (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Position { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CPositionU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void SimpleFileBrowser.ListItem::SetAdapter(SimpleFileBrowser.IListViewAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem_SetAdapter_m1803AD912C0AF6D5DFF1174084D94CF168BF11E0 (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* __this, RuntimeObject* ___listView0, const RuntimeMethod* method) 
{
	{
		// this.adapter = listView;
		RuntimeObject* L_0 = ___listView0;
		__this->___adapter_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adapter_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.ListItem::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem_OnClick_mC70C01C57F3F4F46B23719946F274BB65AE92340 (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( adapter.OnItemClicked != null )
		RuntimeObject* L_0 = __this->___adapter_6;
		NullCheck(L_0);
		OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* L_1;
		L_1 = InterfaceFuncInvoker0< OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* >::Invoke(0 /* SimpleFileBrowser.OnItemClickedHandler SimpleFileBrowser.IListViewAdapter::get_OnItemClicked() */, IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// adapter.OnItemClicked( this );
		RuntimeObject* L_2 = __this->___adapter_6;
		NullCheck(L_2);
		OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* L_3;
		L_3 = InterfaceFuncInvoker0< OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* >::Invoke(0 /* SimpleFileBrowser.OnItemClickedHandler SimpleFileBrowser.IListViewAdapter::get_OnItemClicked() */, IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_inline(L_3, __this, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.ListItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem__ctor_mA0B5A84516018300245E2EA04E7C137BE13947C5 (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleFileBrowser.RecycledListView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_Start_m335C5BA8D4C9036B79DC7F55CEF47C7A539C9A87 (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecycledListView_U3CStartU3Eb__10_0_m9D297D1FB7516BBBB724598CEAD4B797BAB1211E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// viewportHeight = viewportTransform.rect.height;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___viewportTransform_4;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		__this->___viewportHeight_8 = L_2;
		// GetComponent<ScrollRect>().onValueChanged.AddListener( ( pos ) => UpdateItemsInTheList() );
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_3;
		L_3 = Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518(__this, Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		NullCheck(L_3);
		ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* L_4;
		L_4 = ScrollRect_get_onValueChanged_mA6AF3832A97E82D31BB8C20BCD6E87A300E56C05_inline(L_3, NULL);
		UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* L_5 = (UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669*)il2cpp_codegen_object_new(UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m71C125B79EE35648CFC416CA7DBBC27C8DBAD45A(L_5, __this, (intptr_t)((void*)RecycledListView_U3CStartU3Eb__10_0_m9D297D1FB7516BBBB724598CEAD4B797BAB1211E_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851(L_4, L_5, UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::SetAdapter(SimpleFileBrowser.IListViewAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_SetAdapter_m63B78F9DCC05BE4F991BA260FAFF95333008A38B (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, RuntimeObject* ___adapter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.adapter = adapter;
		RuntimeObject* L_0 = ___adapter0;
		__this->___adapter_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adapter_11), (void*)L_0);
		// itemHeight = adapter.ItemHeight;
		RuntimeObject* L_1 = ___adapter0;
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(3 /* System.Single SimpleFileBrowser.IListViewAdapter::get_ItemHeight() */, IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var, L_1);
		__this->___itemHeight_6 = L_2;
		// _1OverItemHeight = 1f / itemHeight;
		float L_3 = __this->___itemHeight_6;
		__this->____1OverItemHeight_7 = ((float)((1.0f)/L_3));
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::UpdateList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_UpdateList_mA53DC38064D6EB42E9D030647CD9C90CA4A00F4B (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float newHeight = Mathf.Max( 1f, adapter.Count * itemHeight );
		RuntimeObject* L_0 = __this->___adapter_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 SimpleFileBrowser.IListViewAdapter::get_Count() */, IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var, L_0);
		float L_2 = __this->___itemHeight_6;
		float L_3;
		L_3 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((1.0f), ((float)il2cpp_codegen_multiply(((float)L_1), L_2)), NULL);
		V_0 = L_3;
		// contentTransform.sizeDelta = new Vector2( 0f, newHeight );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___contentTransform_5;
		float L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (0.0f), L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_4, L_6, NULL);
		// viewportHeight = viewportTransform.rect.height;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___viewportTransform_4;
		NullCheck(L_7);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_7, NULL);
		V_1 = L_8;
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		__this->___viewportHeight_8 = L_9;
		// UpdateItemsInTheList( true );
		RecycledListView_UpdateItemsInTheList_mB07D3C000F36B8624BF3C976062F0282F1A07735(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::OnViewportDimensionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_OnViewportDimensionsChanged_m2237B1BEE18B250322CE2E7419E489CD814E9D65 (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// viewportHeight = viewportTransform.rect.height;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___viewportTransform_4;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		__this->___viewportHeight_8 = L_2;
		// UpdateItemsInTheList();
		RecycledListView_UpdateItemsInTheList_mB07D3C000F36B8624BF3C976062F0282F1A07735(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::UpdateItemsInTheList(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_UpdateItemsInTheList_mB07D3C000F36B8624BF3C976062F0282F1A07735 (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, bool ___updateAllVisibleItems0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if( adapter.Count > 0 )
		RuntimeObject* L_0 = __this->___adapter_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 SimpleFileBrowser.IListViewAdapter::get_Count() */, IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var, L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_016e;
		}
	}
	{
		// float contentPos = contentTransform.anchoredPosition.y - 1f;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___contentTransform_5;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_2, NULL);
		float L_4 = L_3.___y_1;
		// int newTopIndex = (int) ( contentPos * _1OverItemHeight );
		float L_5 = ((float)il2cpp_codegen_subtract(L_4, (1.0f)));
		float L_6 = __this->____1OverItemHeight_7;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_5, L_6)));
		// int newBottomIndex = (int) ( ( contentPos + viewportHeight + 2f ) * _1OverItemHeight );
		float L_7 = __this->___viewportHeight_8;
		float L_8 = __this->____1OverItemHeight_7;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_5, L_7)), (2.0f))), L_8)));
		// if( newTopIndex < 0 )
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		// newTopIndex = 0;
		V_0 = 0;
	}

IL_004d:
	{
		// if( newBottomIndex > adapter.Count - 1 )
		int32_t L_10 = V_1;
		RuntimeObject* L_11 = __this->___adapter_11;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 SimpleFileBrowser.IListViewAdapter::get_Count() */, IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var, L_11);
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_12, 1)))))
		{
			goto IL_006b;
		}
	}
	{
		// newBottomIndex = adapter.Count - 1;
		RuntimeObject* L_13 = __this->___adapter_11;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 SimpleFileBrowser.IListViewAdapter::get_Count() */, IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var, L_13);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_006b:
	{
		// if( currentTopIndex == -1 )
		int32_t L_15 = __this->___currentTopIndex_12;
		if ((!(((uint32_t)L_15) == ((uint32_t)(-1)))))
		{
			goto IL_0092;
		}
	}
	{
		// updateAllVisibleItems = true;
		___updateAllVisibleItems0 = (bool)1;
		// currentTopIndex = newTopIndex;
		int32_t L_16 = V_0;
		__this->___currentTopIndex_12 = L_16;
		// currentBottomIndex = newBottomIndex;
		int32_t L_17 = V_1;
		__this->___currentBottomIndex_13 = L_17;
		// CreateItemsBetweenIndices( newTopIndex, newBottomIndex );
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		RecycledListView_CreateItemsBetweenIndices_m4B0B02E117999A197E4A0DEA516A278F1584A0D2(__this, L_18, L_19, NULL);
		goto IL_0158;
	}

IL_0092:
	{
		// if( newBottomIndex < currentTopIndex || newTopIndex > currentBottomIndex )
		int32_t L_20 = V_1;
		int32_t L_21 = __this->___currentTopIndex_12;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_22 = V_0;
		int32_t L_23 = __this->___currentBottomIndex_13;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_00c6;
		}
	}

IL_00a4:
	{
		// updateAllVisibleItems = true;
		___updateAllVisibleItems0 = (bool)1;
		// DestroyItemsBetweenIndices( currentTopIndex, currentBottomIndex );
		int32_t L_24 = __this->___currentTopIndex_12;
		int32_t L_25 = __this->___currentBottomIndex_13;
		RecycledListView_DestroyItemsBetweenIndices_m28F635E7219C4C10E6E39FF007655C4F529369D8(__this, L_24, L_25, NULL);
		// CreateItemsBetweenIndices( newTopIndex, newBottomIndex );
		int32_t L_26 = V_0;
		int32_t L_27 = V_1;
		RecycledListView_CreateItemsBetweenIndices_m4B0B02E117999A197E4A0DEA516A278F1584A0D2(__this, L_26, L_27, NULL);
		goto IL_014a;
	}

IL_00c6:
	{
		// if( newTopIndex > currentTopIndex )
		int32_t L_28 = V_0;
		int32_t L_29 = __this->___currentTopIndex_12;
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00de;
		}
	}
	{
		// DestroyItemsBetweenIndices( currentTopIndex, newTopIndex - 1 );
		int32_t L_30 = __this->___currentTopIndex_12;
		int32_t L_31 = V_0;
		RecycledListView_DestroyItemsBetweenIndices_m28F635E7219C4C10E6E39FF007655C4F529369D8(__this, L_30, ((int32_t)il2cpp_codegen_subtract(L_31, 1)), NULL);
	}

IL_00de:
	{
		// if( newBottomIndex < currentBottomIndex )
		int32_t L_32 = V_1;
		int32_t L_33 = __this->___currentBottomIndex_13;
		if ((((int32_t)L_32) >= ((int32_t)L_33)))
		{
			goto IL_00f6;
		}
	}
	{
		// DestroyItemsBetweenIndices( newBottomIndex + 1, currentBottomIndex );
		int32_t L_34 = V_1;
		int32_t L_35 = __this->___currentBottomIndex_13;
		RecycledListView_DestroyItemsBetweenIndices_m28F635E7219C4C10E6E39FF007655C4F529369D8(__this, ((int32_t)il2cpp_codegen_add(L_34, 1)), L_35, NULL);
	}

IL_00f6:
	{
		// if( newTopIndex < currentTopIndex )
		int32_t L_36 = V_0;
		int32_t L_37 = __this->___currentTopIndex_12;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_0120;
		}
	}
	{
		// CreateItemsBetweenIndices( newTopIndex, currentTopIndex - 1 );
		int32_t L_38 = V_0;
		int32_t L_39 = __this->___currentTopIndex_12;
		RecycledListView_CreateItemsBetweenIndices_m4B0B02E117999A197E4A0DEA516A278F1584A0D2(__this, L_38, ((int32_t)il2cpp_codegen_subtract(L_39, 1)), NULL);
		// if( !updateAllVisibleItems )
		bool L_40 = ___updateAllVisibleItems0;
		if (L_40)
		{
			goto IL_0120;
		}
	}
	{
		// UpdateItemContentsBetweenIndices( newTopIndex, currentTopIndex - 1 );
		int32_t L_41 = V_0;
		int32_t L_42 = __this->___currentTopIndex_12;
		RecycledListView_UpdateItemContentsBetweenIndices_m0E70EA7697E8AC97244265F6BF2754470410CF4F(__this, L_41, ((int32_t)il2cpp_codegen_subtract(L_42, 1)), NULL);
	}

IL_0120:
	{
		// if( newBottomIndex > currentBottomIndex )
		int32_t L_43 = V_1;
		int32_t L_44 = __this->___currentBottomIndex_13;
		if ((((int32_t)L_43) <= ((int32_t)L_44)))
		{
			goto IL_014a;
		}
	}
	{
		// CreateItemsBetweenIndices( currentBottomIndex + 1, newBottomIndex );
		int32_t L_45 = __this->___currentBottomIndex_13;
		int32_t L_46 = V_1;
		RecycledListView_CreateItemsBetweenIndices_m4B0B02E117999A197E4A0DEA516A278F1584A0D2(__this, ((int32_t)il2cpp_codegen_add(L_45, 1)), L_46, NULL);
		// if( !updateAllVisibleItems )
		bool L_47 = ___updateAllVisibleItems0;
		if (L_47)
		{
			goto IL_014a;
		}
	}
	{
		// UpdateItemContentsBetweenIndices( currentBottomIndex + 1, newBottomIndex );
		int32_t L_48 = __this->___currentBottomIndex_13;
		int32_t L_49 = V_1;
		RecycledListView_UpdateItemContentsBetweenIndices_m0E70EA7697E8AC97244265F6BF2754470410CF4F(__this, ((int32_t)il2cpp_codegen_add(L_48, 1)), L_49, NULL);
	}

IL_014a:
	{
		// currentTopIndex = newTopIndex;
		int32_t L_50 = V_0;
		__this->___currentTopIndex_12 = L_50;
		// currentBottomIndex = newBottomIndex;
		int32_t L_51 = V_1;
		__this->___currentBottomIndex_13 = L_51;
	}

IL_0158:
	{
		// if( updateAllVisibleItems )
		bool L_52 = ___updateAllVisibleItems0;
		if (!L_52)
		{
			goto IL_0190;
		}
	}
	{
		// UpdateItemContentsBetweenIndices( currentTopIndex, currentBottomIndex );
		int32_t L_53 = __this->___currentTopIndex_12;
		int32_t L_54 = __this->___currentBottomIndex_13;
		RecycledListView_UpdateItemContentsBetweenIndices_m0E70EA7697E8AC97244265F6BF2754470410CF4F(__this, L_53, L_54, NULL);
		return;
	}

IL_016e:
	{
		// else if( currentTopIndex != -1 )
		int32_t L_55 = __this->___currentTopIndex_12;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_0190;
		}
	}
	{
		// DestroyItemsBetweenIndices( currentTopIndex, currentBottomIndex );
		int32_t L_56 = __this->___currentTopIndex_12;
		int32_t L_57 = __this->___currentBottomIndex_13;
		RecycledListView_DestroyItemsBetweenIndices_m28F635E7219C4C10E6E39FF007655C4F529369D8(__this, L_56, L_57, NULL);
		// currentTopIndex = -1;
		__this->___currentTopIndex_12 = (-1);
	}

IL_0190:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::CreateItemsBetweenIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_CreateItemsBetweenIndices_m4B0B02E117999A197E4A0DEA516A278F1584A0D2 (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, int32_t ___topIndex0, int32_t ___bottomIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_0 = ___topIndex0;
		V_0 = L_0;
		goto IL_000f;
	}

IL_0004:
	{
		// CreateItemAtIndex( i );
		int32_t L_1 = V_0;
		RecycledListView_CreateItemAtIndex_m3EE332AEF541E25FD8BD5FDBAA9E3EB4ED8F18E2(__this, L_1, NULL);
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_000f:
	{
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_3 = V_0;
		int32_t L_4 = ___bottomIndex1;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::CreateItemAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_CreateItemAtIndex_m3EE332AEF541E25FD8BD5FDBAA9E3EB4ED8F18E2 (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7A87FE6684BC522309696445F66237AAD2D50827_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m2DB79BEEAC46CA0F95E450AB79CF477496FA634D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m9670CF8806836FEB46CE672C75CEA1ACB706CF2C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* V_0 = NULL;
	{
		// if( pooledItems.Count > 0 )
		Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78* L_0 = __this->___pooledItems_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Stack_1_get_Count_m9670CF8806836FEB46CE672C75CEA1ACB706CF2C_inline(L_0, Stack_1_get_Count_m9670CF8806836FEB46CE672C75CEA1ACB706CF2C_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// item = pooledItems.Pop();
		Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78* L_2 = __this->___pooledItems_10;
		NullCheck(L_2);
		ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* L_3;
		L_3 = Stack_1_Pop_m2DB79BEEAC46CA0F95E450AB79CF477496FA634D(L_2, Stack_1_Pop_m2DB79BEEAC46CA0F95E450AB79CF477496FA634D_RuntimeMethod_var);
		V_0 = L_3;
		// item.gameObject.SetActive( true );
		ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* L_4 = V_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		goto IL_0052;
	}

IL_0028:
	{
		// item = adapter.CreateItem();
		RuntimeObject* L_6 = __this->___adapter_11;
		NullCheck(L_6);
		ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* L_7;
		L_7 = InterfaceFuncInvoker0< ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* >::Invoke(4 /* SimpleFileBrowser.ListItem SimpleFileBrowser.IListViewAdapter::CreateItem() */, IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		// item.transform.SetParent( contentTransform, false );
		ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___contentTransform_5;
		NullCheck(L_9);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_9, L_10, (bool)0, NULL);
		// item.SetAdapter( adapter );
		ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* L_11 = V_0;
		RuntimeObject* L_12 = __this->___adapter_11;
		NullCheck(L_11);
		ListItem_SetAdapter_m1803AD912C0AF6D5DFF1174084D94CF168BF11E0_inline(L_11, L_12, NULL);
	}

IL_0052:
	{
		// ( (RectTransform) item.transform ).anchoredPosition = new Vector2( 1f, -index * itemHeight );
		ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* L_13 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		int32_t L_15 = ___index0;
		float L_16 = __this->___itemHeight_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), (1.0f), ((float)il2cpp_codegen_multiply(((float)((-L_15))), L_16)), /*hidden argument*/NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_14, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_14, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_17, NULL);
		// items[index] = item;
		Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA* L_18 = __this->___items_9;
		int32_t L_19 = ___index0;
		ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* L_20 = V_0;
		NullCheck(L_18);
		Dictionary_2_set_Item_m7A87FE6684BC522309696445F66237AAD2D50827(L_18, L_19, L_20, Dictionary_2_set_Item_m7A87FE6684BC522309696445F66237AAD2D50827_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::DestroyItemsBetweenIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_DestroyItemsBetweenIndices_m28F635E7219C4C10E6E39FF007655C4F529369D8 (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, int32_t ___topIndex0, int32_t ___bottomIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0E1C03676D4E791872A99AB041C306C8B902EB58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mD9EE743EA81C0D6BD49D98ED4F5780142A7FFB28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* V_1 = NULL;
	{
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_0 = ___topIndex0;
		V_0 = L_0;
		goto IL_002d;
	}

IL_0004:
	{
		// ListItem item = items[i];
		Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA* L_1 = __this->___items_9;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* L_3;
		L_3 = Dictionary_2_get_Item_m0E1C03676D4E791872A99AB041C306C8B902EB58(L_1, L_2, Dictionary_2_get_Item_m0E1C03676D4E791872A99AB041C306C8B902EB58_RuntimeMethod_var);
		V_1 = L_3;
		// item.gameObject.SetActive( false );
		ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// pooledItems.Push( item );
		Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78* L_6 = __this->___pooledItems_10;
		ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* L_7 = V_1;
		NullCheck(L_6);
		Stack_1_Push_mD9EE743EA81C0D6BD49D98ED4F5780142A7FFB28(L_6, L_7, Stack_1_Push_mD9EE743EA81C0D6BD49D98ED4F5780142A7FFB28_RuntimeMethod_var);
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002d:
	{
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_9 = V_0;
		int32_t L_10 = ___bottomIndex1;
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::UpdateItemContentsBetweenIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_UpdateItemContentsBetweenIndices_m0E70EA7697E8AC97244265F6BF2754470410CF4F (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, int32_t ___topIndex0, int32_t ___bottomIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0E1C03676D4E791872A99AB041C306C8B902EB58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* V_1 = NULL;
	{
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_0 = ___topIndex0;
		V_0 = L_0;
		goto IL_0028;
	}

IL_0004:
	{
		// ListItem item = items[i];
		Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA* L_1 = __this->___items_9;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* L_3;
		L_3 = Dictionary_2_get_Item_m0E1C03676D4E791872A99AB041C306C8B902EB58(L_1, L_2, Dictionary_2_get_Item_m0E1C03676D4E791872A99AB041C306C8B902EB58_RuntimeMethod_var);
		V_1 = L_3;
		// item.Position = i;
		ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ListItem_set_Position_m418B3AB7AE5529DD304CA048D3C3012849DFEAC3_inline(L_4, L_5, NULL);
		// adapter.SetItemContent( item );
		RuntimeObject* L_6 = __this->___adapter_11;
		ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* L_7 = V_1;
		NullCheck(L_6);
		InterfaceActionInvoker1< ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* >::Invoke(5 /* System.Void SimpleFileBrowser.IListViewAdapter::SetItemContent(SimpleFileBrowser.ListItem) */, IListViewAdapter_t0C56A476D633EE59CF37ECDAA6BF0AC594C77AF6_il2cpp_TypeInfo_var, L_6, L_7);
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0028:
	{
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_9 = V_0;
		int32_t L_10 = ___bottomIndex1;
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView__ctor_m10EA302D51AB4A0C521E642C1D45217946502EF8 (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB70BDA2D428588C94AC1C399CEC6CADAE6371FE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m8E7BCB8B45FC4751476B177A619B2686668DB34E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<int, ListItem> items = new Dictionary<int, ListItem>();
		Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA* L_0 = (Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA*)il2cpp_codegen_object_new(Dictionary_2_t0621E02366D48905CF6F8CC02D6E7E2B3D8478FA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB70BDA2D428588C94AC1C399CEC6CADAE6371FE7(L_0, Dictionary_2__ctor_mB70BDA2D428588C94AC1C399CEC6CADAE6371FE7_RuntimeMethod_var);
		__this->___items_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___items_9), (void*)L_0);
		// private readonly Stack<ListItem> pooledItems = new Stack<ListItem>();
		Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78* L_1 = (Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78*)il2cpp_codegen_object_new(Stack_1_tBF7743628E262EA8EBA9E01EB37F7100FFC92E78_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stack_1__ctor_m8E7BCB8B45FC4751476B177A619B2686668DB34E(L_1, Stack_1__ctor_m8E7BCB8B45FC4751476B177A619B2686668DB34E_RuntimeMethod_var);
		__this->___pooledItems_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pooledItems_10), (void*)L_1);
		// private int currentTopIndex = -1, currentBottomIndex = -1;
		__this->___currentTopIndex_12 = (-1);
		// private int currentTopIndex = -1, currentBottomIndex = -1;
		__this->___currentBottomIndex_13 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::<Start>b__10_0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_U3CStartU3Eb__10_0_m9D297D1FB7516BBBB724598CEAD4B797BAB1211E (RecycledListView_tAC11EBE068D502DAE0E31A98843809F511199E35* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) 
{
	{
		// GetComponent<ScrollRect>().onValueChanged.AddListener( ( pos ) => UpdateItemsInTheList() );
		RecycledListView_UpdateItemsInTheList_mB07D3C000F36B8624BF3C976062F0282F1A07735(__this, (bool)0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String BayatGames.Serialization.Formatters.Json.JsonExtensions::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonExtensions_ToJson_mF992B0EB850A2D6E1CF368E4C33335E8447277BB (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// return JsonFormatter.SerializeObject ( value );
		RuntimeObject* L_0 = ___value0;
		String_t* L_1;
		L_1 = JsonFormatter_SerializeObject_m956FF5AE113893CCF39F8E2B7B32F1366B6EAC41(L_0, NULL);
		return L_1;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonExtensions::AppendUntilStringEnd(System.Text.StringBuilder,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonExtensions_AppendUntilStringEnd_m9FDD0E1709EFDB0CB3B49F2CB0A0ABD0C3F11E4E (StringBuilder_t* ___builder0, String_t* ___json1, int32_t* ___index2, const RuntimeMethod* method) 
{
	{
		// if ( json.Length <= index )
		String_t* L_0 = ___json1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		int32_t* L_2 = ___index2;
		int32_t L_3 = *((int32_t*)L_2);
		if ((((int32_t)L_1) > ((int32_t)L_3)))
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// builder.Append ( json [ index ] );
		StringBuilder_t* L_4 = ___builder0;
		String_t* L_5 = ___json1;
		int32_t* L_6 = ___index2;
		int32_t L_7 = *((int32_t*)L_6);
		NullCheck(L_5);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_7, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, L_8, NULL);
		// index++;
		int32_t* L_10 = ___index2;
		int32_t* L_11 = ___index2;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0037;
	}

IL_0022:
	{
		// builder.Append ( json [ index ] );
		StringBuilder_t* L_13 = ___builder0;
		String_t* L_14 = ___json1;
		int32_t* L_15 = ___index2;
		int32_t L_16 = *((int32_t*)L_15);
		NullCheck(L_14);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, L_16, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, L_17, NULL);
		// index++;
		int32_t* L_19 = ___index2;
		int32_t* L_20 = ___index2;
		int32_t L_21 = *((int32_t*)L_20);
		*((int32_t*)L_19) = (int32_t)((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0037:
	{
		// while ( json [ index ] != '\"' )
		String_t* L_22 = ___json1;
		int32_t* L_23 = ___index2;
		int32_t L_24 = *((int32_t*)L_23);
		NullCheck(L_22);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_22, L_24, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0022;
		}
	}
	{
		// builder.Append ( json [ index ] );
		StringBuilder_t* L_26 = ___builder0;
		String_t* L_27 = ___json1;
		int32_t* L_28 = ___index2;
		int32_t L_29 = *((int32_t*)L_28);
		NullCheck(L_27);
		Il2CppChar L_30;
		L_30 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_27, L_29, NULL);
		NullCheck(L_26);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_26, L_30, NULL);
		// }
		return;
	}
}
// System.String BayatGames.Serialization.Formatters.Json.JsonExtensions::RemoveWhitespaceJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonExtensions_RemoveWhitespaceJson_mBDDE45D16A07C4EB4D2300E7894B3DD34978477D (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if ( string.IsNullOrEmpty ( json ) )
		String_t* L_0 = ___json0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return json;
		String_t* L_2 = ___json0;
		return L_2;
	}

IL_000a:
	{
		// StringBuilder builder = new StringBuilder ();
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
		V_0 = L_3;
		// for ( int i = 0; i < json.Length; i++ )
		V_1 = 0;
		goto IL_004a;
	}

IL_0014:
	{
		// if ( json [ i ] == '\"' )
		String_t* L_4 = ___json0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_002a;
		}
	}
	{
		// builder.AppendUntilStringEnd ( json, ref i );
		StringBuilder_t* L_7 = V_0;
		String_t* L_8 = ___json0;
		JsonExtensions_AppendUntilStringEnd_m9FDD0E1709EFDB0CB3B49F2CB0A0ABD0C3F11E4E(L_7, L_8, (&V_1), NULL);
		// continue;
		goto IL_0046;
	}

IL_002a:
	{
		// else if ( char.IsWhiteSpace ( json [ i ] ) )
		String_t* L_9 = ___json0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_11, NULL);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		// builder.Append ( json [ i ] );
		StringBuilder_t* L_13 = V_0;
		String_t* L_14 = ___json0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, L_15, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, L_16, NULL);
	}

IL_0046:
	{
		// for ( int i = 0; i < json.Length; i++ )
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004a:
	{
		// for ( int i = 0; i < json.Length; i++ )
		int32_t L_19 = V_1;
		String_t* L_20 = ___json0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_20, NULL);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0014;
		}
	}
	{
		// return builder.ToString ();
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		return L_23;
	}
}
// System.String[] BayatGames.Serialization.Formatters.Json.JsonExtensions::SplitJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* JsonExtensions_SplitJson_m8C9A649E94EDA7B6DF75A964F6283F81342E1FBC (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	int32_t V_1 = 0;
	StringBuilder_t* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		// if ( string.IsNullOrEmpty ( json ) )
		String_t* L_0 = ___json0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return new string[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_2;
	}

IL_000f:
	{
		// List<string> result = new List<string> ();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_3;
		// int depth = 0;
		V_1 = 0;
		// StringBuilder builder = new StringBuilder ();
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_4, NULL);
		V_2 = L_4;
		// for ( int i = 1; i < json.Length - 1; i++ )
		V_3 = 1;
		goto IL_00aa;
	}

IL_0024:
	{
		// switch ( json [ i ] )
		String_t* L_5 = ___json0;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_4 = L_7;
		Il2CppChar L_8 = V_4;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)58)))))
		{
			goto IL_0047;
		}
	}
	{
		Il2CppChar L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_0075;
		}
	}
	{
		Il2CppChar L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)44))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)58))))
		{
			goto IL_0080;
		}
	}
	{
		goto IL_0098;
	}

IL_0047:
	{
		Il2CppChar L_12 = V_4;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)93)))))
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)91))))
		{
			goto IL_0069;
		}
	}
	{
		Il2CppChar L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)93))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0098;
	}

IL_005b:
	{
		Il2CppChar L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)123))))
		{
			goto IL_0069;
		}
	}
	{
		Il2CppChar L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)125))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0098;
	}

IL_0069:
	{
		// depth++;
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		// break;
		goto IL_0098;
	}

IL_006f:
	{
		// depth--;
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		// break;
		goto IL_0098;
	}

IL_0075:
	{
		// builder.AppendUntilStringEnd ( json, ref i );
		StringBuilder_t* L_19 = V_2;
		String_t* L_20 = ___json0;
		JsonExtensions_AppendUntilStringEnd_m9FDD0E1709EFDB0CB3B49F2CB0A0ABD0C3F11E4E(L_19, L_20, (&V_3), NULL);
		// continue;
		goto IL_00a6;
	}

IL_0080:
	{
		// if ( depth == 0 )
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0098;
		}
	}
	{
		// result.Add ( builder.ToString () );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = V_0;
		StringBuilder_t* L_23 = V_2;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		NullCheck(L_22);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_22, L_24, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// builder.Length = 0;
		StringBuilder_t* L_25 = V_2;
		NullCheck(L_25);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_25, 0, NULL);
		// continue;
		goto IL_00a6;
	}

IL_0098:
	{
		// builder.Append ( json [ i ] );
		StringBuilder_t* L_26 = V_2;
		String_t* L_27 = ___json0;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		Il2CppChar L_29;
		L_29 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_27, L_28, NULL);
		NullCheck(L_26);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_26, L_29, NULL);
	}

IL_00a6:
	{
		// for ( int i = 1; i < json.Length - 1; i++ )
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00aa:
	{
		// for ( int i = 1; i < json.Length - 1; i++ )
		int32_t L_32 = V_3;
		String_t* L_33 = ___json0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_33, NULL);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_34, 1)))))
		{
			goto IL_0024;
		}
	}
	{
		// result.Add ( builder.ToString () );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_35 = V_0;
		StringBuilder_t* L_36 = V_2;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		NullCheck(L_35);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_35, L_37, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// return result.ToArray ();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_38 = V_0;
		NullCheck(L_38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39;
		L_39 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_38, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		return L_39;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.Serialization.ISurrogateSelector BayatGames.Serialization.Formatters.Json.JsonFormatter::get_surrogateSelector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonFormatter_get_surrogateSelector_m61504EFD97670AF712AE2A417E4538BF1AF0641D (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, const RuntimeMethod* method) 
{
	{
		// return m_SurrogateSelector;
		RuntimeObject* L_0 = __this->___m_SurrogateSelector_0;
		return L_0;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonFormatter::set_surrogateSelector(System.Runtime.Serialization.ISurrogateSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFormatter_set_surrogateSelector_m7B0DEF499258BB61AECC51B03BC821FD9BB79C31 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// m_SurrogateSelector = value;
		RuntimeObject* L_0 = ___value0;
		__this->___m_SurrogateSelector_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SurrogateSelector_0), (void*)L_0);
		// }
		return;
	}
}
// System.Runtime.Serialization.StreamingContext BayatGames.Serialization.Formatters.Json.JsonFormatter::get_context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 JsonFormatter_get_context_m9BE8180038C4F6A8C9AC8417559B00C900B6E016 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, const RuntimeMethod* method) 
{
	{
		// return m_Context;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_0 = __this->___m_Context_1;
		return L_0;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonFormatter::set_context(System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFormatter_set_context_m29A3CCB4C6AB2E9A248C639F02832C2DEA40F3A7 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value0, const RuntimeMethod* method) 
{
	{
		// m_Context = value;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_0 = ___value0;
		__this->___m_Context_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Context_1))->___m_additionalContext_0), (void*)NULL);
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFormatter__ctor_m4076518176650A20C5D22108A603CF296655FA4C (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, const RuntimeMethod* method) 
{
	{
		// public JsonFormatter () : this ( null, new StreamingContext ( StreamingContextStates.All ) )
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_0;
		memset((&L_0), 0, sizeof(L_0));
		StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E((&L_0), ((int32_t)255), /*hidden argument*/NULL);
		JsonFormatter__ctor_m86D45CFA0322444A3A0E02A671E463DA25519B03(__this, (RuntimeObject*)NULL, L_0, NULL);
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFormatter__ctor_m86D45CFA0322444A3A0E02A671E463DA25519B03 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, RuntimeObject* ___selector0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		// public JsonFormatter ( ISurrogateSelector selector, StreamingContext context )
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_SurrogateSelector = selector;
		RuntimeObject* L_0 = ___selector0;
		__this->___m_SurrogateSelector_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SurrogateSelector_0), (void*)L_0);
		// m_Context = context;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		__this->___m_Context_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Context_1))->___m_additionalContext_0), (void*)NULL);
		// }
		return;
	}
}
// System.String BayatGames.Serialization.Formatters.Json.JsonFormatter::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_Serialize_m5A7540A0CF91DCC70DEE7C8F2D459B776BEFA6B1 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	{
		// StringWriter output = new StringWriter ();
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_0 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringWriter__ctor_m072DFF5FFA84EBA7C38B282975D053E738C56E6D(L_0, NULL);
		V_0 = L_0;
		// Serialize ( output, value );
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = V_0;
		RuntimeObject* L_2 = ___value0;
		JsonFormatter_Serialize_m3E88E1ABEDD01031E9F1510F727EE323C56A3FF0(__this, L_1, L_2, NULL);
		// return output.ToString ();
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFormatter_Serialize_m7174DA8546580F46B7BE2EE961494B60165A7C24 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serialize ( new StreamWriter ( output ), value );
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___output0;
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_1 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B(L_1, L_0, NULL);
		RuntimeObject* L_2 = ___value1;
		JsonFormatter_Serialize_m3E88E1ABEDD01031E9F1510F727EE323C56A3FF0(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonFormatter::Serialize(System.IO.TextWriter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFormatter_Serialize_m3E88E1ABEDD01031E9F1510F727EE323C56A3FF0 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___output0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9* V_0 = NULL;
	{
		// using ( JsonWriter writer = new JsonTextWriter ( output, m_SurrogateSelector, m_Context ) )
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ___output0;
		RuntimeObject* L_1 = __this->___m_SurrogateSelector_0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_2 = __this->___m_Context_1;
		JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD* L_3 = (JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD*)il2cpp_codegen_object_new(JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JsonTextWriter__ctor_m29262AA3EC180CDEAC28EBE4C0CDBBC529D74373(L_3, L_0, L_1, L_2, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001c:
			{// begin finally (depth: 1)
				{
					JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0025;
					}
				}
				{
					JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0025:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// writer.Write ( value );
			JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9* L_6 = V_0;
			RuntimeObject* L_7 = ___value1;
			NullCheck(L_6);
			VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, L_6, L_7);
			// }
			goto IL_0026;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Object BayatGames.Serialization.Formatters.Json.JsonFormatter::Deserialize(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonFormatter_Deserialize_mCB230A49FEDD5AE5D726CF5F32C980E949B71354 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, String_t* ___input0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Deserialize ( new StringReader ( input ), type );
		String_t* L_0 = ___input0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_1, L_0, NULL);
		Type_t* L_2 = ___type1;
		RuntimeObject* L_3;
		L_3 = JsonFormatter_Deserialize_m9F52247A22CF3BD2159BAA025FA70A9986F377F3(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Object BayatGames.Serialization.Formatters.Json.JsonFormatter::Deserialize(System.IO.Stream,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonFormatter_Deserialize_mFDA6E1C65067F8C96C11DB9091134D0739D2BABE (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Deserialize ( new StreamReader ( input ), type );
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___input0;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_1 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_1, L_0, NULL);
		Type_t* L_2 = ___type1;
		RuntimeObject* L_3;
		L_3 = JsonFormatter_Deserialize_m9F52247A22CF3BD2159BAA025FA70A9986F377F3(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Object BayatGames.Serialization.Formatters.Json.JsonFormatter::Deserialize(System.IO.TextReader,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonFormatter_Deserialize_m9F52247A22CF3BD2159BAA025FA70A9986F377F3 (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___input0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// using ( JsonReader reader = new JsonTextReader ( input, m_SurrogateSelector, m_Context ) )
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = ___input0;
		RuntimeObject* L_1 = __this->___m_SurrogateSelector_0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_2 = __this->___m_Context_1;
		JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474* L_3 = (JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474*)il2cpp_codegen_object_new(JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JsonTextReader__ctor_mEFE987FB6C89C6CB8EFCFDE996C0E8C222C1A678(L_3, L_0, L_1, L_2, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001d:
			{// begin finally (depth: 1)
				{
					JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0026;
					}
				}
				{
					JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0026:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return reader.Read ( type );
			JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17* L_6 = V_0;
			Type_t* L_7 = ___type1;
			NullCheck(L_6);
			RuntimeObject* L_8;
			L_8 = VirtualFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(9 /* System.Object BayatGames.Serialization.Formatters.Json.JsonReader::Read(System.Type) */, L_6, L_7);
			V_1 = L_8;
			goto IL_0027;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0027:
	{
		// }
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// System.String BayatGames.Serialization.Formatters.Json.JsonFormatter::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_SerializeObject_m956FF5AE113893CCF39F8E2B7B32F1366B6EAC41 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JsonFormatter formatter = new JsonFormatter ();
		JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* L_0 = (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A*)il2cpp_codegen_object_new(JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonFormatter__ctor_m4076518176650A20C5D22108A603CF296655FA4C(L_0, NULL);
		// return formatter.Serialize ( value );
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = JsonFormatter_Serialize_m5A7540A0CF91DCC70DEE7C8F2D459B776BEFA6B1(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Object BayatGames.Serialization.Formatters.Json.JsonFormatter::DeserializeObject(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonFormatter_DeserializeObject_mA507740B921D75E80C24401C8175B7B164B1084D (String_t* ___json0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JsonFormatter formatter = new JsonFormatter ();
		JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A* L_0 = (JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A*)il2cpp_codegen_object_new(JsonFormatter_t3ABFDD3445D9F321B3A8E4522EFDE53FDD39653A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonFormatter__ctor_m4076518176650A20C5D22108A603CF296655FA4C(L_0, NULL);
		// return formatter.Deserialize ( json, type );
		String_t* L_1 = ___json0;
		Type_t* L_2 = ___type1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = JsonFormatter_Deserialize_mCB230A49FEDD5AE5D726CF5F32C980E949B71354(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.Serialization.ISurrogateSelector BayatGames.Serialization.Formatters.Json.JsonReader::get_surrogateSelector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_get_surrogateSelector_m83313DE84EBF4BD4ACCD46FC6BF100344C5A031F (JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17* __this, const RuntimeMethod* method) 
{
	{
		// return m_SurrogateSelector;
		RuntimeObject* L_0 = __this->___m_SurrogateSelector_0;
		return L_0;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonReader::set_surrogateSelector(System.Runtime.Serialization.ISurrogateSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_surrogateSelector_m1F2139E8D69FFBF87819C1EB8219531999ADCCAC (JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// m_SurrogateSelector = value;
		RuntimeObject* L_0 = ___value0;
		__this->___m_SurrogateSelector_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SurrogateSelector_0), (void*)L_0);
		// }
		return;
	}
}
// System.Runtime.Serialization.StreamingContext BayatGames.Serialization.Formatters.Json.JsonReader::get_context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 JsonReader_get_context_mEE1E7E1D0E778036953B35C9B6E747F4DC20CED4 (JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17* __this, const RuntimeMethod* method) 
{
	{
		// return m_Context;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_0 = __this->___m_Context_1;
		return L_0;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonReader::set_context(System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_context_mED317B4DEE32BD7AE4B0EFA2964E355015307372 (JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value0, const RuntimeMethod* method) 
{
	{
		// m_Context = value;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_0 = ___value0;
		__this->___m_Context_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Context_1))->___m_additionalContext_0), (void*)NULL);
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonReader::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mD25427CE289FAC14CBCBF402BB9AA465B735BD22 (JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17* __this, RuntimeObject* ___selector0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		// public JsonReader ( ISurrogateSelector selector, StreamingContext context )
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_SurrogateSelector = selector;
		RuntimeObject* L_0 = ___selector0;
		__this->___m_SurrogateSelector_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SurrogateSelector_0), (void*)L_0);
		// m_Context = context;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		__this->___m_Context_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Context_1))->___m_additionalContext_0), (void*)NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IO.TextReader BayatGames.Serialization.Formatters.Json.JsonTextReader::get_reader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* JsonTextReader_get_reader_mAB96CBB2FD7D8494BEB883DAD8FBC988E6AE25A1 (JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474* __this, const RuntimeMethod* method) 
{
	{
		// return m_Reader;
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = __this->___m_Reader_2;
		return L_0;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonTextReader::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextReader__ctor_mEC55860026AAD207EEDD1D4541B960B2753B6213 (JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, const RuntimeMethod* method) 
{
	{
		// public JsonTextReader ( TextReader reader ) : this ( reader, null, new StreamingContext ( StreamingContextStates.All ) )
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = ___reader0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1;
		memset((&L_1), 0, sizeof(L_1));
		StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E((&L_1), ((int32_t)255), /*hidden argument*/NULL);
		JsonTextReader__ctor_mEFE987FB6C89C6CB8EFCFDE996C0E8C222C1A678(__this, L_0, (RuntimeObject*)NULL, L_1, NULL);
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonTextReader::.ctor(System.IO.TextReader,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextReader__ctor_mEFE987FB6C89C6CB8EFCFDE996C0E8C222C1A678 (JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, RuntimeObject* ___selector1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) 
{
	{
		// public JsonTextReader ( TextReader reader, ISurrogateSelector selector, StreamingContext context ) : base ( selector, context )
		RuntimeObject* L_0 = ___selector1;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context2;
		JsonReader__ctor_mD25427CE289FAC14CBCBF402BB9AA465B735BD22(__this, L_0, L_1, NULL);
		// m_Reader = reader;
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_2 = ___reader0;
		__this->___m_Reader_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Reader_2), (void*)L_2);
		// }
		return;
	}
}
// System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonTextReader_Read_m44D8134CC99F857425F41D3FD3B8EE8E4B7A2226 (JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		// return Read ( type, m_Reader.ReadToEnd ().RemoveWhitespaceJson () );
		Type_t* L_0 = ___type0;
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_1 = __this->___m_Reader_2;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_1);
		String_t* L_3;
		L_3 = JsonExtensions_RemoveWhitespaceJson_mBDDE45D16A07C4EB4D2300E7894B3DD34978477D(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(13 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String) */, __this, L_0, L_3);
		return L_4;
	}
}
// System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonTextReader_Read_mDF69E5240192814DF925ACDB1F3724C38B44DCB5 (JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474* __this, Type_t* ___type0, String_t* ___json1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDeserializationCallback_tDE4D7D3A8889ABCB4E8062D9B14164F3B8DEEE62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTextReader_Read_TisString_t_m872B53C604086D1D2F5935C9C183D2CFE47D625B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t6B67F15F63BF2F3C9BF0458C0AA16F217BE189F0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	RuntimeArray* V_3 = NULL;
	int32_t V_4 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_5 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	int32_t V_9 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_10 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_11 = NULL;
	RuntimeObject* V_12 = NULL;
	int32_t V_13 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_14 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_15 = NULL;
	RuntimeObject* V_16 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_17 = NULL;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	{
		// object result = null;
		V_0 = NULL;
		// if ( type == null || string.IsNullOrEmpty ( json ) )
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ___json1;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}

IL_0013:
	{
		// result = null;
		V_0 = NULL;
		goto IL_03d1;
	}

IL_001a:
	{
		// if ( type == typeof ( string ) || type.IsEnum )
		Type_t* L_4 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		if (L_7)
		{
			goto IL_0034;
		}
	}
	{
		Type_t* L_8 = ___type0;
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, L_8);
		if (!L_9)
		{
			goto IL_0049;
		}
	}

IL_0034:
	{
		// result = json.Substring ( 1, json.Length - 2 );
		String_t* L_10 = ___json1;
		String_t* L_11 = ___json1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		NullCheck(L_10);
		String_t* L_13;
		L_13 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_10, 1, ((int32_t)il2cpp_codegen_subtract(L_12, 2)), NULL);
		V_0 = L_13;
		goto IL_03d1;
	}

IL_0049:
	{
		// else if ( type == typeof ( short ) || type == typeof ( int ) || type == typeof ( long ) ||
		//           type == typeof ( ushort ) || type == typeof ( uint ) || type == typeof ( ulong ) ||
		//           type == typeof ( byte ) || type == typeof ( sbyte ) || type == typeof ( decimal ) ||
		//           type == typeof ( double ) || type == typeof ( float ) )
		Type_t* L_14 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		if (L_17)
		{
			goto IL_0118;
		}
	}
	{
		Type_t* L_18 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		if (L_21)
		{
			goto IL_0118;
		}
	}
	{
		Type_t* L_22 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (L_25)
		{
			goto IL_0118;
		}
	}
	{
		Type_t* L_26 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_26, L_28, NULL);
		if (L_29)
		{
			goto IL_0118;
		}
	}
	{
		Type_t* L_30 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		bool L_33;
		L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
		if (L_33)
		{
			goto IL_0118;
		}
	}
	{
		Type_t* L_34 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
		if (L_37)
		{
			goto IL_0118;
		}
	}
	{
		Type_t* L_38 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		bool L_41;
		L_41 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_38, L_40, NULL);
		if (L_41)
		{
			goto IL_0118;
		}
	}
	{
		Type_t* L_42 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		bool L_45;
		L_45 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_42, L_44, NULL);
		if (L_45)
		{
			goto IL_0118;
		}
	}
	{
		Type_t* L_46 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		bool L_49;
		L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
		if (L_49)
		{
			goto IL_0118;
		}
	}
	{
		Type_t* L_50 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		if (L_53)
		{
			goto IL_0118;
		}
	}
	{
		Type_t* L_54 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		bool L_57;
		L_57 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_54, L_56, NULL);
		if (!L_57)
		{
			goto IL_0125;
		}
	}

IL_0118:
	{
		// result = Convert.ChangeType ( json, type );
		String_t* L_58 = ___json1;
		Type_t* L_59 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_60;
		L_60 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_58, L_59, NULL);
		V_0 = L_60;
		goto IL_03d1;
	}

IL_0125:
	{
		// else if ( type.IsArray )
		Type_t* L_61 = ___type0;
		NullCheck(L_61);
		bool L_62;
		L_62 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_61, NULL);
		if (!L_62)
		{
			goto IL_0171;
		}
	}
	{
		// Type elementType = type.GetElementType ();
		Type_t* L_63 = ___type0;
		NullCheck(L_63);
		Type_t* L_64;
		L_64 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_63);
		V_1 = L_64;
		// string [] items = json.SplitJson ();
		String_t* L_65 = ___json1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66;
		L_66 = JsonExtensions_SplitJson_m8C9A649E94EDA7B6DF75A964F6283F81342E1FBC(L_65, NULL);
		V_2 = L_66;
		// Array array = Array.CreateInstance ( elementType, items.Length );
		Type_t* L_67 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_2;
		NullCheck(L_68);
		RuntimeArray* L_69;
		L_69 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_67, ((int32_t)(((RuntimeArray*)L_68)->max_length)), NULL);
		V_3 = L_69;
		// for ( int i = 0; i < items.Length; i++ )
		V_4 = 0;
		goto IL_0163;
	}

IL_014a:
	{
		// array.SetValue ( Read ( elementType, items [ i ] ), i );
		RuntimeArray* L_70 = V_3;
		Type_t* L_71 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = V_2;
		int32_t L_73 = V_4;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		String_t* L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		RuntimeObject* L_76;
		L_76 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(13 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String) */, __this, L_71, L_75);
		int32_t L_77 = V_4;
		NullCheck(L_70);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_70, L_76, L_77, NULL);
		// for ( int i = 0; i < items.Length; i++ )
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_0163:
	{
		// for ( int i = 0; i < items.Length; i++ )
		int32_t L_79 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_2;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
		{
			goto IL_014a;
		}
	}
	{
		// result = array;
		RuntimeArray* L_81 = V_3;
		V_0 = L_81;
		goto IL_03d1;
	}

IL_0171:
	{
		// else if ( type.IsGenericType && type.GetGenericTypeDefinition () == typeof ( KeyValuePair<,> ) )
		Type_t* L_82 = ___type0;
		NullCheck(L_82);
		bool L_83;
		L_83 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_82);
		if (!L_83)
		{
			goto IL_0255;
		}
	}
	{
		Type_t* L_84 = ___type0;
		NullCheck(L_84);
		Type_t* L_85;
		L_85 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_84);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (KeyValuePair_2_t6B67F15F63BF2F3C9BF0458C0AA16F217BE189F0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		bool L_88;
		L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
		if (!L_88)
		{
			goto IL_0255;
		}
	}
	{
		// Type [] genericArgs = type.GetGenericArguments ();
		Type_t* L_89 = ___type0;
		NullCheck(L_89);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_90;
		L_90 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(49 /* System.Type[] System.Type::GetGenericArguments() */, L_89);
		V_5 = L_90;
		// string [] items = json.SplitJson ();
		String_t* L_91 = ___json1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_92;
		L_92 = JsonExtensions_SplitJson_m8C9A649E94EDA7B6DF75A964F6283F81342E1FBC(L_91, NULL);
		V_6 = L_92;
		// object key = null;
		V_7 = NULL;
		// object value = null;
		V_8 = NULL;
		// if ( items.Length == 1 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_93 = V_6;
		NullCheck(L_93);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_93)->max_length))) == ((uint32_t)1))))
		{
			goto IL_01d5;
		}
	}
	{
		// key = Read ( genericArgs [ 0 ], items [ 0 ] );
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_94 = V_5;
		NullCheck(L_94);
		int32_t L_95 = 0;
		Type_t* L_96 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_97 = V_6;
		NullCheck(L_97);
		int32_t L_98 = 0;
		String_t* L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		RuntimeObject* L_100;
		L_100 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(13 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String) */, __this, L_96, L_99);
		V_7 = L_100;
		// value = Read ( genericArgs [ 1 ], items [ 1 ] );
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_101 = V_5;
		NullCheck(L_101);
		int32_t L_102 = 1;
		Type_t* L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_104 = V_6;
		NullCheck(L_104);
		int32_t L_105 = 1;
		String_t* L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		RuntimeObject* L_107;
		L_107 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(13 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String) */, __this, L_103, L_106);
		V_8 = L_107;
		goto IL_0232;
	}

IL_01d5:
	{
		// for ( int i = 0; i < items.Length; i += 2 )
		V_9 = 0;
		goto IL_022a;
	}

IL_01da:
	{
		// if ( items [ i ] == "Key" )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_108 = V_6;
		int32_t L_109 = V_9;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		String_t* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		bool L_112;
		L_112 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_111, _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07, NULL);
		if (!L_112)
		{
			goto IL_0200;
		}
	}
	{
		// key = Read ( genericArgs [ 0 ], items [ i + 1 ] );
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_113 = V_5;
		NullCheck(L_113);
		int32_t L_114 = 0;
		Type_t* L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_116 = V_6;
		int32_t L_117 = V_9;
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_117, 1));
		String_t* L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		RuntimeObject* L_120;
		L_120 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(13 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String) */, __this, L_115, L_119);
		V_7 = L_120;
		goto IL_0224;
	}

IL_0200:
	{
		// else if ( items [ i ] == "Value" )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_121 = V_6;
		int32_t L_122 = V_9;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		String_t* L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		bool L_125;
		L_125 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_124, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, NULL);
		if (!L_125)
		{
			goto IL_0224;
		}
	}
	{
		// value = Read ( genericArgs [ 1 ], items [ i + 1 ] );
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_126 = V_5;
		NullCheck(L_126);
		int32_t L_127 = 1;
		Type_t* L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_129 = V_6;
		int32_t L_130 = V_9;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)il2cpp_codegen_add(L_130, 1));
		String_t* L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		RuntimeObject* L_133;
		L_133 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(13 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String) */, __this, L_128, L_132);
		V_8 = L_133;
	}

IL_0224:
	{
		// for ( int i = 0; i < items.Length; i += 2 )
		int32_t L_134 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_134, 2));
	}

IL_022a:
	{
		// for ( int i = 0; i < items.Length; i += 2 )
		int32_t L_135 = V_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_136 = V_6;
		NullCheck(L_136);
		if ((((int32_t)L_135) < ((int32_t)((int32_t)(((RuntimeArray*)L_136)->max_length)))))
		{
			goto IL_01da;
		}
	}

IL_0232:
	{
		// result = type.GetConstructor ( genericArgs ).Invoke ( new object [] { key, value } );
		Type_t* L_137 = ___type0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_138 = V_5;
		NullCheck(L_137);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_139;
		L_139 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_137, L_138, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_140 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_141 = L_140;
		RuntimeObject* L_142 = V_7;
		NullCheck(L_141);
		ArrayElementTypeCheck (L_141, L_142);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_142);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_143 = L_141;
		RuntimeObject* L_144 = V_8;
		NullCheck(L_143);
		ArrayElementTypeCheck (L_143, L_144);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_144);
		NullCheck(L_139);
		RuntimeObject* L_145;
		L_145 = ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE(L_139, L_143, NULL);
		V_0 = L_145;
		goto IL_03d1;
	}

IL_0255:
	{
		// else if ( type.IsGenericType && type.GetGenericTypeDefinition () == typeof ( List<> ) )
		Type_t* L_146 = ___type0;
		NullCheck(L_146);
		bool L_147;
		L_147 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_146);
		if (!L_147)
		{
			goto IL_02ce;
		}
	}
	{
		Type_t* L_148 = ___type0;
		NullCheck(L_148);
		Type_t* L_149;
		L_149 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_148);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_151;
		L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
		bool L_152;
		L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
		if (!L_152)
		{
			goto IL_02ce;
		}
	}
	{
		// Type [] genericArgs = type.GetGenericArguments ();
		Type_t* L_153 = ___type0;
		NullCheck(L_153);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_154;
		L_154 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(49 /* System.Type[] System.Type::GetGenericArguments() */, L_153);
		V_10 = L_154;
		// string [] items = json.SplitJson ();
		String_t* L_155 = ___json1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_156;
		L_156 = JsonExtensions_SplitJson_m8C9A649E94EDA7B6DF75A964F6283F81342E1FBC(L_155, NULL);
		V_11 = L_156;
		// IList list = ( IList )type.GetConstructor ( Type.EmptyTypes ).Invoke ( null );
		Type_t* L_157 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_158 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->___EmptyTypes_2;
		NullCheck(L_157);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_159;
		L_159 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_157, L_158, NULL);
		NullCheck(L_159);
		RuntimeObject* L_160;
		L_160 = ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE(L_159, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		V_12 = ((RuntimeObject*)Castclass((RuntimeObject*)L_160, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		// for ( int i = 0; i < items.Length; i++ )
		V_13 = 0;
		goto IL_02be;
	}

IL_02a1:
	{
		// list.Add ( Read ( genericArgs [ 0 ], items [ i ] ) );
		RuntimeObject* L_161 = V_12;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_162 = V_10;
		NullCheck(L_162);
		int32_t L_163 = 0;
		Type_t* L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_165 = V_11;
		int32_t L_166 = V_13;
		NullCheck(L_165);
		int32_t L_167 = L_166;
		String_t* L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		RuntimeObject* L_169;
		L_169 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(13 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String) */, __this, L_164, L_168);
		NullCheck(L_161);
		int32_t L_170;
		L_170 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_161, L_169);
		// for ( int i = 0; i < items.Length; i++ )
		int32_t L_171 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_02be:
	{
		// for ( int i = 0; i < items.Length; i++ )
		int32_t L_172 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_173 = V_11;
		NullCheck(L_173);
		if ((((int32_t)L_172) < ((int32_t)((int32_t)(((RuntimeArray*)L_173)->max_length)))))
		{
			goto IL_02a1;
		}
	}
	{
		// result = list;
		RuntimeObject* L_174 = V_12;
		V_0 = L_174;
		goto IL_03d1;
	}

IL_02ce:
	{
		// else if ( type.IsGenericType && type.GetGenericTypeDefinition () == typeof ( Dictionary<,> ) )
		Type_t* L_175 = ___type0;
		NullCheck(L_175);
		bool L_176;
		L_176 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_175);
		if (!L_176)
		{
			goto IL_03c8;
		}
	}
	{
		Type_t* L_177 = ___type0;
		NullCheck(L_177);
		Type_t* L_178;
		L_178 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_177);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_180;
		L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
		bool L_181;
		L_181 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_178, L_180, NULL);
		if (!L_181)
		{
			goto IL_03c8;
		}
	}
	{
		// Type [] genericArgs = type.GetGenericArguments ();
		Type_t* L_182 = ___type0;
		NullCheck(L_182);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_183;
		L_183 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(49 /* System.Type[] System.Type::GetGenericArguments() */, L_182);
		V_14 = L_183;
		// string [] items = json.SplitJson ();
		String_t* L_184 = ___json1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_185;
		L_185 = JsonExtensions_SplitJson_m8C9A649E94EDA7B6DF75A964F6283F81342E1FBC(L_184, NULL);
		V_15 = L_185;
		// if ( items.Length == 8 && Read<string> ( items [ 6 ] ) == "KeyValuePairs" )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_186 = V_15;
		NullCheck(L_186);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_186)->max_length))) == ((uint32_t)8))))
		{
			goto IL_0371;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_187 = V_15;
		NullCheck(L_187);
		int32_t L_188 = 6;
		String_t* L_189 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		String_t* L_190;
		L_190 = GenericVirtualFuncInvoker1< String_t*, String_t* >::Invoke(JsonTextReader_Read_TisString_t_m872B53C604086D1D2F5935C9C183D2CFE47D625B_RuntimeMethod_var, __this, L_189);
		bool L_191;
		L_191 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_190, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, NULL);
		if (!L_191)
		{
			goto IL_0371;
		}
	}
	{
		// items = items [ 7 ].SplitJson () [ 0 ].SplitJson ();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_192 = V_15;
		NullCheck(L_192);
		int32_t L_193 = 7;
		String_t* L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_195;
		L_195 = JsonExtensions_SplitJson_m8C9A649E94EDA7B6DF75A964F6283F81342E1FBC(L_194, NULL);
		NullCheck(L_195);
		int32_t L_196 = 0;
		String_t* L_197 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_198;
		L_198 = JsonExtensions_SplitJson_m8C9A649E94EDA7B6DF75A964F6283F81342E1FBC(L_197, NULL);
		V_15 = L_198;
		// List<string> newItems = new List<string> ();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_199 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_199);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_199, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_17 = L_199;
		// for ( int i = 0; i < items.Length; i += 4 )
		V_18 = 0;
		goto IL_0360;
	}

IL_033e:
	{
		// newItems.Add ( items [ i + 1 ] );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_200 = V_17;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_201 = V_15;
		int32_t L_202 = V_18;
		NullCheck(L_201);
		int32_t L_203 = ((int32_t)il2cpp_codegen_add(L_202, 1));
		String_t* L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		NullCheck(L_200);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_200, L_204, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// newItems.Add ( items [ i + 3 ] );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_205 = V_17;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_206 = V_15;
		int32_t L_207 = V_18;
		NullCheck(L_206);
		int32_t L_208 = ((int32_t)il2cpp_codegen_add(L_207, 3));
		String_t* L_209 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		NullCheck(L_205);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_205, L_209, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for ( int i = 0; i < items.Length; i += 4 )
		int32_t L_210 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_210, 4));
	}

IL_0360:
	{
		// for ( int i = 0; i < items.Length; i += 4 )
		int32_t L_211 = V_18;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_212 = V_15;
		NullCheck(L_212);
		if ((((int32_t)L_211) < ((int32_t)((int32_t)(((RuntimeArray*)L_212)->max_length)))))
		{
			goto IL_033e;
		}
	}
	{
		// items = newItems.ToArray ();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_213 = V_17;
		NullCheck(L_213);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_214;
		L_214 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_213, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		V_15 = L_214;
	}

IL_0371:
	{
		// IDictionary dictionary = ( IDictionary )type.GetConstructor ( Type.EmptyTypes ).Invoke ( null );
		Type_t* L_215 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_216 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->___EmptyTypes_2;
		NullCheck(L_215);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_217;
		L_217 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_215, L_216, NULL);
		NullCheck(L_217);
		RuntimeObject* L_218;
		L_218 = ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE(L_217, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		V_16 = ((RuntimeObject*)Castclass((RuntimeObject*)L_218, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		// for ( int i = 0; i < items.Length; i += 2 )
		V_19 = 0;
		goto IL_03bb;
	}

IL_038e:
	{
		// dictionary.Add ( Read ( genericArgs [ 0 ], items [ i ] ), Read ( genericArgs [ 1 ], items [ i + 1 ] ) );
		RuntimeObject* L_219 = V_16;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_220 = V_14;
		NullCheck(L_220);
		int32_t L_221 = 0;
		Type_t* L_222 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_223 = V_15;
		int32_t L_224 = V_19;
		NullCheck(L_223);
		int32_t L_225 = L_224;
		String_t* L_226 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		RuntimeObject* L_227;
		L_227 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(13 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String) */, __this, L_222, L_226);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_228 = V_14;
		NullCheck(L_228);
		int32_t L_229 = 1;
		Type_t* L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_231 = V_15;
		int32_t L_232 = V_19;
		NullCheck(L_231);
		int32_t L_233 = ((int32_t)il2cpp_codegen_add(L_232, 1));
		String_t* L_234 = (L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		RuntimeObject* L_235;
		L_235 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(13 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String) */, __this, L_230, L_234);
		NullCheck(L_219);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_219, L_227, L_235);
		// for ( int i = 0; i < items.Length; i += 2 )
		int32_t L_236 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_236, 2));
	}

IL_03bb:
	{
		// for ( int i = 0; i < items.Length; i += 2 )
		int32_t L_237 = V_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_238 = V_15;
		NullCheck(L_238);
		if ((((int32_t)L_237) < ((int32_t)((int32_t)(((RuntimeArray*)L_238)->max_length)))))
		{
			goto IL_038e;
		}
	}
	{
		// result = dictionary;
		RuntimeObject* L_239 = V_16;
		V_0 = L_239;
		goto IL_03d1;
	}

IL_03c8:
	{
		// result = ReadObject ( type, json );
		Type_t* L_240 = ___type0;
		String_t* L_241 = ___json1;
		RuntimeObject* L_242;
		L_242 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(14 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::ReadObject(System.Type,System.String) */, __this, L_240, L_241);
		V_0 = L_242;
	}

IL_03d1:
	{
		// if ( result is IDeserializationCallback )
		RuntimeObject* L_243 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_243, IDeserializationCallback_tDE4D7D3A8889ABCB4E8062D9B14164F3B8DEEE62_il2cpp_TypeInfo_var)))
		{
			goto IL_03e5;
		}
	}
	{
		// ( result as IDeserializationCallback ).OnDeserialization ( this );
		RuntimeObject* L_244 = V_0;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_244, IDeserializationCallback_tDE4D7D3A8889ABCB4E8062D9B14164F3B8DEEE62_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.Runtime.Serialization.IDeserializationCallback::OnDeserialization(System.Object) */, IDeserializationCallback_tDE4D7D3A8889ABCB4E8062D9B14164F3B8DEEE62_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_244, IDeserializationCallback_tDE4D7D3A8889ABCB4E8062D9B14164F3B8DEEE62_il2cpp_TypeInfo_var)), __this);
	}

IL_03e5:
	{
		// return result;
		RuntimeObject* L_245 = V_0;
		return L_245;
	}
}
// System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::ReadObject(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonTextReader_ReadObject_mE36F8AF2E8856A8796CA0C9AB05BF560850390A9 (JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474* __this, Type_t* ___type0, String_t* ___json1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializationSurrogate_tDFCC54FF77F435377F6DBC1857F5F530D9E668C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTextReader_Read_TisString_t_m872B53C604086D1D2F5935C9C183D2CFE47D625B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	FieldInfo_t* V_7 = NULL;
	PropertyInfo_t* V_8 = NULL;
	{
		// object result = null;
		V_0 = NULL;
		// if ( type.IsValueType )
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// result = Activator.CreateInstance ( type );
		Type_t* L_2 = ___type0;
		RuntimeObject* L_3;
		L_3 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_2, NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_0013:
	{
		// result = FormatterServices.GetUninitializedObject ( type );
		Type_t* L_4 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = FormatterServices_GetUninitializedObject_mA2B57E3C189694129FE2870B8188421DF78468A1(L_4, NULL);
		V_0 = L_5;
	}

IL_001a:
	{
		// ISurrogateSelector selector = null;
		V_1 = (RuntimeObject*)NULL;
		// SerializationInfo info = null;
		V_2 = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		// ISerializationSurrogate surrogate = null;
		V_3 = (RuntimeObject*)NULL;
		// if ( m_SurrogateSelector != null )
		RuntimeObject* L_6 = ((JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17*)__this)->___m_SurrogateSelector_0;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// surrogate = m_SurrogateSelector.GetSurrogate ( type, m_Context, out selector );
		RuntimeObject* L_7 = ((JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17*)__this)->___m_SurrogateSelector_0;
		Type_t* L_8 = ___type0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_9 = ((JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17*)__this)->___m_Context_1;
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker3< RuntimeObject*, Type_t*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677, RuntimeObject** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01_il2cpp_TypeInfo_var, L_7, L_8, L_9, (&V_1));
		V_3 = L_10;
		// if ( surrogate != null )
		RuntimeObject* L_11 = V_3;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// info = new SerializationInfo ( type, new FormatterConverter () );
		Type_t* L_12 = ___type0;
		FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27* L_13 = (FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27*)il2cpp_codegen_object_new(FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		FormatterConverter__ctor_mC6145A6BF40990C62266BE7EF029A58F2768DC85(L_13, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)il2cpp_codegen_object_new(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		SerializationInfo__ctor_m6AC4F08744E2365305F33E8B028832139DAEBEA3(L_14, L_12, L_13, NULL);
		V_2 = L_14;
	}

IL_004c:
	{
		// if ( result != null )
		RuntimeObject* L_15 = V_0;
		if (!L_15)
		{
			goto IL_013b;
		}
	}
	{
		// string [] items = json.SplitJson ();
		String_t* L_16 = ___json1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17;
		L_17 = JsonExtensions_SplitJson_m8C9A649E94EDA7B6DF75A964F6283F81342E1FBC(L_16, NULL);
		V_4 = L_17;
		// for ( int i = 0; i < items.Length; i += 2 )
		V_5 = 0;
		goto IL_011d;
	}

IL_0062:
	{
		// string name = Read<string> ( items [ i ] );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_4;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		String_t* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		String_t* L_22;
		L_22 = GenericVirtualFuncInvoker1< String_t*, String_t* >::Invoke(JsonTextReader_Read_TisString_t_m872B53C604086D1D2F5935C9C183D2CFE47D625B_RuntimeMethod_var, __this, L_21);
		V_6 = L_22;
		// FieldInfo field = type.GetField ( name );
		Type_t* L_23 = ___type0;
		String_t* L_24 = V_6;
		NullCheck(L_23);
		FieldInfo_t* L_25;
		L_25 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_23, L_24, NULL);
		V_7 = L_25;
		// if ( field != null )
		FieldInfo_t* L_26 = V_7;
		bool L_27;
		L_27 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B(L_26, (FieldInfo_t*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00c2;
		}
	}
	{
		// if ( info != null )
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_28 = V_2;
		if (!L_28)
		{
			goto IL_00a4;
		}
	}
	{
		// info.AddValue ( name, Read ( field.FieldType, items [ i + 1 ] ) );
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_29 = V_2;
		String_t* L_30 = V_6;
		FieldInfo_t* L_31 = V_7;
		NullCheck(L_31);
		Type_t* L_32;
		L_32 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_31);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_4;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		String_t* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		RuntimeObject* L_37;
		L_37 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(13 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String) */, __this, L_32, L_36);
		NullCheck(L_29);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_29, L_30, L_37, NULL);
		goto IL_0117;
	}

IL_00a4:
	{
		// field.SetValue ( result, Read ( field.FieldType, items [ i + 1 ] ) );
		FieldInfo_t* L_38 = V_7;
		RuntimeObject* L_39 = V_0;
		FieldInfo_t* L_40 = V_7;
		NullCheck(L_40);
		Type_t* L_41;
		L_41 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_40);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = V_4;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		String_t* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		RuntimeObject* L_46;
		L_46 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(13 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String) */, __this, L_41, L_45);
		NullCheck(L_38);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_38, L_39, L_46, NULL);
		// continue;
		goto IL_0117;
	}

IL_00c2:
	{
		// PropertyInfo property = type.GetProperty ( name );
		Type_t* L_47 = ___type0;
		String_t* L_48 = V_6;
		NullCheck(L_47);
		PropertyInfo_t* L_49;
		L_49 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_47, L_48, NULL);
		V_8 = L_49;
		// if ( property != null )
		PropertyInfo_t* L_50 = V_8;
		bool L_51;
		L_51 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_50, (PropertyInfo_t*)NULL, NULL);
		if (!L_51)
		{
			goto IL_0117;
		}
	}
	{
		// if ( info != null )
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_52 = V_2;
		if (!L_52)
		{
			goto IL_00f7;
		}
	}
	{
		// info.AddValue ( name, Read ( property.PropertyType, items [ i + 1 ] ) );
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_53 = V_2;
		String_t* L_54 = V_6;
		PropertyInfo_t* L_55 = V_8;
		NullCheck(L_55);
		Type_t* L_56;
		L_56 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_55);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = V_4;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		String_t* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		RuntimeObject* L_61;
		L_61 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(13 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String) */, __this, L_56, L_60);
		NullCheck(L_53);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_53, L_54, L_61, NULL);
		goto IL_0117;
	}

IL_00f7:
	{
		// property.SetValue (
		//     result,
		//     Read ( property.PropertyType, items [ i + 1 ] ),
		//     BindingFlags.Default,
		//     null,
		//     null,
		//     null );
		PropertyInfo_t* L_62 = V_8;
		RuntimeObject* L_63 = V_0;
		PropertyInfo_t* L_64 = V_8;
		NullCheck(L_64);
		Type_t* L_65;
		L_65 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_64);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = V_4;
		int32_t L_67 = V_5;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		String_t* L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		RuntimeObject* L_70;
		L_70 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(13 /* System.Object BayatGames.Serialization.Formatters.Json.JsonTextReader::Read(System.Type,System.String) */, __this, L_65, L_69);
		NullCheck(L_62);
		VirtualActionInvoker6< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(22 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_62, L_63, L_70, 0, (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*)NULL);
	}

IL_0117:
	{
		// for ( int i = 0; i < items.Length; i += 2 )
		int32_t L_71 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_71, 2));
	}

IL_011d:
	{
		// for ( int i = 0; i < items.Length; i += 2 )
		int32_t L_72 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = V_4;
		NullCheck(L_73);
		if ((((int32_t)L_72) < ((int32_t)((int32_t)(((RuntimeArray*)L_73)->max_length)))))
		{
			goto IL_0062;
		}
	}
	{
		// if ( surrogate != null )
		RuntimeObject* L_74 = V_3;
		if (!L_74)
		{
			goto IL_013b;
		}
	}
	{
		// surrogate.SetObjectData ( result, info, m_Context, selector );
		RuntimeObject* L_75 = V_3;
		RuntimeObject* L_76 = V_0;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_77 = V_2;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_78 = ((JsonReader_t4F92E63A562603A7C3B5E2E78CEC3B6E26F61A17*)__this)->___m_Context_1;
		RuntimeObject* L_79 = V_1;
		NullCheck(L_75);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677, RuntimeObject* >::Invoke(1 /* System.Object System.Runtime.Serialization.ISerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector) */, ISerializationSurrogate_tDFCC54FF77F435377F6DBC1857F5F530D9E668C1_il2cpp_TypeInfo_var, L_75, L_76, L_77, L_78, L_79);
	}

IL_013b:
	{
		// return result;
		RuntimeObject* L_81 = V_0;
		return L_81;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonTextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextReader_Dispose_m01E9899BEA55FE845F2A2B3F34CA6AD57A8E3890 (JsonTextReader_tAD7DCA95D2047643650CF8F37DC628965409A474* __this, const RuntimeMethod* method) 
{
	{
		// if ( m_Reader != null )
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = __this->___m_Reader_2;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_Reader.Dispose ();
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_1 = __this->___m_Reader_2;
		NullCheck(L_1);
		TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IO.TextWriter BayatGames.Serialization.Formatters.Json.JsonTextWriter::get_writer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* JsonTextWriter_get_writer_mF2AF5D1BB7330FD3FB0DA36588284736306A43B1 (JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD* __this, const RuntimeMethod* method) 
{
	{
		// return m_Writer;
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = __this->___m_Writer_2;
		return L_0;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonTextWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextWriter__ctor_m5DD52A8F0E441ECE96D37CD3558ABA59D4D1E84B (JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) 
{
	{
		// public JsonTextWriter ( TextWriter writer ) : this ( writer, null, new StreamingContext ( StreamingContextStates.All ) )
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ___writer0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1;
		memset((&L_1), 0, sizeof(L_1));
		StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E((&L_1), ((int32_t)255), /*hidden argument*/NULL);
		JsonTextWriter__ctor_m29262AA3EC180CDEAC28EBE4C0CDBBC529D74373(__this, L_0, (RuntimeObject*)NULL, L_1, NULL);
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonTextWriter::.ctor(System.IO.TextWriter,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextWriter__ctor_m29262AA3EC180CDEAC28EBE4C0CDBBC529D74373 (JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, RuntimeObject* ___selector1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) 
{
	{
		// public JsonTextWriter ( TextWriter writer, ISurrogateSelector selector, StreamingContext context ) : base ( selector, context )
		RuntimeObject* L_0 = ___selector1;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context2;
		JsonWriter__ctor_mD1FA406C26994B6C2FE816374F92B2CA12F75A01(__this, L_0, L_1, NULL);
		// m_Writer = writer;
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_2 = ___writer0;
		__this->___m_Writer_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Writer_2), (void*)L_2);
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonTextWriter::Write(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextWriter_Write_mBD3360B7CE1AE584F8E56F481B8B64153DD75D34 (JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializable_tB66487CC1AF4C8D8F6DB8733D81C325264F6E92D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializationSurrogate_tDFCC54FF77F435377F6DBC1857F5F530D9E668C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t6B67F15F63BF2F3C9BF0458C0AA16F217BE189F0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_11 = NULL;
	{
		// if ( value == null )
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// m_Writer.Write ( "null" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = __this->___m_Writer_2;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		return;
	}

IL_0014:
	{
		// Type type = value.GetType ();
		RuntimeObject* L_2 = ___value0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		V_0 = L_3;
		// if ( type == typeof ( string ) || type.IsEnum )
		Type_t* L_4 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, L_8);
		if (!L_9)
		{
			goto IL_0047;
		}
	}

IL_0035:
	{
		// m_Writer.Write ( "\"{0}\"", value );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_10 = __this->___m_Writer_2;
		RuntimeObject* L_11 = ___value0;
		NullCheck(L_10);
		VirtualActionInvoker2< String_t*, RuntimeObject* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String,System.Object) */, L_10, _stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189, L_11);
		return;
	}

IL_0047:
	{
		// else if ( type == typeof ( short ) || type == typeof ( int ) || type == typeof ( long ) ||
		//           type == typeof ( ushort ) || type == typeof ( uint ) || type == typeof ( ulong ) ||
		//           type == typeof ( byte ) || type == typeof ( sbyte ) || type == typeof ( decimal ) ||
		//           type == typeof ( double ) || type == typeof ( float ) )
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_0116;
		}
	}
	{
		Type_t* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (L_19)
		{
			goto IL_0116;
		}
	}
	{
		Type_t* L_20 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		if (L_23)
		{
			goto IL_0116;
		}
	}
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_24, L_26, NULL);
		if (L_27)
		{
			goto IL_0116;
		}
	}
	{
		Type_t* L_28 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_0116;
		}
	}
	{
		Type_t* L_32 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		bool L_35;
		L_35 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_32, L_34, NULL);
		if (L_35)
		{
			goto IL_0116;
		}
	}
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		if (L_39)
		{
			goto IL_0116;
		}
	}
	{
		Type_t* L_40 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		bool L_43;
		L_43 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_40, L_42, NULL);
		if (L_43)
		{
			goto IL_0116;
		}
	}
	{
		Type_t* L_44 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		if (L_47)
		{
			goto IL_0116;
		}
	}
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		bool L_51;
		L_51 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_48, L_50, NULL);
		if (L_51)
		{
			goto IL_0116;
		}
	}
	{
		Type_t* L_52 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		bool L_55;
		L_55 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_52, L_54, NULL);
		if (!L_55)
		{
			goto IL_0132;
		}
	}

IL_0116:
	{
		// m_Writer.Write ( Convert.ChangeType ( value, typeof ( string ) ) );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_56 = __this->___m_Writer_2;
		RuntimeObject* L_57 = ___value0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_60;
		L_60 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_57, L_59, NULL);
		NullCheck(L_56);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Object) */, L_56, L_60);
		return;
	}

IL_0132:
	{
		// else if ( type.IsSerializable && !( value is ISerializable ) && !type.IsArray )
		Type_t* L_61 = V_0;
		NullCheck(L_61);
		bool L_62;
		L_62 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Type::get_IsSerializable() */, L_61);
		if (!L_62)
		{
			goto IL_0153;
		}
	}
	{
		RuntimeObject* L_63 = ___value0;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_63, ISerializable_tB66487CC1AF4C8D8F6DB8733D81C325264F6E92D_il2cpp_TypeInfo_var)))
		{
			goto IL_0153;
		}
	}
	{
		Type_t* L_64 = V_0;
		NullCheck(L_64);
		bool L_65;
		L_65 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_64, NULL);
		if (L_65)
		{
			goto IL_0153;
		}
	}
	{
		// WriteObject ( value, type );
		RuntimeObject* L_66 = ___value0;
		Type_t* L_67 = V_0;
		VirtualActionInvoker2< RuntimeObject*, Type_t* >::Invoke(12 /* System.Void BayatGames.Serialization.Formatters.Json.JsonTextWriter::WriteObject(System.Object,System.Type) */, __this, L_66, L_67);
		return;
	}

IL_0153:
	{
		// else if ( value is ISerializable )
		RuntimeObject* L_68 = ___value0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_68, ISerializable_tB66487CC1AF4C8D8F6DB8733D81C325264F6E92D_il2cpp_TypeInfo_var)))
		{
			goto IL_0181;
		}
	}
	{
		// SerializationInfo info = new SerializationInfo ( type, new FormatterConverter () );
		Type_t* L_69 = V_0;
		FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27* L_70 = (FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27*)il2cpp_codegen_object_new(FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		FormatterConverter__ctor_mC6145A6BF40990C62266BE7EF029A58F2768DC85(L_70, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_71 = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)il2cpp_codegen_object_new(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		SerializationInfo__ctor_m6AC4F08744E2365305F33E8B028832139DAEBEA3(L_71, L_69, L_70, NULL);
		V_1 = L_71;
		// ISerializable serializable = value as ISerializable;
		RuntimeObject* L_72 = ___value0;
		// serializable.GetObjectData ( info, m_Context );
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_73 = V_1;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_74 = ((JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9*)__this)->___m_Context_1;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_72, ISerializable_tB66487CC1AF4C8D8F6DB8733D81C325264F6E92D_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 >::Invoke(0 /* System.Void System.Runtime.Serialization.ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */, ISerializable_tB66487CC1AF4C8D8F6DB8733D81C325264F6E92D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_72, ISerializable_tB66487CC1AF4C8D8F6DB8733D81C325264F6E92D_il2cpp_TypeInfo_var)), L_73, L_74);
		// WriteSerializationInfo ( info );
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_75 = V_1;
		VirtualActionInvoker1< SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* >::Invoke(13 /* System.Void BayatGames.Serialization.Formatters.Json.JsonTextWriter::WriteSerializationInfo(System.Runtime.Serialization.SerializationInfo) */, __this, L_75);
		return;
	}

IL_0181:
	{
		// else if ( type.IsGenericType && type.GetGenericTypeDefinition () == typeof ( KeyValuePair<,> ) )
		Type_t* L_76 = V_0;
		NullCheck(L_76);
		bool L_77;
		L_77 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_76);
		if (!L_77)
		{
			goto IL_0243;
		}
	}
	{
		Type_t* L_78 = V_0;
		NullCheck(L_78);
		Type_t* L_79;
		L_79 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_78);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (KeyValuePair_2_t6B67F15F63BF2F3C9BF0458C0AA16F217BE189F0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		bool L_82;
		L_82 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_79, L_81, NULL);
		if (!L_82)
		{
			goto IL_0243;
		}
	}
	{
		// m_Writer.Write ( "{" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_83 = __this->___m_Writer_2;
		NullCheck(L_83);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_83, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		// Write ( "Key" );
		VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, __this, _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		// m_Writer.Write ( ":" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_84 = __this->___m_Writer_2;
		NullCheck(L_84);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_84, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		// Write ( type.GetProperty ( "Key" ).GetValue ( value, BindingFlags.Default, null, null, null ) );
		Type_t* L_85 = V_0;
		NullCheck(L_85);
		PropertyInfo_t* L_86;
		L_86 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_85, _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07, NULL);
		RuntimeObject* L_87 = ___value0;
		NullCheck(L_86);
		RuntimeObject* L_88;
		L_88 = VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(21 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_86, L_87, 0, (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*)NULL);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, __this, L_88);
		// m_Writer.Write ( "," );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_89 = __this->___m_Writer_2;
		NullCheck(L_89);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_89, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		// Write ( "Value" );
		VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, __this, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		// m_Writer.Write ( ":" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_90 = __this->___m_Writer_2;
		NullCheck(L_90);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_90, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		// Write ( type.GetProperty ( "Value" ).GetValue ( value, BindingFlags.Default, null, null, null ) );
		Type_t* L_91 = V_0;
		NullCheck(L_91);
		PropertyInfo_t* L_92;
		L_92 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_91, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, NULL);
		RuntimeObject* L_93 = ___value0;
		NullCheck(L_92);
		RuntimeObject* L_94;
		L_94 = VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(21 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_92, L_93, 0, (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*)NULL);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, __this, L_94);
		// m_Writer.Write ( "}" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_95 = __this->___m_Writer_2;
		NullCheck(L_95);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_95, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		return;
	}

IL_0243:
	{
		// else if ( value is IDictionary )
		RuntimeObject* L_96 = ___value0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_96, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)))
		{
			goto IL_02ed;
		}
	}
	{
		// IDictionary dictionary = value as IDictionary;
		RuntimeObject* L_97 = ___value0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_97, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		// bool isFirst = true;
		V_3 = (bool)1;
		// m_Writer.Write ( "{" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_98 = __this->___m_Writer_2;
		NullCheck(L_98);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_98, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		// foreach ( var key in dictionary.Keys )
		RuntimeObject* L_99 = V_2;
		NullCheck(L_99);
		RuntimeObject* L_100;
		L_100 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_99);
		NullCheck(L_100);
		RuntimeObject* L_101;
		L_101 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_100);
		V_4 = L_101;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02c7:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_102 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_102, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_103 = V_6;
					if (!L_103)
					{
						goto IL_02db;
					}
				}
				{
					RuntimeObject* L_104 = V_6;
					NullCheck(L_104);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_104);
				}

IL_02db:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02bc_1;
			}

IL_0276_1:
			{
				// foreach ( var key in dictionary.Keys )
				RuntimeObject* L_105 = V_4;
				NullCheck(L_105);
				RuntimeObject* L_106;
				L_106 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_105);
				V_5 = L_106;
				// if ( isFirst )
				bool L_107 = V_3;
				if (!L_107)
				{
					goto IL_0286_1;
				}
			}
			{
				// isFirst = false;
				V_3 = (bool)0;
				goto IL_0296_1;
			}

IL_0286_1:
			{
				// m_Writer.Write ( "," );
				TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_108 = __this->___m_Writer_2;
				NullCheck(L_108);
				VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_108, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
			}

IL_0296_1:
			{
				// Write ( key );
				RuntimeObject* L_109 = V_5;
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, __this, L_109);
				// m_Writer.Write ( ":" );
				TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_110 = __this->___m_Writer_2;
				NullCheck(L_110);
				VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_110, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
				// Write ( dictionary [ key ] );
				RuntimeObject* L_111 = V_2;
				RuntimeObject* L_112 = V_5;
				NullCheck(L_111);
				RuntimeObject* L_113;
				L_113 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_111, L_112);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, __this, L_113);
			}

IL_02bc_1:
			{
				// foreach ( var key in dictionary.Keys )
				RuntimeObject* L_114 = V_4;
				NullCheck(L_114);
				bool L_115;
				L_115 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_114);
				if (L_115)
				{
					goto IL_0276_1;
				}
			}
			{
				goto IL_02dc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02dc:
	{
		// m_Writer.Write ( "}" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_116 = __this->___m_Writer_2;
		NullCheck(L_116);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_116, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		return;
	}

IL_02ed:
	{
		// else if ( value is IEnumerable )
		RuntimeObject* L_117 = ___value0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_117, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)))
		{
			goto IL_0357;
		}
	}
	{
		// IEnumerable enumerable = value as IEnumerable;
		RuntimeObject* L_118 = ___value0;
		// IEnumerator e = enumerable.GetEnumerator ();
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_118, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_119;
		L_119 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_118, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_7 = L_119;
		// bool isFirst = true;
		V_8 = (bool)1;
		// m_Writer.Write ( "[" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_120 = __this->___m_Writer_2;
		NullCheck(L_120);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_120, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		goto IL_033d;
	}

IL_0317:
	{
		// if ( isFirst )
		bool L_121 = V_8;
		if (!L_121)
		{
			goto IL_0320;
		}
	}
	{
		// isFirst = false;
		V_8 = (bool)0;
		goto IL_0330;
	}

IL_0320:
	{
		// m_Writer.Write ( "," );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_122 = __this->___m_Writer_2;
		NullCheck(L_122);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_122, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
	}

IL_0330:
	{
		// Write ( e.Current );
		RuntimeObject* L_123 = V_7;
		NullCheck(L_123);
		RuntimeObject* L_124;
		L_124 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_123);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, __this, L_124);
	}

IL_033d:
	{
		// while ( e.MoveNext () )
		RuntimeObject* L_125 = V_7;
		NullCheck(L_125);
		bool L_126;
		L_126 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_125);
		if (L_126)
		{
			goto IL_0317;
		}
	}
	{
		// m_Writer.Write ( "]" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_127 = __this->___m_Writer_2;
		NullCheck(L_127);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_127, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		return;
	}

IL_0357:
	{
		// if ( m_SurrogateSelector != null )
		RuntimeObject* L_128 = ((JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9*)__this)->___m_SurrogateSelector_0;
		if (!L_128)
		{
			goto IL_039f;
		}
	}
	{
		// ISerializationSurrogate surrogate = m_SurrogateSelector.GetSurrogate ( type, m_Context, out selector );
		RuntimeObject* L_129 = ((JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9*)__this)->___m_SurrogateSelector_0;
		Type_t* L_130 = V_0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_131 = ((JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9*)__this)->___m_Context_1;
		NullCheck(L_129);
		RuntimeObject* L_132;
		L_132 = InterfaceFuncInvoker3< RuntimeObject*, Type_t*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677, RuntimeObject** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01_il2cpp_TypeInfo_var, L_129, L_130, L_131, (&V_9));
		V_10 = L_132;
		// if ( surrogate != null )
		RuntimeObject* L_133 = V_10;
		if (!L_133)
		{
			goto IL_03a7;
		}
	}
	{
		// SerializationInfo info = new SerializationInfo ( type, new FormatterConverter () );
		Type_t* L_134 = V_0;
		FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27* L_135 = (FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27*)il2cpp_codegen_object_new(FormatterConverter_t783AC4B7B0D039808A3098E75FEAF7C66A183C27_il2cpp_TypeInfo_var);
		NullCheck(L_135);
		FormatterConverter__ctor_mC6145A6BF40990C62266BE7EF029A58F2768DC85(L_135, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_136 = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)il2cpp_codegen_object_new(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37_il2cpp_TypeInfo_var);
		NullCheck(L_136);
		SerializationInfo__ctor_m6AC4F08744E2365305F33E8B028832139DAEBEA3(L_136, L_134, L_135, NULL);
		V_11 = L_136;
		// surrogate.GetObjectData ( value, info, m_Context );
		RuntimeObject* L_137 = V_10;
		RuntimeObject* L_138 = ___value0;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_139 = V_11;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_140 = ((JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9*)__this)->___m_Context_1;
		NullCheck(L_137);
		InterfaceActionInvoker3< RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 >::Invoke(0 /* System.Void System.Runtime.Serialization.ISerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */, ISerializationSurrogate_tDFCC54FF77F435377F6DBC1857F5F530D9E668C1_il2cpp_TypeInfo_var, L_137, L_138, L_139, L_140);
		// WriteSerializationInfo ( info );
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_141 = V_11;
		VirtualActionInvoker1< SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* >::Invoke(13 /* System.Void BayatGames.Serialization.Formatters.Json.JsonTextWriter::WriteSerializationInfo(System.Runtime.Serialization.SerializationInfo) */, __this, L_141);
		return;
	}

IL_039f:
	{
		// WriteObject ( value, type );
		RuntimeObject* L_142 = ___value0;
		Type_t* L_143 = V_0;
		VirtualActionInvoker2< RuntimeObject*, Type_t* >::Invoke(12 /* System.Void BayatGames.Serialization.Formatters.Json.JsonTextWriter::WriteObject(System.Object,System.Type) */, __this, L_142, L_143);
	}

IL_03a7:
	{
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonTextWriter::WriteObject(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextWriter_WriteObject_m1ECD92E1307A627F9C098B1D33E9CE8E3F3DD0E2 (JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD* __this, RuntimeObject* ___value0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// FieldInfo [] fields = type.GetFields ();
		Type_t* L_0 = ___type1;
		NullCheck(L_0);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_1;
		L_1 = Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F(L_0, NULL);
		V_0 = L_1;
		// PropertyInfo [] properties = type.GetProperties ();
		Type_t* L_2 = ___type1;
		NullCheck(L_2);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_3;
		L_3 = Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6(L_2, NULL);
		V_1 = L_3;
		// bool isFirst = true;
		V_2 = (bool)1;
		// m_Writer.Write ( "{" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_4 = __this->___m_Writer_2;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		// for ( int i = 0; i < fields.Length; i++ )
		V_3 = 0;
		goto IL_0094;
	}

IL_0024:
	{
		// if ( fields [ i ].IsPublic && !fields [ i ].IsStatic && !fields [ i ].IsLiteral && !fields [ i ].IsNotSerialized )
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_5 = V_0;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FieldInfo_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		bool L_9;
		L_9 = FieldInfo_get_IsPublic_m73C84BEEAE6C993FACC6199B81DBF2B80D3810E5(L_8, NULL);
		if (!L_9)
		{
			goto IL_0090;
		}
	}
	{
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_10 = V_0;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		FieldInfo_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		bool L_14;
		L_14 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_13, NULL);
		if (L_14)
		{
			goto IL_0090;
		}
	}
	{
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_15 = V_0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		FieldInfo_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		bool L_19;
		L_19 = FieldInfo_get_IsLiteral_mBE7DDC6A709439F775873859C82BAAD1EEFF791A(L_18, NULL);
		if (L_19)
		{
			goto IL_0090;
		}
	}
	{
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_20 = V_0;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		FieldInfo_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		bool L_24;
		L_24 = FieldInfo_get_IsNotSerialized_m45A8D6AAF795FCF6E8F51802E956FD5FF37469E1(L_23, NULL);
		if (L_24)
		{
			goto IL_0090;
		}
	}
	{
		// if ( isFirst )
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_0053;
		}
	}
	{
		// isFirst = false;
		V_2 = (bool)0;
		goto IL_0063;
	}

IL_0053:
	{
		// m_Writer.Write ( "," );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_26 = __this->___m_Writer_2;
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_26, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
	}

IL_0063:
	{
		// Write ( fields [ i ].Name );
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_27 = V_0;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		FieldInfo_t* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_30);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, __this, L_31);
		// m_Writer.Write ( ":" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_32 = __this->___m_Writer_2;
		NullCheck(L_32);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_32, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		// Write ( fields [ i ].GetValue ( value ) );
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_33 = V_0;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		FieldInfo_t* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		RuntimeObject* L_37 = ___value0;
		NullCheck(L_36);
		RuntimeObject* L_38;
		L_38 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(22 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_36, L_37);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, __this, L_38);
	}

IL_0090:
	{
		// for ( int i = 0; i < fields.Length; i++ )
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0094:
	{
		// for ( int i = 0; i < fields.Length; i++ )
		int32_t L_40 = V_3;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_41 = V_0;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		// for ( int i = 0; i < properties.Length; i++ )
		V_4 = 0;
		goto IL_0105;
	}

IL_009f:
	{
		// if ( properties [ i ].CanRead && properties [ i ].CanWrite )
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_42 = V_1;
		int32_t L_43 = V_4;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		PropertyInfo_t* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		bool L_46;
		L_46 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_45);
		if (!L_46)
		{
			goto IL_00ff;
		}
	}
	{
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_47 = V_1;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		PropertyInfo_t* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_50);
		bool L_51;
		L_51 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_50);
		if (!L_51)
		{
			goto IL_00ff;
		}
	}
	{
		// if ( isFirst )
		bool L_52 = V_2;
		if (!L_52)
		{
			goto IL_00bc;
		}
	}
	{
		// isFirst = false;
		V_2 = (bool)0;
		goto IL_00cc;
	}

IL_00bc:
	{
		// m_Writer.Write ( "," );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_53 = __this->___m_Writer_2;
		NullCheck(L_53);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_53, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
	}

IL_00cc:
	{
		// Write ( properties [ i ].Name );
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		PropertyInfo_t* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_57);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, __this, L_58);
		// m_Writer.Write ( ":" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_59 = __this->___m_Writer_2;
		NullCheck(L_59);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_59, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		// Write ( properties [ i ].GetValue ( value, BindingFlags.Default, null, null, null ) );
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_60 = V_1;
		int32_t L_61 = V_4;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		PropertyInfo_t* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		RuntimeObject* L_64 = ___value0;
		NullCheck(L_63);
		RuntimeObject* L_65;
		L_65 = VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(21 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_63, L_64, 0, (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*)NULL);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, __this, L_65);
	}

IL_00ff:
	{
		// for ( int i = 0; i < properties.Length; i++ )
		int32_t L_66 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_0105:
	{
		// for ( int i = 0; i < properties.Length; i++ )
		int32_t L_67 = V_4;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_68 = V_1;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_009f;
		}
	}
	{
		// m_Writer.Write ( "}" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_69 = __this->___m_Writer_2;
		NullCheck(L_69);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_69, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonTextWriter::WriteSerializationInfo(System.Runtime.Serialization.SerializationInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextWriter_WriteSerializationInfo_m43D54D68FC3AE74AA13C4DF9EBF90D2E65C8C657 (JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* V_0 = NULL;
	bool V_1 = false;
	{
		// var e = info.GetEnumerator ();
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		NullCheck(L_0);
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_1;
		L_1 = SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6(L_0, NULL);
		V_0 = L_1;
		// bool isFirst = true;
		V_1 = (bool)1;
		// m_Writer.Write ( "{" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_2 = __this->___m_Writer_2;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_2, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		goto IL_005a;
	}

IL_001b:
	{
		// if ( isFirst )
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// isFirst = false;
		V_1 = (bool)0;
		goto IL_0032;
	}

IL_0022:
	{
		// m_Writer.Write ( "," );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_4 = __this->___m_Writer_2;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
	}

IL_0032:
	{
		// Write ( e.Name );
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = SerializationInfoEnumerator_get_Name_m58B6D682B6C829258730C1E952E9099ACDDAE734(L_5, NULL);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, __this, L_6);
		// m_Writer.Write ( ":" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_7 = __this->___m_Writer_2;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		// Write ( e.Value );
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = SerializationInfoEnumerator_get_Value_mBB22843FD639AD42D9A819A9745C21191C3B1DD9(L_8, NULL);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::Write(System.Object) */, __this, L_9);
	}

IL_005a:
	{
		// while ( e.MoveNext () )
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6(L_10, NULL);
		if (L_11)
		{
			goto IL_001b;
		}
	}
	{
		// m_Writer.Write ( "}" );
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_12 = __this->___m_Writer_2;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonTextWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextWriter_Dispose_m08B7009DF97E9C4CDDD284C4F7C3D020CE6BF6B4 (JsonTextWriter_tA0D35A5FECAB02829DD5540B948ED795FBCD86FD* __this, const RuntimeMethod* method) 
{
	{
		// if ( m_Writer != null )
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = __this->___m_Writer_2;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_Writer.Dispose ();
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = __this->___m_Writer_2;
		NullCheck(L_1);
		TextWriter_Dispose_m5B2CA4D250335AB11031AFC7F202AA5B7A70C4D7(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.Serialization.ISurrogateSelector BayatGames.Serialization.Formatters.Json.JsonWriter::get_surrogateSelector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonWriter_get_surrogateSelector_mDC52879127D95B743318789DBA346B2FA1CC67FD (JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9* __this, const RuntimeMethod* method) 
{
	{
		// return m_SurrogateSelector;
		RuntimeObject* L_0 = __this->___m_SurrogateSelector_0;
		return L_0;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::set_surrogateSelector(System.Runtime.Serialization.ISurrogateSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_surrogateSelector_m177A60F9F817D846F8D566343950620C0CD74CB0 (JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// m_SurrogateSelector = value;
		RuntimeObject* L_0 = ___value0;
		__this->___m_SurrogateSelector_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SurrogateSelector_0), (void*)L_0);
		// }
		return;
	}
}
// System.Runtime.Serialization.StreamingContext BayatGames.Serialization.Formatters.Json.JsonWriter::get_context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 JsonWriter_get_context_m9D0BBEAFB2539E339B871C17045A9A883D24BD11 (JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9* __this, const RuntimeMethod* method) 
{
	{
		// return m_Context;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_0 = __this->___m_Context_1;
		return L_0;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::set_context(System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_context_mB9148F08FA6ED2A9CDA1A3CD6E4CD93165003581 (JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value0, const RuntimeMethod* method) 
{
	{
		// m_Context = value;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_0 = ___value0;
		__this->___m_Context_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Context_1))->___m_additionalContext_0), (void*)NULL);
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.JsonWriter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_mD1FA406C26994B6C2FE816374F92B2CA12F75A01 (JsonWriter_tDB822F5A7977B11E69D4E16CCAE40AF7E9B3AED9* __this, RuntimeObject* ___selector0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		// public JsonWriter ( ISurrogateSelector selector, StreamingContext context )
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_SurrogateSelector = selector;
		RuntimeObject* L_0 = ___selector0;
		__this->___m_SurrogateSelector_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SurrogateSelector_0), (void*)L_0);
		// m_Context = context;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		__this->___m_Context_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Context_1))->___m_additionalContext_0), (void*)NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BayatGames.Serialization.Formatters.Json.Examples.Example01::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Example01_Serialize_m38618077A19BDB7E6BA7802611A49BEB7671313F (Example01_tF43994A55846837C8C71759579DA90606A3E4486* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Person_t319F249D8676BD73834E9588CDFD263F86B45526_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Person_t319F249D8676BD73834E9588CDFD263F86B45526 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Person person = new Person ();
		il2cpp_codegen_initobj((&V_0), sizeof(Person_t319F249D8676BD73834E9588CDFD263F86B45526));
		// person.firstName = m_FirstNameInput.text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___m_FirstNameInput_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		(&V_0)->___firstName_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___firstName_0), (void*)L_1);
		// person.lastName = m_LastNameInput.text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___m_LastNameInput_5;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_2, NULL);
		(&V_0)->___lastName_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___lastName_1), (void*)L_3);
		// m_JsonInput.text = JsonFormatter.SerializeObject ( person );
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = __this->___m_JsonInput_6;
		Person_t319F249D8676BD73834E9588CDFD263F86B45526 L_5 = V_0;
		Person_t319F249D8676BD73834E9588CDFD263F86B45526 L_6 = L_5;
		RuntimeObject* L_7 = Box(Person_t319F249D8676BD73834E9588CDFD263F86B45526_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = JsonFormatter_SerializeObject_m956FF5AE113893CCF39F8E2B7B32F1366B6EAC41(L_7, NULL);
		NullCheck(L_4);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_4, L_8, NULL);
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.Examples.Example01::Deserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Example01_Deserialize_m44605A1D4A51E2ED036CFB33E7DDAEA7731D7EAA (Example01_tF43994A55846837C8C71759579DA90606A3E4486* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Person_t319F249D8676BD73834E9588CDFD263F86B45526_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Person_t319F249D8676BD73834E9588CDFD263F86B45526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Person_t319F249D8676BD73834E9588CDFD263F86B45526 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Person person = ( Person )JsonFormatter.DeserializeObject ( m_JsonInput.text, typeof ( Person ) );
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___m_JsonInput_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Person_t319F249D8676BD73834E9588CDFD263F86B45526_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = JsonFormatter_DeserializeObject_mA507740B921D75E80C24401C8175B7B164B1084D(L_1, L_3, NULL);
		V_0 = ((*(Person_t319F249D8676BD73834E9588CDFD263F86B45526*)((Person_t319F249D8676BD73834E9588CDFD263F86B45526*)(Person_t319F249D8676BD73834E9588CDFD263F86B45526*)UnBox(L_4, Person_t319F249D8676BD73834E9588CDFD263F86B45526_il2cpp_TypeInfo_var))));
		// m_FirstNameInput.text = person.firstName;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___m_FirstNameInput_4;
		Person_t319F249D8676BD73834E9588CDFD263F86B45526 L_6 = V_0;
		String_t* L_7 = L_6.___firstName_0;
		NullCheck(L_5);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_5, L_7, NULL);
		// m_LastNameInput.text = person.lastName;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_8 = __this->___m_LastNameInput_5;
		Person_t319F249D8676BD73834E9588CDFD263F86B45526 L_9 = V_0;
		String_t* L_10 = L_9.___lastName_1;
		NullCheck(L_8);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.Examples.Example01::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Example01__ctor_m98214C7DEBE005BE5EAC5045283551D57871E4E7 (Example01_tF43994A55846837C8C71759579DA90606A3E4486* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: BayatGames.Serialization.Formatters.Json.Examples.Example01/Person
IL2CPP_EXTERN_C void Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshal_pinvoke(const Person_t319F249D8676BD73834E9588CDFD263F86B45526& unmarshaled, Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshaled_pinvoke& marshaled)
{
	marshaled.___firstName_0 = il2cpp_codegen_marshal_string(unmarshaled.___firstName_0);
	marshaled.___lastName_1 = il2cpp_codegen_marshal_string(unmarshaled.___lastName_1);
}
IL2CPP_EXTERN_C void Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshal_pinvoke_back(const Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshaled_pinvoke& marshaled, Person_t319F249D8676BD73834E9588CDFD263F86B45526& unmarshaled)
{
	unmarshaled.___firstName_0 = il2cpp_codegen_marshal_string_result(marshaled.___firstName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___firstName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___firstName_0));
	unmarshaled.___lastName_1 = il2cpp_codegen_marshal_string_result(marshaled.___lastName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___lastName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___lastName_1));
}
// Conversion method for clean up from marshalling of: BayatGames.Serialization.Formatters.Json.Examples.Example01/Person
IL2CPP_EXTERN_C void Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshal_pinvoke_cleanup(Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___firstName_0);
	marshaled.___firstName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___lastName_1);
	marshaled.___lastName_1 = NULL;
}
// Conversion methods for marshalling of: BayatGames.Serialization.Formatters.Json.Examples.Example01/Person
IL2CPP_EXTERN_C void Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshal_com(const Person_t319F249D8676BD73834E9588CDFD263F86B45526& unmarshaled, Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshaled_com& marshaled)
{
	marshaled.___firstName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___firstName_0);
	marshaled.___lastName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___lastName_1);
}
IL2CPP_EXTERN_C void Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshal_com_back(const Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshaled_com& marshaled, Person_t319F249D8676BD73834E9588CDFD263F86B45526& unmarshaled)
{
	unmarshaled.___firstName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___firstName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___firstName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___firstName_0));
	unmarshaled.___lastName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___lastName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___lastName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___lastName_1));
}
// Conversion method for clean up from marshalling of: BayatGames.Serialization.Formatters.Json.Examples.Example01/Person
IL2CPP_EXTERN_C void Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshal_com_cleanup(Person_t319F249D8676BD73834E9588CDFD263F86B45526_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___firstName_0);
	marshaled.___firstName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___lastName_1);
	marshaled.___lastName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BayatGames.Serialization.Formatters.Json.Examples.Example02::Deserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Example02_Deserialize_m6178153374C3681AC4232D302D2DB3E5785FC4DE (Example02_tCCAC9901C56A53B9C44F5D615DBBEE338701BF4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Example02_Deserialize_m6178153374C3681AC4232D302D2DB3E5785FC4DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log ( JsonFormatter.DeserializeObject ( m_JsonInput.text, Type.GetType ( m_TypeInput.text ) ) );
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___m_JsonInput_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___m_TypeInput_4;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = il2cpp_codegen_get_type(L_3, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, Example02_Deserialize_m6178153374C3681AC4232D302D2DB3E5785FC4DE_RuntimeMethod_var);
		RuntimeObject* L_5;
		L_5 = JsonFormatter_DeserializeObject_mA507740B921D75E80C24401C8175B7B164B1084D(L_1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// }
		return;
	}
}
// System.Void BayatGames.Serialization.Formatters.Json.Examples.Example02::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Example02__ctor_m672E465BE52C3EE0B78400B335C01796819F4AFF (Example02_tCCAC9901C56A53B9C44F5D615DBBEE338701BF4E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 velocity { get { return m_Velocity; } set { m_Velocity = value; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___m_Velocity_25 = L_0;
		// public Vector2 velocity { get { return m_Velocity; } set { m_Velocity = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_movementType_m2A900C10E6C005FD6866EFF1DA2DF78AA957534A_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public MovementType movementType { get { return m_MovementType; } set { m_MovementType = value; } }
		int32_t L_0 = ___value0;
		__this->___m_MovementType_7 = L_0;
		// public MovementType movementType { get { return m_MovementType; } set { m_MovementType = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Scale_mEACE26803ED193717CE821462D85F1CA0573C051_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale0, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___scale0;
		float L_2 = L_1.___x_0;
		__this->___x_0 = ((float)il2cpp_codegen_multiply(L_0, L_2));
		float L_3 = __this->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___scale0;
		float L_5 = L_4.___y_1;
		__this->___y_1 = ((float)il2cpp_codegen_multiply(L_3, L_5));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnDeletionConfirmed_Invoke_mA8275C4700A288B8CD107292580B81F20873F639_inline (OnDeletionConfirmed_t9DFA47491CE6D02CD65310F6C631A75A7DDFE199* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileBrowserItem_set_IsDirectory_m9F7592FBAF14295A01ED6D87656F7A648229FA2B_inline (FileBrowserItem_t4B972F1E011AED692D7DEE27B1066C248B480E98* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDirectory { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsDirectoryU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FileBrowser_get_AllowMultiSelection_m5CD514F83C2FB8D84F0BD6F780EAF90FAB4F0B79_inline (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_allowMultiSelection; }
		bool L_0 = __this->___m_allowMultiSelection_101;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool eligibleForClick { get; set; }
		bool L_0 = ___value0;
		__this->___U3CeligibleForClickU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FileBrowser_get_MultiSelectionToggleSelectionMode_mE441032C7477B6CDCB091003C3D00C75502B55C3_inline (FileBrowser_t200E44FBF6C477AD7BC8A4EE92C102DA168F33FC* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_multiSelectionToggleSelectionMode; }
		bool L_0 = __this->___m_multiSelectionToggleSelectionMode_102;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpressPositionU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventSystem_get_alreadySelecting_m3DB9F620A5E2976EBF1362F95C05C12031BACCC4_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_SelectionGuard; }
		bool L_0 = __this->___m_SelectionGuard_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CurrentSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentSelected_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnRenameCompleted_Invoke_mFE17B4E561D40D862A83C15CAD8923CB74966120_inline (OnRenameCompleted_t8C30D390846D7DBB2488A634397FC35286947AA4* __this, String_t* ___filename0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___filename0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnItemClickedHandler_Invoke_mF966C8FC22279A5883E14DCA7F42AAE056A3B41D_inline (OnItemClickedHandler_t958DC0A645AE1507E2E13FEF35EA297416FE532A* __this, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* ___item0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ScrollRect_get_onValueChanged_mA6AF3832A97E82D31BB8C20BCD6E87A300E56C05_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public ScrollRectEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* L_0 = __this->___m_OnValueChanged_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ListItem_SetAdapter_m1803AD912C0AF6D5DFF1174084D94CF168BF11E0_inline (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* __this, RuntimeObject* ___listView0, const RuntimeMethod* method) 
{
	{
		// this.adapter = listView;
		RuntimeObject* L_0 = ___listView0;
		__this->___adapter_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adapter_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ListItem_set_Position_m418B3AB7AE5529DD304CA048D3C3012849DFEAC3_inline (ListItem_t3756980E97368EBB634AE1C4D84067F932E23FD6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Position { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CPositionU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}

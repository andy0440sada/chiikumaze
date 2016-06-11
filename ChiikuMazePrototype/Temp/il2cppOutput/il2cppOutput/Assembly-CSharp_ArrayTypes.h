#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Token
struct Token_t80988633;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_Token80988633.h"

#pragma once
// Token[]
struct TokenU5BU5D_t13827748  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Token_t80988633 * m_Items[1];

public:
	inline Token_t80988633 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Token_t80988633 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Token_t80988633 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

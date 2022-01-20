////////////////////////////////////////////////////////////////////////////////
//! \file       TwinSafeGroup1IoData.h
//! \brief      Header file containing struct definitions for I/O alias devices
//! \ingroup    TwinSafeGroup1
//! \authors    TwinCAT 3 Safety Editor
//! \version    V1.2
//! \date       2022-01-17
//! \attention  This file was auto-generated for build. Do NOT edit manually!
////////////////////////////////////////////////////////////////////////////////
#pragma once

#include "SafeModuleHelper.h"

NAMESPACE(TwinSafeGroup1)
{

	#pragma region StandardInputAliasDevices
	//! Struct providing input data of the corresponding standard alias devices
	struct StandardInputs
	{
		//! ..\Alias Devices\ErrorAcknowledgement.sds
		BOOL ErrorAcknowledgement;
		//! ..\Alias Devices\Run.sds
		BOOL Run;

	};
	#pragma endregion


	#pragma region StandardOutputAliasDevices
	//! Struct storing output data for the corresponding standard alias devices
	struct StandardOutputs
	{

	};
	#pragma endregion


	#pragma region SafetyInputAliasDevices
	//! Struct providing input data of the corresponding safety alias devices
	struct SafetyInputs
	{
		//! ..\Alias Devices\Klemme 4 (EL1904) - Module 1 (FSOES).sds
		//ConnId:3
		struct
		{
			safeBOOL InputChannel1;
			safeBOOL InputChannel2;
			safeBOOL InputChannel3;
			safeBOOL InputChannel4;
		} Klemme_4_EL1904__Module_1_FSOES;

	};
	#pragma endregion


	#pragma region SafetyOutputAliasDevices
	//! Struct storing output data for the corresponding safety alias devices
	struct SafetyOutputs
	{
		//! ..\Alias Devices\Klemme 5 (EL2904) - Module 1 (FSOES).sds
		//ConnId:4
		struct
		{
			safeBOOL OutputChannel1;
			safeBOOL OutputChannel2;
			safeBOOL OutputChannel3;
			safeBOOL OutputChannel4;
		} Klemme_5_EL2904__Module_1_FSOES;

	};
	#pragma endregion


	#pragma region TwinSafeGroupExchangeData
	//! Struct storing the TwinSAFE group exchange data
	struct TSGData
	{

	};
	#pragma endregion


	//! Safety project FCS symbol
	STATIC UINT32 PROJECT_CRC32_D2561609 = 0xD2561609;
	STATIC UINT32 &PROJECT_CRC32 = PROJECT_CRC32_D2561609;
	
};


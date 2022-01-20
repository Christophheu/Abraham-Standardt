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
		//! ..\Alias Devices\EP1908, 8 digital inputs_1.sds
		//ConnId:3
		struct
		{
			safeBOOL InputChannel1;
			safeBOOL InputChannel2;
			safeBOOL InputChannel3;
			safeBOOL InputChannel4;
			safeBOOL InputChannel5;
			safeBOOL InputChannel6;
			safeBOOL InputChannel7;
			safeBOOL InputChannel8;
		} EP1908_8_digital_inputs_1;

	};
	#pragma endregion


	#pragma region SafetyOutputAliasDevices
	//! Struct storing output data for the corresponding safety alias devices
	struct SafetyOutputs
	{
		//! ..\Alias Devices\EP1908, 8 digital inputs_1.sds
		//ConnId:3
		BOOL EP1908_8_digital_inputs_1;

	};
	#pragma endregion


	#pragma region TwinSafeGroupExchangeData
	//! Struct storing the TwinSAFE group exchange data
	struct TSGData
	{

	};
	#pragma endregion


	//! Safety project FCS symbol
	STATIC UINT32 PROJECT_CRC32_00F36601 = 0x00F36601;
	STATIC UINT32 &PROJECT_CRC32 = PROJECT_CRC32_00F36601;
	
};


//========= Copyright � 1996-2005, Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
//=============================================================================//

#ifndef NPC_ROLLERMINE_H
#define NPC_ROLLERMINE_H
#ifdef _WIN32
#pragma once
#endif

//------------------------------------
// Spawnflags
//------------------------------------
#define SF_ROLLERMINE_FRIENDLY		(1 << 16)

bool NPC_Rollermine_IsRollermine( CBaseEntity *pEntity );
CBaseEntity *NPC_Rollermine_DropFromPoint( const Vector &originStart, CBaseEntity *pOwner );

#endif // NPC_ROLLERMINE_H
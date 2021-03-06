/****************************************************************************
 *
 * Arathi Basin Battleground
 * Copyright (c) 2007 Antrix Team
 *
 * This file may be distributed under the terms of the Q Public License
 * as defined by Trolltech ASA of Norway and appearing in the file
 * COPYING included in the packaging of this file.
 *
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

class ArathiBasin : public Battleground
{
public:
	ArathiBasin();
	~ArathiBasin();

	bool almostend[2];

	/* Scorekeeping */
	uint32 AllianceRes,HordeRes;

	uint32 m_BGTime;
	
	GameObject *gcbanner[5];

	GameObject *gbuffs[5];

	std::set<GameObject*> m_Gates;

	void HandleBanner(Player *p_caster,GameObject *go,uint32 spellid);
	void HandleBattlegroundAreaTrigger(Player *plr, uint32 TriggerID);
	void HandleBattlegroundEvent(Object *src, Object *dst, uint16 EventID, uint32 params1 = 0, uint32 params2 = 0);
	void SetupBattleground();
	void SpawnBattleground();
	void SpawnBuff(uint32 typeentry,uint32 bannerslot);
	void EventResourcesCapture(uint64 srcguid,uint32 bannerslot);
	void setBaseCapturedValue(uint32 bannerslot,uint32 team,uint32 value);
	void setBaseCapturingValue(uint32 bannerslot,uint32 team,uint32 value);
	void EventUpdateResourcesAlliance();
	void EventUpdateResourcesHorde();
	
	void Remove();

	void Start();
	void EventUpdate(uint32 diff);
};

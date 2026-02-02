//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCTDatabase;

@interface KFContactMgr
{
    WCTDatabase *_db;
    NSMutableDictionary *_dictBrandUsrName2Cacher;
    NSMutableDictionary *_dictOpenId2ReqInfo;
}

- (void).cxx_destruct;
- (id)kfContactListFromWorkinfoList:(id)arg1 brandUsrName:(id)arg2;
- (void)updateKFContactsToLocal:(id)arg1 brandUsrName:(id)arg2;
- (void)handleGetKFContactInfo:(id)arg1;
- (void)handleGetKFContactBindList:(id)arg1;
- (void)handleGetKFContactDefaultList:(id)arg1;
- (id)contactCacherForBrandUsr:(id)arg1;
- (id)pathOfKFDB;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)getKFContactInfoFromSvr:(id)arg1 brandUsrName:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)modifyHeadImgUpdateFlag:(id)arg1 isNeedUpdate:(_Bool)arg2;
- (void)deleteAllKfContacts:(id)arg1;
- (id)getLocalKFContactWithOpenId:(id)arg1;
- (void)updateBindKFContactToLocal:(id)arg1 bindKFContact:(id)arg2;
- (id)getBindKFContactFromLocal:(id)arg1;
- (id)getAndUpdateKFContactIfNeed:(id)arg1 kfType:(unsigned int)arg2 brandUsrName:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


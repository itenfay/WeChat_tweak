//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, NewTipsNetworkLogic, NewTipsUtils;

@interface MMNewTipsMgr
{
    NewTipsUtils *_tipsUtils;
    NewTipsNetworkLogic *_networkLogic;
    NSMutableDictionary *_dicTipsInfo;
    NSMutableDictionary *_dicPathInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicPathInfo; // @synthesize dicPathInfo=_dicPathInfo;
@property(retain, nonatomic) NSMutableDictionary *dicTipsInfo; // @synthesize dicTipsInfo=_dicTipsInfo;
@property(retain, nonatomic) NewTipsNetworkLogic *networkLogic; // @synthesize networkLogic=_networkLogic;
@property(retain, nonatomic) NewTipsUtils *tipsUtils; // @synthesize tipsUtils=_tipsUtils;
- (void)onExptItemListChange;
- (void)onServerRejectShowTipsId:(unsigned int)arg1 UID:(id)arg2;
- (void)updateAndNotifyPathKeysWithTipsInfo:(id)arg1;
- (void)updateNewTipsInfo:(id)arg1;
- (void)disposePreviousTipsWithTipsInfo:(id)arg1;
- (void)onGetNewTipsXml:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)requestLocalTipsWithID:(unsigned int)arg1;
- (void)checkLocalConfigForPath;
- (void)updatePathsInfoWithTipsInfo:(id)arg1;
- (void)onServiceInit;
- (id)getNewTipsInfoWithId:(unsigned int)arg1;
- (void)disposeRedPointWithKey:(id)arg1;
- (id)getShowInfoWitPathKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


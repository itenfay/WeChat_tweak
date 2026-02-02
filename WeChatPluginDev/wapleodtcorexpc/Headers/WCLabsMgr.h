//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, WCLabsCommonInfo;

@interface WCLabsMgr
{
    NSMutableDictionary *_labsAppItemDic;
    NSMutableArray *_onlineLabsItems;
    NSMutableArray *_offlineLabItems;
    WCLabsCommonInfo *_labsCommonInfo;
    NSMutableArray *_clearedRedDotLabsAppidAryInLab;
    NSMutableArray *_clearedRedDotLabsAppidAryInAppEntrance;
    NSMutableArray *_redDotFromClientIdList;
}

- (void).cxx_destruct;
- (void)updateRedpointForId:(id)arg1;
- (void)updateWCLabByXExpt:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(id)arg4;
- (void)onGetABTestExpLabsItems:(id)arg1 expiredExpids:(id)arg2 isAutoGet:(_Bool)arg3;
- (id)getExpItemsArray;
- (void)updateOnlineOffLineLabItems;
- (void)tryMarkClearNewRedDotInWechatLabEntrance;
- (_Bool)shouldShowNewRedDotInWechatLabEntrance;
- (void)tryMarkClearRedDotInWechatLabsCellWithAppid:(id)arg1;
- (_Bool)shouldShowRedDotInWechatLabsCellWithAppid:(id)arg1;
- (_Bool)shouldShowRedDotInWechatLabEntrance;
- (void)markShowLabsTip;
- (void)saveLabsAppItemDic;
- (id)getOfflineLabItems;
- (id)getOnlineLabsItems;
- (_Bool)shouldShowWCLabEntrance;
- (id)getLabsAppItemByAppid:(id)arg1;
- (void)updateLabAppEntranceWithAppid:(id)arg1 switchValue:(_Bool)arg2 sync:(_Bool)arg3;
- (void)markLabAppClickWithAppid:(id)arg1;
- (_Bool)shouldShowEntranceWithLabAppid:(id)arg1;
- (_Bool)isExpRunningWithLabAppid:(id)arg1;
- (void)loadData;
- (void)clearAllData;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


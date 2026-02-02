//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WANewTipsMgr
{
    NSMutableDictionary *_id2NextUpdateTimeDic;
    NSMutableArray *_updatingTipsKeyList;
}

- (void).cxx_destruct;
- (void)removeTipsInfoFromUpdatingLIstWithTipsId:(unsigned int)arg1 uniqueId:(id)arg2;
- (void)addTipsInfoToUpdatingListWithTipsId:(unsigned int)arg1 uniqueId:(id)arg2;
- (_Bool)isTipsInfoInUpdatingListWithTipsId:(unsigned int)arg1 uniqueId:(id)arg2;
- (void)setNextUpdateTime:(unsigned long long)arg1 tipsId:(unsigned int)arg2 uniqueId:(id)arg3;
- (unsigned long long)getNextUpdateTimeWithTipsId:(unsigned int)arg1 uniqueId:(id)arg2;
- (id)genKeyWithTipsId:(unsigned int)arg1 uniqueId:(id)arg2;
- (void)reportDiscoveryTabClick:(_Bool)arg1 isNative:(_Bool)arg2;
- (void)reportDiscoveryTabExpose:(_Bool)arg1;
- (void)reportDiscoveryPageExpose;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isNewTipsInfoNeedRealTimeUpdate:(id)arg1;
- (void)handleGetWeAppCellNotifyMsgResp:(id)arg1;
- (void)fetchRealTimeReddotMsgWithTipsId:(unsigned int)arg1 uniqueId:(id)arg2 showType:(unsigned int)arg3 title:(id)arg4 iconUrl:(id)arg5 extInfo:(id)arg6;
- (void)fetchRealTimeReddotMsgIfNeededWithNewTipsInfo:(id)arg1;
- (void)fetchWeAppRealTimeReddotMsgIfNeeded;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


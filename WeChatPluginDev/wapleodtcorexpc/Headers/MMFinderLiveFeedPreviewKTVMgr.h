//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMFinderLiveFeedPreviewKTVMgr
{
    NSMutableDictionary *_ktvBoxDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *ktvBoxDict; // @synthesize ktvBoxDict=_ktvBoxDict;
- (void)clearKTVBoxWithTaskId:(id)arg1;
- (id)getKTVBoxWithTaskId:(id)arg1;
- (void)clearDatas;
- (void)initDatas;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


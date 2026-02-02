//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingMusicRecentLineMgrCpp
{
}

+ (id)sharedInstance;
- (_Bool)updateTopTapInfo:(id)arg1 newInfo:(id)arg2;
- (_Bool)onCategoryItemUpdated:(id)arg1;
- (void)updateWithRecommendInfo:(id)arg1;
- (_Bool)checkUpdateRecentTapeInfoList:(_Bool)arg1;
- (void)deleteRecentTapeInfo:(id)arg1;
- (void)appendRecentTapeInfo:(id)arg1;
- (id)getRecentTapeInfoList;
- (_Bool)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


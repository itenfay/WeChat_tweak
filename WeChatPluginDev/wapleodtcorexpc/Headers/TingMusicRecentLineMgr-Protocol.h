//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class MMListenCategoryItem, MMListenRecommendInfo, NSArray, NSString, TingTaskSnapshot;
@protocol TingMusicRecentLineMgrListener;

@protocol TingMusicRecentLineMgr <NSObject, UnitRCBaseProtocol>
- (_Bool)updateTopTapInfo:(NSString *)arg1 newInfo:(TingTaskSnapshot *)arg2;
- (_Bool)onCategoryItemUpdated:(MMListenCategoryItem *)arg1;
- (void)updateWithRecommendInfo:(MMListenRecommendInfo *)arg1;
- (_Bool)checkUpdateRecentTapeInfoList:(_Bool)arg1;
- (void)deleteRecentTapeInfo:(NSString *)arg1;
- (void)appendRecentTapeInfo:(TingTaskSnapshot *)arg1;
- (NSArray *)getRecentTapeInfoList;
- (_Bool)removeListener:(id <TingMusicRecentLineMgrListener>)arg1;
- (_Bool)addListener:(id <TingMusicRecentLineMgrListener>)arg1;
@end


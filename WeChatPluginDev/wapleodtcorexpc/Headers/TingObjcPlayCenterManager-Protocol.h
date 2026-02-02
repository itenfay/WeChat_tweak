//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class MMListenCategoryItem, NSArray, NSString, TingTaskSnapshot;
@protocol TingObjcPlayCenterManagerListener;

@protocol TingObjcPlayCenterManager <NSObject, UnitRCBaseProtocol>
- (MMListenCategoryItem *)getDefaultRecommendCategoryItemSync;
- (void)getLastPlayingInfoStatus:(NSArray *)arg1 callback:(void (^)(NSArray *))arg2;
- (NSArray *)getLastPlayingInfoStatusSync:(NSArray *)arg1;
- (void)getContiniousTapePlayingInfo:(NSString *)arg1 callback:(void (^)(TingTaskSnapshot *))arg2;
- (TingTaskSnapshot *)getContiniousTapePlayingInfoSync:(NSString *)arg1;
- (void)getPreviousTapePlayingInfo:(void (^)(TingTaskSnapshot *))arg1;
- (TingTaskSnapshot *)getPreviousTapePlayingInfoSync;
- (void)getLastCategoryTapePlayingInfo:(void (^)(TingTaskSnapshot *))arg1;
- (TingTaskSnapshot *)getLastCategoryTapePlayingInfoSync;
- (void)getLastTapePlayingInfo:(void (^)(TingTaskSnapshot *))arg1;
- (TingTaskSnapshot *)getLastTapePlayingInfoSync;
- (void)clearLastTapePlayingInfo:(void (^)(void))arg1;
- (void)deleteRecentTapeInfo:(NSString *)arg1 callback:(void (^)(void))arg2;
- (void)callDeleteRecentTapeInfo:(unsigned long long)arg1 tapeId:(NSString *)arg2 callback:(void (^)(void))arg3;
- (void)checkUpdateRecentTapeInfoList:(void (^)(void))arg1;
- (NSArray *)getRecentTapeInfoListSync;
- (void)getRecentTapeInfoList:(void (^)(NSArray *))arg1;
- (void)updateCurTapePlayingInfo:(NSString *)arg1 playingInfo:(TingTaskSnapshot *)arg2 callback:(void (^)(void))arg3;
- (void)applyTapePlayingInfo:(TingTaskSnapshot *)arg1 callback:(void (^)(void))arg2;
- (void)onCategoryItemUpdated:(MMListenCategoryItem *)arg1 callback:(void (^)(void))arg2;
- (void)onManagerClearData:(void (^)(void))arg1;
- (void)onManagerInit:(void (^)(void))arg1;
- (void)removeListener:(id <TingObjcPlayCenterManagerListener>)arg1;
- (void)addListener:(id <TingObjcPlayCenterManagerListener>)arg1;
@end


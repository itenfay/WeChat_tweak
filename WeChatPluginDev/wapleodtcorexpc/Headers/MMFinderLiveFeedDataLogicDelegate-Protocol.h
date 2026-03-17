//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol MMFinderLiveFeedDataLogicDelegate <NSObject>

@optional
- (void)onFinderLiveFeedSyncExtraMultiStyleInfo;
- (void)onFinderLiveFeedLotteryInfoUpdate;
- (void)onFinderLiveFeedHotSellingThresholdUpdate;
- (void)onFinderLiveFeedProductInfoUpdate;
- (void)onFinderLiveFeedAnchorStatusUpdate;
- (void)onFinderLiveFeedLikeCheerIconUpdate;
- (void)onFinderLiveFeedLikeContactsListUpdate:(NSArray *)arg1;
- (void)onFinderLiveFeedLikeCountUpdate:(unsigned long long)arg1;
@end


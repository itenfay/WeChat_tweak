//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol MMOrderCenterTableViewCellComponentAggregatedDelegate <NSObject>

@optional
- (void)reportEvent:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)onReviewButtonTapped;
- (void)onFinderRefererTapped;
- (void)onTrackingViewTapped;
- (void)onExpandTapped;
- (void)onStoreAvatarTapped;
@end


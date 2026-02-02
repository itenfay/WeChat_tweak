//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMCustomerOrderInfo, NSDictionary, NSString;

@protocol MMOrderCenterTableViewModularCellDelegate <NSObject>

@optional
- (void)reportEvent:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)onReviewButtonTappedForOrder:(MMCustomerOrderInfo *)arg1;
- (void)onTrackingViewTappedForOrder:(MMCustomerOrderInfo *)arg1;
- (void)onSkuListExpandTappedForOrder:(MMCustomerOrderInfo *)arg1;
- (void)onFinderRefererTappedForOrder:(MMCustomerOrderInfo *)arg1;
- (void)onHeaderStoreTappedForOrder:(MMCustomerOrderInfo *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveCouponItem;

@protocol MMFinderLiveCouponCardsMaskViewDelegate <NSObject>
- (void)onCouponCardButtonClicked:(MMFinderLiveCouponItem *)arg1 completion:(void (^)(_Bool))arg2;
- (void)onCouponCardsMaskViewCloseButtonClicked;
@end


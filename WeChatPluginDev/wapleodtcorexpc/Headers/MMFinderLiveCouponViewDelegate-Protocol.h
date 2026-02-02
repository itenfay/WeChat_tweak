//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveCouponItem;
@protocol MMFinderLiveCouponViewProtocol;

@protocol MMFinderLiveCouponViewDelegate <NSObject>

@optional
- (void)onActionButtonClicked:(MMFinderLiveCouponItem *)arg1 view:(id <MMFinderLiveCouponViewProtocol>)arg2;
@end


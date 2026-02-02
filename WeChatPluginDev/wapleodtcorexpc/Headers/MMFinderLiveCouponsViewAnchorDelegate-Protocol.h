//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveCouponItem;

@protocol MMFinderLiveCouponsViewAnchorDelegate <NSObject>
- (void)onCoupon:(MMFinderLiveCouponItem *)arg1 successIssueOrCancel:(_Bool)arg2;
- (long long)getPromoteUserType;
@end


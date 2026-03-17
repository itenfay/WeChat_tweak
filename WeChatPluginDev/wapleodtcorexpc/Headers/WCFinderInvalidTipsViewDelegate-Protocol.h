//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderInvalidTipsView;

@protocol WCFinderInvalidTipsViewDelegate <NSObject>

@optional
- (void)finderInvalidTipsViewDidClickComplainButton:(WCFinderInvalidTipsView *)arg1;
- (void)finderInvalidTipsViewDidClickConfirmButton:(WCFinderInvalidTipsView *)arg1;
- (void)finderInvalidTipsView:(WCFinderInvalidTipsView *)arg1 didClickLink:(NSString *)arg2;
@end


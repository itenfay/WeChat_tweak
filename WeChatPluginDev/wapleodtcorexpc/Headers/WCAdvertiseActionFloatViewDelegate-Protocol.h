//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCAdDislikeReason, WCAdFeedbackItem, WCAdvertiseActionFloatView;

@protocol WCAdvertiseActionFloatViewDelegate <NSObject>
- (void)onActionFloatView:(WCAdvertiseActionFloatView *)arg1 didSelectFeedbackItem:(WCAdFeedbackItem *)arg2;
- (void)onActionFloatView:(WCAdvertiseActionFloatView *)arg1 didSelectReason:(WCAdDislikeReason *)arg2;
@end


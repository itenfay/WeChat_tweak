//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCTimelineErrTipsView;

@protocol WCTimelineErrTipsViewDelegate <NSObject>
- (void)onTimelineErrTipsViewLinkClicked:(NSString *)arg1 errTipsView:(WCTimelineErrTipsView *)arg2;
@end


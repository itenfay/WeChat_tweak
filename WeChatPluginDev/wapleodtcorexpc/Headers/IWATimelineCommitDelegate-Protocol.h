//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController, WATimelineData;

@protocol IWATimelineCommitDelegate <NSObject>
- (void)onDoneForwardForForwardView:(UIViewController *)arg1 timelineData:(WATimelineData *)arg2;
- (void)onCancelForwardForForwardView:(UIViewController *)arg1 timelineData:(WATimelineData *)arg2;
@end


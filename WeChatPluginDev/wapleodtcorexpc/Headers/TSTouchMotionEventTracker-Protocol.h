//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "TSEventTracker-Protocol.h"

@class UIView;

@protocol TSTouchMotionEventTracker <TSEventTracker>
- (id)initWithInterval:(double)arg1 view:(UIView *)arg2 trackEventHandler:(void (^)(TSTrackedItem *))arg3;
@end


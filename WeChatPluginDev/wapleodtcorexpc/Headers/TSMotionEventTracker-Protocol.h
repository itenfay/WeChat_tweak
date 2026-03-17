//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "TSEventTracker-Protocol.h"

@protocol TSMotionEventTracker <TSEventTracker>
- (id)initWithInterval:(double)arg1 trackEventHandler:(void (^)(TSTrackedItem *))arg2;
@end


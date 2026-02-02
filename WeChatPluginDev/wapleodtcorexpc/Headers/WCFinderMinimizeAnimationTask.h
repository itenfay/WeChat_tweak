//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizeTaskData;

@interface WCFinderMinimizeAnimationTask : NSObject
{
    MinimizeTaskData *_taskData;
    struct CGRect _startFrame;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(nonatomic) struct CGRect startFrame; // @synthesize startFrame=_startFrame;

@end


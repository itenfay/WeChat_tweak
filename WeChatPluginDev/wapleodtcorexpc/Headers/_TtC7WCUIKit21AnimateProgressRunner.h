//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7WCUIKit21AnimateProgressRunner : NSObject
{
    MISSING_TYPE *complete;
    MISSING_TYPE *updateProgress;
    MISSING_TYPE *timePassed;
    MISSING_TYPE *duration;
    MISSING_TYPE *isReversed;
    MISSING_TYPE *displayLink;
}

- (void).cxx_destruct;
- (id)init;
- (void)startWithTimePassed:(double)arg1 totalTime:(double)arg2 reverse:(_Bool)arg3;
- (void)displayUpdate:(id)arg1;
@property(nonatomic, copy) CDUnknownBlockType updateProgress;
@property(nonatomic, copy) CDUnknownBlockType complete;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveKTVResLoadTask : NSObject
{
    NSString *_taskKey;
    CDUnknownBlockType _timeoutCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType timeoutCallback; // @synthesize timeoutCallback=_timeoutCallback;
@property(retain, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
- (void)timeoutToLoad;
- (void)stop;
- (void)start;
- (id)initWithTaskKey:(id)arg1;

@end


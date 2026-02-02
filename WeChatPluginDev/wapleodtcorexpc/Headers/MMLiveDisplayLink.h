//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface MMLiveDisplayLink : NSObject
{
    CADisplayLink *_displayLink;
    CDUnknownBlockType _callback;
    long long _framesPerSecond;
}

- (void).cxx_destruct;
@property(nonatomic) long long framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void)update:(id)arg1;
- (void)invalidate;
- (void)stop;
- (void)start;
- (void)dealloc;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface ODSThreadedDisplayLinkIOS : NSObject
{
    _Bool _isStarted;
    CADisplayLink *_displayLink;
    void *_owner;
    long long _preferredFramesPerSecond;
}

- (void).cxx_destruct;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
- (void)refresh;
- (void)stop;
- (void)start;
- (id)initWithOwner:(void *)arg1;

@end


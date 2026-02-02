//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface OMJCamGestureRecognizerSettings : NSObject
{
    _Bool _isGestureEnabled;
    NSArray *_enabledGestures;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *enabledGestures; // @synthesize enabledGestures=_enabledGestures;
@property(readonly, nonatomic) _Bool isGestureEnabled; // @synthesize isGestureEnabled=_isGestureEnabled;
- (_Bool)isGestureEnabled:(long long)arg1;
- (id)initWithBackingSettings:(const void *)arg1;

@end


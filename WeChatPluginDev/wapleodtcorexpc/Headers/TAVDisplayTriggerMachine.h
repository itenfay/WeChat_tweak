//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, VIDisplayTriggerObject;

@interface TAVDisplayTriggerMachine : NSObject
{
    CDUnknownBlockType _triggerOperation;
    long long _preferredFramesPerSecond;
    CADisplayLink *_displayLink;
    VIDisplayTriggerObject *_triggerObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VIDisplayTriggerObject *triggerObject; // @synthesize triggerObject=_triggerObject;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(copy, nonatomic) CDUnknownBlockType triggerOperation; // @synthesize triggerOperation=_triggerOperation;
- (void)pause;
- (void)start;
- (id)init;
- (id)initWithTriggerOperation:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end


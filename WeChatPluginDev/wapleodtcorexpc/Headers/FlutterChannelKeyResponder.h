//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterBasicMessageChannel;

@interface FlutterChannelKeyResponder : NSObject
{
    FlutterBasicMessageChannel *_channel;
    long long _pressedModifiers;
}

@property(nonatomic) long long pressedModifiers; // @synthesize pressedModifiers=_pressedModifiers;
@property(nonatomic) FlutterBasicMessageChannel *channel; // @synthesize channel=_channel;
- (long long)adjustModifiers:(id)arg1;
- (void)updatePressedModifiers:(id)arg1;
- (void)handlePress:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithChannel:(id)arg1;

@end


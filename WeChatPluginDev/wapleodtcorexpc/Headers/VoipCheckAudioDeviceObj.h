//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VoipCheckAudioDeviceObj : NSObject
{
    _Bool _isUsingEarDevice;
    CDUnknownBlockType _audioDevicePluginCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType audioDevicePluginCallback; // @synthesize audioDevicePluginCallback=_audioDevicePluginCallback;
@property(nonatomic) _Bool isUsingEarDevice; // @synthesize isUsingEarDevice=_isUsingEarDevice;
- (void)checkExternalAudioDeviceState;
- (void)onWCAudioSessionOverride;
- (void)onWCAudioSessionCategoryChange;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (id)initWithMainThreadCallback:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


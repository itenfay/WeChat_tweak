//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WeMediaApi;
@protocol WAJITBindingMediaModuleDelegate;

@interface WAJITBindingMediaModule : NSObject
{
    _Bool _isBackground;
    _Bool _isAudioInterrupt;
    id <WAJITBindingMediaModuleDelegate> _delegate;
    WeMediaApi *_wemedia_api;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAudioInterrupt; // @synthesize isAudioInterrupt=_isAudioInterrupt;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(retain, nonatomic) WeMediaApi *wemedia_api; // @synthesize wemedia_api=_wemedia_api;
@property(nonatomic) __weak id <WAJITBindingMediaModuleDelegate> delegate; // @synthesize delegate=_delegate;
- (void)activeAudioSession:(int)arg1;
- (id)getIdentifier;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2;
- (void)sendAudioInterruptionEndEvent;
- (void)sendAudioInterruptionBeginEvent;
- (id)mixListForAudioModule:(id)arg1;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)weMediaUnregisterExternaImage:(int)arg1;
- (_Bool)weMediaRegisterExternaImage:(const char *)arg1 dataLen:(unsigned long long)arg2 imageId:(int)arg3 width:(int)arg4 height:(int)arg5;
- (id)weMediaGetAbsolutePath:(id)arg1;
- (void)weMediaTryStopAudioDevice:(unsigned long long)arg1;
- (_Bool)weMediaTryStartAudioDevice:(unsigned long long)arg1;
- (_Bool)weMediaGetExternalConfig:(id)arg1 defaultVal:(_Bool)arg2;
- (void)weMediaLOG:(int)arg1 log:(const char *)arg2;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)dealloc;
- (void)setupWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WCAudioModuleProxyDelegate;

@interface WCAudioModuleProxy : NSObject
{
    _Bool _allowsExternalPlayback;
    int _audioModuleScene;
    NSString *_audioModuleIdentifier;
    id <WCAudioModuleProxyDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAudioModuleProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(readonly, nonatomic) NSString *audioModuleIdentifier; // @synthesize audioModuleIdentifier=_audioModuleIdentifier;
@property(readonly, nonatomic) int audioModuleScene; // @synthesize audioModuleScene=_audioModuleScene;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)deactiveAudioModule;
- (void)activeAudioModule;
- (void)updateAudioSession;
@property(readonly, copy) NSString *description;
- (id)initWithScene:(int)arg1 identifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


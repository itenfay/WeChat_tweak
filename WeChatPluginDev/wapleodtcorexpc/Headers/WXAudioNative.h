//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WXAudioNativeTask;
@protocol wxAudioCommonDelegate, wxAudioFileLoaderDelegate, wxAudioOutputDelegate, wxAudioStateDelegate;

@interface WXAudioNative : NSObject
{
    struct OpaqueJSContext *_jscontext;
    struct WXAudioScriptState *_audioScriptState;
    void *_audioMgr;
    WXAudioNativeTask *audioTask;
    struct WxAudioFileCallback *m_pAudioFileCallback;
    id <wxAudioFileLoaderDelegate> _wxAudioFileDelegate;
    id <wxAudioOutputDelegate> _wxAudioOutputDelegate;
    id <wxAudioStateDelegate> _wxAudioStateDelegate;
    id <wxAudioCommonDelegate> _wxAudioCommonDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <wxAudioCommonDelegate> wxAudioCommonDelegate; // @synthesize wxAudioCommonDelegate=_wxAudioCommonDelegate;
@property(nonatomic) __weak id <wxAudioStateDelegate> wxAudioStateDelegate; // @synthesize wxAudioStateDelegate=_wxAudioStateDelegate;
@property(nonatomic) __weak id <wxAudioOutputDelegate> wxAudioOutputDelegate; // @synthesize wxAudioOutputDelegate=_wxAudioOutputDelegate;
@property(nonatomic) __weak id <wxAudioFileLoaderDelegate> wxAudioFileDelegate; // @synthesize wxAudioFileDelegate=_wxAudioFileDelegate;
- (void)dealloc;
- (void)releaseContext;
- (void)setMute:(_Bool)arg1;
- (void)forceResumeAllPlayer;
- (void)forcePauseAllPlayer:(_Bool)arg1;
- (void)forcePauseAllPlayer;
- (_Bool)isWaitingAudio;
- (_Bool)isPlayingAudio;
- (void)setLogDelegate:(id)arg1;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2;

@end


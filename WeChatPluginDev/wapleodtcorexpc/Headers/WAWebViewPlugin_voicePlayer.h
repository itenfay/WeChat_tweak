//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_voicePlayer
{
    _Bool _stopVoiceFlag;
    id <IWAWebViewPluginDelegate> _resultDelegate;
    NSString *_localId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(nonatomic) __weak id <IWAWebViewPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)OnPlayError:(id)arg1;
- (void)sendEndEventToJS:(id)arg1;
- (void)OnEndPlay:(id)arg1;
- (void)OnBeginPlay:(id)arg1;
- (id)localPathByAudioData:(id)arg1 pathExtension:(id)arg2;
- (id)voiceCachePathByfileName:(id)arg1;
- (id)voiceCacheRootPath;
- (void)setStopVoiceFlag;
- (void)playVoice:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


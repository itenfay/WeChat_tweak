//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMediaServiceWrapper, NSMutableDictionary;

@interface MMWebJsMediaServiceHandler
{
    MMMediaServiceWrapper *_mediaService;
    NSMutableDictionary *_dicEvent2CallBackFunc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicEvent2CallBackFunc; // @synthesize dicEvent2CallBackFunc=_dicEvent2CallBackFunc;
@property(retain, nonatomic) MMMediaServiceWrapper *mediaService; // @synthesize mediaService=_mediaService;
- (void)addApi_audioRemove:(id)arg1;
- (void)addApi_audioStop:(id)arg1;
- (void)addApi_audioUpdate:(id)arg1;
- (void)addApi_audioStart:(id)arg1;
- (void)addApi_audioDelTask:(id)arg1;
- (void)addApi_audioAddTask:(id)arg1;
- (void)addApi_audioCreate:(id)arg1;
- (void)addApi_playerRemove:(id)arg1;
- (void)addApi_playerStop:(id)arg1;
- (void)addApi_playerGetFrame:(id)arg1;
- (void)addApi_playerWait:(id)arg1;
- (void)addApi_playerSeek:(id)arg1;
- (void)addApi_playerStart:(id)arg1;
- (void)notifyEvent:(id)arg1 errCode:(int)arg2 errDesc:(id)arg3;
- (void)addApi_playerCreate:(id)arg1;
- (void)addApi_removeEventListener:(id)arg1;
- (void)addApi_addEventListener:(id)arg1;
- (CDUnknownBlockType)commSdkCallback:(id)arg1 containerId:(unsigned int)arg2 apiName:(id)arg3;
- (void)__callbackWithFunc:(id)arg1 errCode:(int)arg2 errDesc:(id)arg3 retDic:(id)arg4;
- (void)setupAudioSession;
- (_Bool)isAudioPlaying;
- (void)injectMediaToolKitJsContext:(id)arg1;
- (void)dealloc;
- (id)init;

@end


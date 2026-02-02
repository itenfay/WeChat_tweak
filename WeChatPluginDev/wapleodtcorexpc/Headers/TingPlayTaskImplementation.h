//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TingPlayerAudioModuleHelper;

@interface TingPlayTaskImplementation
{
    TingPlayerAudioModuleHelper *_audioModuleHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingPlayerAudioModuleHelper *audioModuleHelper; // @synthesize audioModuleHelper=_audioModuleHelper;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)play:(int)arg1;
- (_Bool)checkAndActiveAudioModule;
- (void)configurateAudioModuleHelper:(id)arg1;

@end


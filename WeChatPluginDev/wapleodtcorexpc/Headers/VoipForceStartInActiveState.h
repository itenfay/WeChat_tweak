//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, VoipForceStartObject;

@interface VoipForceStartInActiveState
{
    VoipForceStartObject *_m_audioObject;
    VoipForceStartObject *_m_videoObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoipForceStartObject *m_videoObject; // @synthesize m_videoObject=_m_videoObject;
@property(retain, nonatomic) VoipForceStartObject *m_audioObject; // @synthesize m_audioObject=_m_audioObject;
- (void)startVideo;
- (void)updateVoipVideoStartBlock:(CDUnknownBlockType)arg1;
- (void)startAudio;
- (void)updateVoipAudioStartBlock:(CDUnknownBlockType)arg1;
- (void)setCanStartInUnactive:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MJSegmentAudioInspectorViewModel
{
    _Bool _isAudioMutedOriginalValue;
    float _volumeOriginalValue;
}

- (void)notifyDidApplyToAll:(id)arg1;
- (void)setValuesToOriginal;
- (void)notifyDidReset;
- (void)notifyDidCancel;
- (_Bool)hasChanges;
- (id)adjustableProtocols;
- (id)title;
- (_Bool)isResetEnabled;
- (_Bool)isApplyAllEnabled;
- (_Bool)isCancelEnabled;
- (void)didFinishAdjustAudio;
@property(readonly, nonatomic) _Bool canAdjustVolume;
@property(nonatomic) _Bool isAudioMuted;
@property(nonatomic) float volume;
- (id)initWithSegment:(id)arg1 type:(unsigned long long)arg2;

@end


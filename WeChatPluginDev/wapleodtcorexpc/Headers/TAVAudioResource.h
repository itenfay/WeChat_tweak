//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset;

@interface TAVAudioResource
{
    AVAsset *_emptyAsset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAsset *emptyAsset; // @synthesize emptyAsset=_emptyAsset;
- (id)pcmBufferAtTimeRange:(CDStruct_e83c9415)arg1 audioFormat:(id)arg2;
- (id)tracksForType:(id)arg1;
- (id)trackInfoForType:(id)arg1 atIndex:(long long)arg2;
- (void)loadEmptyTrack;
- (id)initWithDuration:(CDStruct_1b6d18a9)arg1;

@end


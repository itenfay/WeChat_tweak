//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAudioMix, AVComposition, AVVideoComposition;

@interface GPUImageMovieComposition
{
    AVComposition *_compositon;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
}

- (void).cxx_destruct;
@property(retain) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(retain) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain) AVComposition *compositon; // @synthesize compositon=_compositon;
- (id)createAssetReader;
- (id)initWithComposition:(id)arg1 andVideoComposition:(id)arg2 andAudioMix:(id)arg3;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVCompositionTrack, AVMutableComposition;

@protocol TAVAudioCompositionTrack <NSObject>
- (AVCompositionTrack *)audioCompositionTrackForComposition:(AVMutableComposition *)arg1 atIndex:(long long)arg2;
- (unsigned long long)numberOfAudioTracks;
@end


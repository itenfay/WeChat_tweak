//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVCompositionTrack, AVMutableComposition, CIImage;

@protocol TAVVideoCompositionTrack <NSObject>
- (AVCompositionTrack *)videoCompositionTrackForComposition:(AVMutableComposition *)arg1 atIndex:(long long)arg2;
- (unsigned long long)numberOfVideoTracks;

@optional
- (CIImage *)sourceImageAtTime:(CDStruct_1b6d18a9)arg1 renderSize:(struct CGSize)arg2;
@end


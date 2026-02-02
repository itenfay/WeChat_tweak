//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMovieDecoder;

@protocol MMovieDecoderDelegate <NSObject>

@optional
- (void)mMovieDecoderOnDecodeFinished:(MMovieDecoder *)arg1;
- (void)mMovieDecoder:(MMovieDecoder *)arg1 onNewAudioFrameReady:(struct opaqueCMSampleBuffer *)arg2;
- (void)mMovieDecoder:(MMovieDecoder *)arg1 onNewVideoFrameReady:(struct opaqueCMSampleBuffer *)arg2;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class MMovieDecoder, NSString, UIImage;
@protocol MVideoPlayerViewDelegate;

@interface MVideoPlayerView : UIImageView
{
    _Bool _autoRepeat;
    id <MVideoPlayerViewDelegate> _delegate;
    UIImage *_lastFrame;
    CDUnknownBlockType _didTouchInsideBlock;
    NSString *_cpKey;
    MMovieDecoder *_decoder;
    UIImage *_firstFrame;
    NSString *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UIImage *firstFrame; // @synthesize firstFrame=_firstFrame;
@property(retain, nonatomic) MMovieDecoder *decoder; // @synthesize decoder=_decoder;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(copy, nonatomic) CDUnknownBlockType didTouchInsideBlock; // @synthesize didTouchInsideBlock=_didTouchInsideBlock;
@property(nonatomic) _Bool autoRepeat; // @synthesize autoRepeat=_autoRepeat;
@property(retain, nonatomic) UIImage *lastFrame; // @synthesize lastFrame=_lastFrame;
@property(nonatomic) __weak id <MVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapped;
- (void)mMovieDecoder:(id)arg1 onNewVideoFrameReady:(struct opaqueCMSampleBuffer *)arg2;
- (void)mMovieDecoderOnDecodeFinished:(id)arg1;
- (void)restart;
- (void)pauseForRelease;
- (void)pause;
- (void)loadAndPlay:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


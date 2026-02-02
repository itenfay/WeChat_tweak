//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMVPlayer, MMMusicVideoStatusOpenParams, NSString;
@protocol TextStateBaseMediaViewDelegate, TextStateMVPlayerViewDelegate;

@interface TextStateMVPlayerView : UIView
{
    _Bool _startPlayerAfterLoad;
    id <TextStateMVPlayerViewDelegate> _delegate;
    MMMVPlayer *_mvPlayer;
    MMMusicVideoStatusOpenParams *_openParams;
    struct UIEdgeInsets _lyricViewInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets lyricViewInsets; // @synthesize lyricViewInsets=_lyricViewInsets;
@property(nonatomic) _Bool startPlayerAfterLoad; // @synthesize startPlayerAfterLoad=_startPlayerAfterLoad;
@property(retain, nonatomic) MMMusicVideoStatusOpenParams *openParams; // @synthesize openParams=_openParams;
@property(retain, nonatomic) MMMVPlayer *mvPlayer; // @synthesize mvPlayer=_mvPlayer;
@property(nonatomic) __weak id <TextStateMVPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MVPlayer:(id)arg1 onInnerMusicStateChanged:(unsigned long long)arg2 musicInfo:(id)arg3 errorInfo:(id)arg4;
- (void)MVPlayer:(id)arg1 onMusicStateChanged:(unsigned long long)arg2 musicInfo:(id)arg3 errorInfo:(id)arg4;
- (void)MVPlayer:(id)arg1 onMusicProgressUpdate:(double)arg2 totalDuration:(double)arg3;
@property(nonatomic, getter=isMuted) _Bool muted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisMuted

- (void)pausePlayMediaVideoStream;
- (void)pausePlayMedia;
- (void)startPlayMedia;
@property(readonly, nonatomic) double mediaAspectRatio;
- (double)fullScreenAspectRatio;
- (id)generateMvModelFromOpenParams:(id)arg1;
- (void)fetchDataItemWithOpenParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDataItemWithOpenParams:(id)arg1;
- (void)fillImformationIntoMvModel:(id)arg1 inputParamters:(id)arg2;
- (void)loadMvModel:(id)arg1 inputParamters:(id)arg2;
- (void)layoutSubviews;
- (void)configurateSubviews;
- (id)lyricView;
- (id)playerView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithOpenParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForceMuted) _Bool forceMuted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisForceMuted

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <TextStateBaseMediaViewDelegate> textStateDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TextStateBaseMediaViewDelegate>",?,W,N


@end


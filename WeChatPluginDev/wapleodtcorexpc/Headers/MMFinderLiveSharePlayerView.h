//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveCDNPlayerView, NSString, UILabel, UIView, WCFinderDataItem;
@protocol TextStateBaseMediaViewDelegate;

@interface MMFinderLiveSharePlayerView
{
    _Bool _muted;
    _Bool _playing;
    _Bool _waitPlaying;
    MMLiveCDNPlayerView *_CDNPlayerView;
    UIView *_tipsView;
    UILabel *_endingLabel;
    WCFinderDataItem *_mediaDataItem;
    id <TextStateBaseMediaViewDelegate> _textStateDelegate;
    struct CGSize _currentMediaSize;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TextStateBaseMediaViewDelegate> textStateDelegate; // @synthesize textStateDelegate=_textStateDelegate;
@property(nonatomic) _Bool waitPlaying; // @synthesize waitPlaying=_waitPlaying;
@property(retain, nonatomic) WCFinderDataItem *mediaDataItem; // @synthesize mediaDataItem=_mediaDataItem;
@property(retain, nonatomic) UILabel *endingLabel; // @synthesize endingLabel=_endingLabel;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) MMLiveCDNPlayerView *CDNPlayerView; // @synthesize CDNPlayerView=_CDNPlayerView;
@property(nonatomic) struct CGSize currentMediaSize; // @synthesize currentMediaSize=_currentMediaSize;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
- (void)onPlayChangeSize:(struct CGSize)arg1;
- (void)requestMediaURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)mediaURLFromDataItem:(id)arg1;
- (void)stopPlaying;
- (void)startPlaying;
- (void)refreshStatusViewWithShareItem:(id)arg1;
- (void)updateCover;
- (void)refreshSubviews;
- (id)initWithFrame:(struct CGRect)arg1 shareItem:(id)arg2;
- (void)dealloc;
- (void)resetPlayMedia;
- (void)pausePlayMedia;
- (void)startPlayMedia;
@property(readonly, nonatomic) double mediaAspectRatio;

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

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveCDNPlayerView, MMUIButton, MMUIView, NSString, UILabel, WCFinderDataItem, WCFinderSimplePlayerView;

@interface WCFinderLiveCompleteLiveAudienceCardView : UIView
{
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _onLiveAudienceCardViewPlayBlock;
    unsigned long long _type;
    WCFinderDataItem *_liveDataItem;
    WCFinderDataItem *_replayDataItem;
    MMUIView *_contentView;
    MMUIButton *_actionButton;
    UILabel *_titleLabel;
    MMLiveCDNPlayerView *_livePlayerView;
    WCFinderSimplePlayerView *_replayPlayerView;
    MMUIButton *_playButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) WCFinderSimplePlayerView *replayPlayerView; // @synthesize replayPlayerView=_replayPlayerView;
@property(retain, nonatomic) MMLiveCDNPlayerView *livePlayerView; // @synthesize livePlayerView=_livePlayerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) WCFinderDataItem *replayDataItem; // @synthesize replayDataItem=_replayDataItem;
@property(retain, nonatomic) WCFinderDataItem *liveDataItem; // @synthesize liveDataItem=_liveDataItem;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType onLiveAudienceCardViewPlayBlock; // @synthesize onLiveAudienceCardViewPlayBlock=_onLiveAudienceCardViewPlayBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (double)getHeightFromWidth:(double)arg1;
- (void)layoutUI;
- (void)actionButtonClick;
- (void)createUI;
- (void)layoutSubviews;
- (void)viewWillAppear;
- (void)dealloc;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)playReplay;
- (void)onPlayEnd;
- (void)playLive;
- (void)updateAudienceCardViewWithType:(unsigned long long)arg1 liveDataItem:(id)arg2 replayDataItem:(id)arg3;
- (void)updateRecomendPlaying:(_Bool)arg1;
- (void)finderFeedImageLoadFinish;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


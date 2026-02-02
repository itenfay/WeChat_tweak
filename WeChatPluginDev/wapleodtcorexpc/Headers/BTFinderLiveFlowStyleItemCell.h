//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTFinderLiveItemViewModel, MMLiveCDNPlayerView, NSString, WCFinderLiveNowView;
@protocol BTFinderLiveFlowStyleItemCellDelegate;

@interface BTFinderLiveFlowStyleItemCell
{
    id <BTFinderLiveFlowStyleItemCellDelegate> _liveDelegate;
    BTFinderLiveItemViewModel *_viewModel;
    MMLiveCDNPlayerView *_playerView;
    WCFinderLiveNowView *_liveTagView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveNowView *liveTagView; // @synthesize liveTagView=_liveTagView;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) BTFinderLiveItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <BTFinderLiveFlowStyleItemCellDelegate> liveDelegate; // @synthesize liveDelegate=_liveDelegate;
- (void)setMute:(_Bool)arg1;
- (void)stop;
- (void)playWithSound:(_Bool)arg1;
- (void)updateWithItemViewModel:(id)arg1;
- (void)updateLiveTagStateForLiveEnd;
- (void)loadData;
- (void)prepareForReuse;
- (id)realTagView;
- (id)realCoverView;
- (double)coverImageRatio;
- (id)coverContainerSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


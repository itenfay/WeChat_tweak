//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandFinderLiveCardViewModel, MMUILabel, NSMutableDictionary, RichTextView, UIView, WCFinderLiveNowView;
@protocol BrandFinderLiveBaseCardViewDelegate;

@interface BrandFinderLiveBaseCardView
{
    id <BrandFinderLiveBaseCardViewDelegate> _delegate;
    NSMutableDictionary *_extraData;
    BrandFinderLiveCardViewModel *_viewModel;
    MMUILabel *_recommendReasonLabel;
    RichTextView *_titleTextView;
    UIView *_highlightMaskView;
    WCFinderLiveNowView *_liveNowView;
    WCFinderLiveNowView *_liveOverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveNowView *liveOverView; // @synthesize liveOverView=_liveOverView;
@property(retain, nonatomic) WCFinderLiveNowView *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) RichTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) MMUILabel *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) BrandFinderLiveCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSMutableDictionary *extraData; // @synthesize extraData=_extraData;
@property(nonatomic) __weak id <BrandFinderLiveBaseCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (void)onLiveCardViewLongClick:(id)arg1;
- (void)onLiveCardViewClick:(id)arg1;
- (void)setHighlightViewHidden:(_Bool)arg1;
- (void)internalUpdateRecommendReason:(id)arg1;
- (void)updateRecommendReason:(id)arg1;
- (void)internalUpdateLiveStatus:(_Bool)arg1 statusWording:(id)arg2;
- (void)updateLiveStatus:(_Bool)arg1 statusWording:(id)arg2;
- (void)updateViewModel:(id)arg1;

@end


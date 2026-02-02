//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WCFinderFullScrollTextView, WCFinderLiveNowView;

@interface MMFinderLiveFeedStreamCarouselTextLineCell
{
    WCFinderLiveNowView *_liveTipsView;
    WCFinderFullScrollTextView *_textView;
    UIView *_hardAdCornerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *hardAdCornerView; // @synthesize hardAdCornerView=_hardAdCornerView;
@property(retain, nonatomic) WCFinderFullScrollTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) WCFinderLiveNowView *liveTipsView; // @synthesize liveTipsView=_liveTipsView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)isAdCornerInTextView;
- (_Bool)showTitle;
- (void)reload;
- (void)layout;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


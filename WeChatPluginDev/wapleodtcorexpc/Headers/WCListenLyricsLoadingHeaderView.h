//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WCListenLyricAnimationLoadingView;

@interface WCListenLyricsLoadingHeaderView
{
    CDUnknownBlockType _onClickBlock;
    WCListenLyricAnimationLoadingView *_loadingView;
    UIView *_highlightedView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(retain, nonatomic) WCListenLyricAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType onClickBlock; // @synthesize onClickBlock=_onClickBlock;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlightedViewHidden:(_Bool)arg1;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)startAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


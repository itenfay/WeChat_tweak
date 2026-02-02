//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, NSString, RichTextView, TextStateSectionView, UIScrollView, UIView, UIViewPropertyAnimator, WCFinderFullDoubleLikeEduView;

@interface TextStateFullScreenCardContentView
{
    _Bool _expandContent;
    _Bool _showSameFriendDescription;
    _Bool _scrollingToTop;
    _Bool _expanding;
    _Bool _needsCreateOrUpdateLayout;
    _Bool _needsLayoutText;
    unsigned int _footerComponents;
    double _topPadding;
    double _bottomPadding;
    double _horizonPadding;
    UIScrollView *_noopScrollView;
    UIScrollView *_contentContainerView;
    CAGradientLayer *_gradientMaskLayer;
    RichTextView *_expandTextView;
    UIViewPropertyAnimator *_shrinkAnimator;
    UIView *_backgroundView;
    TextStateSectionView *_footerView;
    UIView *_iconSourceSeparator;
    UIView *_defaultHeadImageSourceSeparator;
    WCFinderFullDoubleLikeEduView *_doubleTapFavoriteGuideView;
}

+ (id)verticalSeparator;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsLayoutText; // @synthesize needsLayoutText=_needsLayoutText;
@property(nonatomic) _Bool needsCreateOrUpdateLayout; // @synthesize needsCreateOrUpdateLayout=_needsCreateOrUpdateLayout;
@property(retain, nonatomic) WCFinderFullDoubleLikeEduView *doubleTapFavoriteGuideView; // @synthesize doubleTapFavoriteGuideView=_doubleTapFavoriteGuideView;
@property(retain, nonatomic) UIView *defaultHeadImageSourceSeparator; // @synthesize defaultHeadImageSourceSeparator=_defaultHeadImageSourceSeparator;
@property(retain, nonatomic) UIView *iconSourceSeparator; // @synthesize iconSourceSeparator=_iconSourceSeparator;
@property(retain, nonatomic) TextStateSectionView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIViewPropertyAnimator *shrinkAnimator; // @synthesize shrinkAnimator=_shrinkAnimator;
@property(nonatomic, getter=isExpanding) _Bool expanding; // @synthesize expanding=_expanding;
@property(retain, nonatomic) RichTextView *expandTextView; // @synthesize expandTextView=_expandTextView;
@property(retain, nonatomic) CAGradientLayer *gradientMaskLayer; // @synthesize gradientMaskLayer=_gradientMaskLayer;
@property(nonatomic, getter=isScrollingToTop) _Bool scrollingToTop; // @synthesize scrollingToTop=_scrollingToTop;
@property(retain, nonatomic) UIScrollView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) UIScrollView *noopScrollView; // @synthesize noopScrollView=_noopScrollView;
@property(nonatomic) double horizonPadding; // @synthesize horizonPadding=_horizonPadding;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) unsigned int footerComponents; // @synthesize footerComponents=_footerComponents;
@property(nonatomic) _Bool showSameFriendDescription; // @synthesize showSameFriendDescription=_showSameFriendDescription;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (_Bool)handleTapView:(id)arg1 point:(struct CGPoint)arg2;
- (void)updateDescriptionTextView;
- (void)updateSeparator;
- (void)createOrUpdateLayout;
- (void)updateGradientLayer;
- (void)updateTextLayout;
- (void)updateFooterViewAndLayout;
- (void)createOrUpdateLayoutIfNeeded;
- (void)setNeedsCreateOrUpdateLayout;
- (void)setNeedsLayoutText;
- (void)shouldUpdateLayout;
- (void)onContentUpdate;
- (unsigned long long)maxLineNumberForFold;
- (_Bool)shouldStartDoubleTapFavorite;
- (_Bool)shouldHideDefaultSourceView;
- (void)updateContentContainerSize;
- (void)updateContentContainerInset;
- (double)contentContainerTopInsetForExpandContent:(_Bool)arg1;
- (id)foldString;
- (void)resetShrinkAnimator;
- (double)expandAnimationDuration;
- (void)shrinkContentAnimated:(_Bool)arg1;
- (void)resetExpand;
- (void)expandContentAnimated:(_Bool)arg1 coordinatingDragDown:(_Bool)arg2;
- (_Bool)trySetExpandContent:(_Bool)arg1;
- (void)setExpandContent:(_Bool)arg1 animated:(_Bool)arg2 coordinatingDragDown:(_Bool)arg3;
- (void)expandContentCoordinateWithDragDown;
- (void)setExpandContent:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isExpandContent) _Bool expandContent; // @synthesize expandContent=_expandContent;
- (void)toggleExpandContent;
- (_Bool)enableExpandContent;
- (void)setShowResendWhenPublishFailed:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)initFooterView;
- (void)initContentContainerView;
- (void)initBackgroundView;
- (void)initSubviews;
- (void)dealloc;
- (void)hideDoubleTapFavoriteGuideIfNeeded;
- (void)showDoubleTapFavoriteGuide;
- (id)getDoubleTapFavoriteGuideView;
- (void)showDoubleTapFavoriteGuideIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


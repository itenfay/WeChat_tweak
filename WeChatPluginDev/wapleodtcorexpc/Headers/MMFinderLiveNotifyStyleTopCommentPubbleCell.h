//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveNotifyStyleTopCommentPubbleSignLabelContainer, UIScrollView, UIView;

@interface MMFinderLiveNotifyStyleTopCommentPubbleCell
{
    UIScrollView *_commentScrollView;
    MMFinderLiveNotifyStyleTopCommentPubbleSignLabelContainer *_labelContainer;
    UIView *_scrollViewContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *scrollViewContainerView; // @synthesize scrollViewContainerView=_scrollViewContainerView;
@property(retain, nonatomic) MMFinderLiveNotifyStyleTopCommentPubbleSignLabelContainer *labelContainer; // @synthesize labelContainer=_labelContainer;
@property(retain, nonatomic) UIScrollView *commentScrollView; // @synthesize commentScrollView=_commentScrollView;
- (_Bool)isLiveAnchorNotice;
- (id)createGradientLayer;
- (void)layoutLabelContainer;
- (void)updateNickLabelOrigin;
- (void)layoutNickLabel;
- (void)updateCommentLabelOrigin;
- (double)getFirstLineBottom;
- (void)layoutScrollViewAndCommentLabel;
- (void)layoutSubviews;
- (id)initWithCellFrame:(id)arg1;

@end


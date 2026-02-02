//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, UIView, WCListFeedVideoThumbView;

@interface WCListFeedCellView
{
    UIView *m_tailView;
    UILabel *_finderPureTextLabel;
    WCListFeedVideoThumbView *_videoThumbView;
}

+ (id)trimDescWithDataItem:(id)arg1;
+ (id)titleWithDataItem:(id)arg1;
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(_Bool)arg4 isLastOneInSection:(_Bool)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) WCListFeedVideoThumbView *videoThumbView; // @synthesize videoThumbView=_videoThumbView;
@property(retain, nonatomic) UILabel *finderPureTextLabel; // @synthesize finderPureTextLabel=_finderPureTextLabel;
- (id)customAccessibilityComponents;
- (void)updateAccessibility;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)onClickEvent;
- (void)prepareReuse;
- (id)trimDesc;
- (id)titleText;
- (void)initView;
- (void)initTailView;
- (double)tailViewHeight;
- (double)maxLabelWidth;

@end


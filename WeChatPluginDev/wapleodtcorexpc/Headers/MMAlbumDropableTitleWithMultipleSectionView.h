//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OrderedDictionary, UIView;
@protocol MMAlbumDropableTitleWithMultipleSectionViewDelegate;

@interface MMAlbumDropableTitleWithMultipleSectionView
{
    id <MMAlbumDropableTitleWithMultipleSectionViewDelegate> _titleViewDelegate;
    OrderedDictionary *_sectionViews;
    UIView *_sliderView;
    unsigned long long _selectingIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectingIndex; // @synthesize selectingIndex=_selectingIndex;
@property(retain, nonatomic) UIView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) OrderedDictionary *sectionViews; // @synthesize sectionViews=_sectionViews;
@property(nonatomic) __weak id <MMAlbumDropableTitleWithMultipleSectionViewDelegate> titleViewDelegate; // @synthesize titleViewDelegate=_titleViewDelegate;
- (void)onTapSectionCell:(id)arg1;
- (void)onDropableTitleViewSizeChanged:(id)arg1;
- (void)onClickDropableTitleView:(id)arg1;
- (void)performSlidesToNewSection:(unsigned long long)arg1 needNotifyScrollView:(_Bool)arg2;
- (void)performDeactiveCurrentSection;
- (void)switchToSection:(unsigned long long)arg1 needNotifyScrollView:(_Bool)arg2;
- (void)onSlidingEndsToIndex:(unsigned long long)arg1;
- (void)onSlidingWithProgress:(double)arg1;
- (id)getAlbumTitleView;
- (void)layoutSubviews;
- (void)layoutSections;
- (_Bool)isAccessibilityElement;
- (void)initViewsWithSections:(id)arg1;
- (id)initWithSections:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


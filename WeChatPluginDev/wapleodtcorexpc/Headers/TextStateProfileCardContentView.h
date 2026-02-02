//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TextStateSectionView, UIView;
@protocol TextStateProfileCardContentViewDelegate;

@interface TextStateProfileCardContentView
{
    _Bool _showSameFriendDescription;
    _Bool _needsCreateOrUpdateLayout;
    unsigned int _footerComponents;
    NSString *_backgroundAccessibilityLabel;
    double _bottomPadding;
    UIView *_backgroundView;
    UIView *_topSeparator;
    TextStateSectionView *_footerView;
    UIView *_iconSourceSeparator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needsCreateOrUpdateLayout; // @synthesize needsCreateOrUpdateLayout=_needsCreateOrUpdateLayout;
@property(retain, nonatomic) UIView *iconSourceSeparator; // @synthesize iconSourceSeparator=_iconSourceSeparator;
@property(retain, nonatomic) TextStateSectionView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(retain, nonatomic) NSString *backgroundAccessibilityLabel; // @synthesize backgroundAccessibilityLabel=_backgroundAccessibilityLabel;
@property(nonatomic) _Bool showSameFriendDescription; // @synthesize showSameFriendDescription=_showSameFriendDescription;
@property(nonatomic) unsigned int footerComponents; // @synthesize footerComponents=_footerComponents;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)createOrUpdateLayoutWithoutApply;
- (void)updateSeparator;
- (void)createOrUpdateLayout;
- (void)updateIconButton;
- (void)updateFooterViewAndLayout;
- (void)createOrUpdateLayoutIfNeeded;
- (void)setNeedsCreateOrUpdateLayout;
- (void)shouldUpdateLayout;
- (void)onContentUpdate;
- (_Bool)shouldHideDefaultSourceView;
- (void)setShowResendWhenPublishFailed:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (double)heightForWidth:(double)arg1;
- (void)initFooterView;
- (void)initTopSeparator;
- (void)initBackgroundView;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <TextStateProfileCardContentViewDelegate> delegate; // @dynamic delegate;

@end


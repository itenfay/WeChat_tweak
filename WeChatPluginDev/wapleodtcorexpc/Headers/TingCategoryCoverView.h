//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMListenCategoryItem, MMLiveGradientLayerView, MMUILabel, MMWebImageView, NSString, TingCoverInfo, TingPAGCoverController, TingPAGImageView, TingPagCoverView, UIImageView;
@protocol TingCategoryCoverViewDelegate;

@interface TingCategoryCoverView : UIView
{
    _Bool _callbackOnMainThread;
    _Bool _isAuthorHeadImgHidden;
    TingCoverInfo *_coverInfo;
    id <TingCategoryCoverViewDelegate> _delegate;
    MMListenCategoryItem *_sourceCategoryItem;
    MMLiveGradientLayerView *_backgroundView;
    UIView *_contentView;
    MMWebImageView *_commonCoverView;
    TingPagCoverView *_pagCoverView;
    UIView *_highlightedMaskView;
    MMWebImageView *_authorIconView;
    UIView *_authorIconContainerView;
    UIImageView *_iconView;
    UIImageView *_pagIconView;
    UIView *_styleCoverBgView;
    MMWebImageView *_styleCoverView;
    MMUILabel *_masterTitle;
    UIImageView *_representIconView;
    TingPAGCoverController *_pagCoverController;
    TingPAGImageView *_pagCoverImageView;
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAuthorHeadImgHidden; // @synthesize isAuthorHeadImgHidden=_isAuthorHeadImgHidden;
@property(retain, nonatomic) TingPAGImageView *pagCoverImageView; // @synthesize pagCoverImageView=_pagCoverImageView;
@property(retain, nonatomic) TingPAGCoverController *pagCoverController; // @synthesize pagCoverController=_pagCoverController;
@property(retain, nonatomic) UIImageView *representIconView; // @synthesize representIconView=_representIconView;
@property(retain, nonatomic) MMUILabel *masterTitle; // @synthesize masterTitle=_masterTitle;
@property(retain, nonatomic) MMWebImageView *styleCoverView; // @synthesize styleCoverView=_styleCoverView;
@property(retain, nonatomic) UIView *styleCoverBgView; // @synthesize styleCoverBgView=_styleCoverBgView;
@property(retain, nonatomic) UIImageView *pagIconView; // @synthesize pagIconView=_pagIconView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *authorIconContainerView; // @synthesize authorIconContainerView=_authorIconContainerView;
@property(retain, nonatomic) MMWebImageView *authorIconView; // @synthesize authorIconView=_authorIconView;
@property(retain, nonatomic) UIView *highlightedMaskView; // @synthesize highlightedMaskView=_highlightedMaskView;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) TingPagCoverView *pagCoverView; // @synthesize pagCoverView=_pagCoverView;
@property(retain, nonatomic) MMWebImageView *commonCoverView; // @synthesize commonCoverView=_commonCoverView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMLiveGradientLayerView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMListenCategoryItem *sourceCategoryItem; // @synthesize sourceCategoryItem=_sourceCategoryItem;
@property(nonatomic) _Bool callbackOnMainThread; // @synthesize callbackOnMainThread=_callbackOnMainThread;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) __weak id <TingCategoryCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TingCoverInfo *coverInfo; // @synthesize coverInfo=_coverInfo;
- (void)pagController:(id)arg1 didLoadImage:(id)arg2 index:(unsigned long long)arg3;
- (void)onLoadImageOK:(id)arg1;
- (void)_updateBackgroundWithImage:(id)arg1;
- (void)updateBackgroundWithImage:(id)arg1;
- (void)resetDefaultBackground;
- (void)setIconHidden:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (id)getPAGIconImage;
- (id)getIconViewImage;
- (_Bool)shouldShowIconView;
- (void)displayWithCoverStyle;
- (void)initPAGFileIfNeed;
- (void)updateWithCoverInfo:(id)arg1;
- (void)updateWithCoverController:(id)arg1;
- (void)updateWithCategoryItem:(id)arg1;
- (void)updateWithUrl:(id)arg1;
- (void)updateWithImage:(id)arg1;
- (void)initBackgroundColors;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initPagCoverImageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)iconWidth;
- (id)iconImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


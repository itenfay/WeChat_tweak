//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, NSString, UIImageView, UILabel, UIView, WAAppItemData;

@interface WAMainFrameTaskBarSectionWeAppCell : UICollectionViewCell
{
    _Bool _isShowAsMore;
    _Bool _darkStyle;
    _Bool _isMoving;
    _Bool _forbidLoadImage;
    MMWebImageView *_headImageView;
    UILabel *_nickNameLabel;
    UILabel *_debugLabel;
    UIView *_highlightMaskView;
    UIImageView *_fromOuterTagView;
    WAAppItemData *_taskItem;
    NSString *_headImageUrl;
}

+ (id)getDisplayName:(id)arg1;
+ (double)getNameLabelToHeadImageMargin;
+ (double)getMoreIconWidth;
+ (double)getHeaderWidth;
+ (double)itemInnerMargin;
+ (double)itemHeight:(id)arg1;
+ (double)itemWidth;
+ (double)itemSizeFactor;
+ (struct CGSize)viewSizeByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) WAAppItemData *taskItem; // @synthesize taskItem=_taskItem;
@property(retain, nonatomic) UIImageView *fromOuterTagView; // @synthesize fromOuterTagView=_fromOuterTagView;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(nonatomic) _Bool forbidLoadImage; // @synthesize forbidLoadImage=_forbidLoadImage;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) _Bool darkStyle; // @synthesize darkStyle=_darkStyle;
@property(nonatomic) _Bool isShowAsMore; // @synthesize isShowAsMore=_isShowAsMore;
- (void)onModifyWeAppContact:(id)arg1;
- (void)onContactUpdate:(id)arg1;
- (void)layoutSubviews;
- (void)initData;
- (void)setAlpha:(double)arg1;
- (void)setTitleColor:(id)arg1;
- (void)initView;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)showHighlight:(_Bool)arg1;
- (id)getCurrentTaskItem;
- (id)getDragView;
- (void)updateTaskItem:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (void)setViewDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, MMLiteAppView, UIView, _TtC6WeChat19WSFlowListCellModel;

@interface _TtC6WeChat21WSFlowListLiteAppCell
{
    MISSING_TYPE *contentViewMarginLeftRight;
    MISSING_TYPE *contentViewMarginTop;
    MISSING_TYPE *contentViewMarginBottom;
    MISSING_TYPE *model;
    MISSING_TYPE *contentContainerView;
    MISSING_TYPE *liteAppView;
    MISSING_TYPE *isRenderFinish;
    MISSING_TYPE *indexInList;
    MISSING_TYPE *isActive;
    MISSING_TYPE *contentContainerIndicatorView;
    MISSING_TYPE *liteAppSnapshotView;
    MISSING_TYPE *footerView;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)clearCell;
- (void)removeSnapshot;
- (void)setSnapshotWithImageView:(id)arg1;
- (void)removeLiteAppView;
- (void)addLiteAppViewWithLiteAppView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool isActive; // @synthesize isActive;
@property(nonatomic) long long indexInList; // @synthesize indexInList;
@property(nonatomic) _Bool isRenderFinish; // @synthesize isRenderFinish;
@property(nonatomic, retain) MMLiteAppView *liteAppView; // @synthesize liteAppView;
@property(nonatomic, retain) UIView *contentContainerView; // @synthesize contentContainerView;
@property(nonatomic, retain) _TtC6WeChat19WSFlowListCellModel *model; // @synthesize model;

@end


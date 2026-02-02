//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMWebImageView, SightIconView, UILabel, UIView;

@interface WAMainFrameTaskBarSectionMyWeAppView
{
    UIView *_dragMaskView;
    CAShapeLayer *_maskBorder;
    UIView *_dragAddIcon;
    UILabel *_dragLabel;
    MMWebImageView *_moreWeAppIcon;
    _Bool _isInArea;
    _Bool _isLastInsertToMore;
    _Bool _isLoading;
    SightIconView *_loadingView;
}

+ (double)totalCellHeight:(id)arg1 maxShowCount:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) SightIconView *loadingView; // @synthesize loadingView=_loadingView;
- (void)initLoadingView;
- (void)stopLoading;
- (void)startLoading;
- (void)updateTitle;
- (void)handleClickSearch;
- (void)handleClickUnStar;
- (void)deleteToSection;
- (_Bool)isPointInDragArea:(struct CGPoint)arg1;
- (_Bool)notifyViewDragTo:(struct CGPoint)arg1;
- (void)notifyDragStateChange:(_Bool)arg1;
- (void)notifyItemRemoved:(id)arg1 arrMyWeAppItemWhenShowCommonUse:(id)arg2;
- (void)notifyItemInserted:(long long)arg1 newItems:(id)arg2 arrMyWeAppItemWhenShowCommonUse:(id)arg3;
- (void)showTipsViewController:(id)arg1;
- (_Bool)isInStarList:(id)arg1;
- (void)onLongPress:(id)arg1;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (void)onClickMore;
- (id)moreIconWeAppUsername;
- (void)setWeAppMoreIcon:(id)arg1;
- (struct CGPoint)getWeAppMoreIconPos;
- (void)prepareForReuse;
- (void)layoutDragLabel;
- (void)commonLayoutTopRightArea;
- (void)layoutSubviews;
- (id)moreTitle;
- (id)title;
- (void)initView;

@end


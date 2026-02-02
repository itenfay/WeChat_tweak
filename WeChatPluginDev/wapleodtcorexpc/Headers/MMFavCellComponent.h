//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavMultiMenuTableViewCell, FavoritesItem, MMFavBaselineComponent, MMFavBigImageFieldComponent, MMFavImageComponent, MMFavTextComponent, MMUIImageView, NSString, UIView;
@protocol MMFavCellComponentDelegate;

@interface MMFavCellComponent
{
    MMUIImageView *m_selectedView;
    MMUIImageView *m_deselectedView;
    MMFavBaselineComponent *m_baselineCom;
    MMFavImageComponent *m_imageCom;
    MMFavTextComponent *m_textCom;
    MMFavBigImageFieldComponent *m_bigImageFieldCom;
    UIView *m_contentView;
    _Bool m_editing;
    _Bool m_bShorten;
    FavoritesItem *_favItem;
    id <MMFavCellComponentDelegate> _delegate;
    FavMultiMenuTableViewCell *_parentCellView;
}

+ (double)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak FavMultiMenuTableViewCell *parentCellView; // @synthesize parentCellView=_parentCellView;
@property(nonatomic) __weak id <MMFavCellComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
- (void)layoutSubviewsAfterChangeContentX:(double)arg1;
- (void)onClickPurgeSelectBtn:(id)arg1;
- (void)onClickPurgeBtn:(id)arg1;
- (void)layoutPurgeBtn:(id)arg1 offsetX:(double)arg2;
- (void)configFavCell;
- (void)onClickDetailBtn:(id)arg1;
- (void)configTextComponent;
- (void)configImageComponent;
- (void)configBaselineComponent;
- (_Bool)enableTingListMode;
- (void)favMusicBeignToPlay:(id)arg1;
- (id)getCdnImgView;
- (id)getThumbImageView;
- (id)getThumbComponent;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)changeEditingStatus:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isPurgeStyle;
- (_Bool)hasSelectedState;
- (void)changeSelectStatu:(_Bool)arg1;
- (void)configSelectViewWith:(id)arg1 offsetX:(double)arg2 isAccessibilityElement:(_Bool)arg3;
- (unsigned long long)cellStyle;
- (void)configContentLayout;
- (_Bool)isPadStyle;
- (void)setHighlightContent:(id)arg1 Keywords:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


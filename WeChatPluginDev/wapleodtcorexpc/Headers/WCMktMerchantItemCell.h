//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CardHomePageElement, MMUILabel, NSString, UIButton, UIImageView, UIView, UrlLabel, WCMktCardItemView, WCPayWebImageView;
@protocol WCMktMerchantItemCellDelegate;

@interface WCMktMerchantItemCell
{
    _Bool _bIsExpandCardList;
    _Bool _bIsLastItem;
    id <WCMktMerchantItemCellDelegate> _delegate;
    CardHomePageElement *_elemData;
    WCPayWebImageView *_merchatLogoImgView;
    UIImageView *_arrowImgView;
    UrlLabel *_merchatNameLabel;
    MMUILabel *_tradeRelationLabel;
    UIView *_merchatTagListView;
    UIButton *_mchActTagBtn;
    WCMktCardItemView *_cardItemView;
    UIButton *_expandBtn;
    UIView *_sepBarView;
    UIButton *_merchantAreaBtn;
}

+ (double)calcCellHeightWithMerchantData:(id)arg1 isExpandCardList:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *merchantAreaBtn; // @synthesize merchantAreaBtn=_merchantAreaBtn;
@property(retain, nonatomic) UIView *sepBarView; // @synthesize sepBarView=_sepBarView;
@property(retain, nonatomic) UIButton *expandBtn; // @synthesize expandBtn=_expandBtn;
@property(retain, nonatomic) WCMktCardItemView *cardItemView; // @synthesize cardItemView=_cardItemView;
@property(retain, nonatomic) UIButton *mchActTagBtn; // @synthesize mchActTagBtn=_mchActTagBtn;
@property(retain, nonatomic) UIView *merchatTagListView; // @synthesize merchatTagListView=_merchatTagListView;
@property(retain, nonatomic) MMUILabel *tradeRelationLabel; // @synthesize tradeRelationLabel=_tradeRelationLabel;
@property(retain, nonatomic) UrlLabel *merchatNameLabel; // @synthesize merchatNameLabel=_merchatNameLabel;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) WCPayWebImageView *merchatLogoImgView; // @synthesize merchatLogoImgView=_merchatLogoImgView;
@property(nonatomic) _Bool bIsLastItem; // @synthesize bIsLastItem=_bIsLastItem;
@property(nonatomic) _Bool bIsExpandCardList; // @synthesize bIsExpandCardList=_bIsExpandCardList;
@property(retain, nonatomic) CardHomePageElement *elemData; // @synthesize elemData=_elemData;
@property(nonatomic) __weak id <WCMktMerchantItemCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onCardItemViewClickCardWithCardID:(id)arg1 cardIndex:(unsigned int)arg2;
- (void)onCardItemViewClickTagBtnToOpenTinyApp:(id)arg1;
- (void)onMerchantAreaBtnClick;
- (void)expandBtnClick:(id)arg1;
- (id)genTagButtonWithElemMchLabelData:(id)arg1;
- (void)updateTagButtonWithElemMchLabelData:(id)arg1 tagBtn:(id)arg2;
- (void)updateContentWithData:(id)arg1 isExpandCardList:(_Bool)arg2 bIsLastItem:(_Bool)arg3;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


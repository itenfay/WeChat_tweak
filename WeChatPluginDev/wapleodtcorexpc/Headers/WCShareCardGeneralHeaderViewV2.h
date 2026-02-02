//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer, MMUIButton, MMUILabel, MMUIView, MMWebImageView, NSMutableArray, NSString, UIImage, UIImageView, WCShareCardJumpToFinderView;
@protocol WCShareCardGeneralCardHeaderV2Delegate;

@interface WCShareCardGeneralHeaderViewV2
{
    _Bool _bIsGiftFromUserHeaderView;
    int _cardType;
    id <WCShareCardGeneralCardHeaderV2Delegate> _delegate;
    MMUIView *_contentView;
    MMUILabel *_titleLabel;
    double _viewWidth;
    UIImageView *_cardQRImgView;
    NSMutableArray *_textLabelArray;
    NSMutableArray *_textArray;
    MMUILabel *_detailLabel;
    MMUIView *_headerTopHorizontalUIView;
    MMUILabel *_subTitleLabel;
    MMWebImageView *_headImageView;
    MMWebImageView *_certifiedIconImageView;
    WCShareCardJumpToFinderView *_jumpToFinderView;
    MMUIView *_lineView;
    MMUIButton *_shareCardImageUIView;
    MMWebImageView *_shareCardImageView;
    MMWebImageView *_shareCardPlayVideoImageView;
    MMUIView *_conditionView;
    MMUIView *_backView;
    CALayer *_maskLayer;
    UIImage *_disableBgImg;
    MMUILabel *_displaySubTitleLabel;
    MMUILabel *_displayAuxTitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *displayAuxTitleLabel; // @synthesize displayAuxTitleLabel=_displayAuxTitleLabel;
@property(retain, nonatomic) MMUILabel *displaySubTitleLabel; // @synthesize displaySubTitleLabel=_displaySubTitleLabel;
@property(retain, nonatomic) UIImage *disableBgImg; // @synthesize disableBgImg=_disableBgImg;
@property(nonatomic) _Bool bIsGiftFromUserHeaderView; // @synthesize bIsGiftFromUserHeaderView=_bIsGiftFromUserHeaderView;
@property(nonatomic) int cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) MMUIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) MMUIView *conditionView; // @synthesize conditionView=_conditionView;
@property(retain, nonatomic) MMWebImageView *shareCardPlayVideoImageView; // @synthesize shareCardPlayVideoImageView=_shareCardPlayVideoImageView;
@property(retain, nonatomic) MMWebImageView *shareCardImageView; // @synthesize shareCardImageView=_shareCardImageView;
@property(retain, nonatomic) MMUIButton *shareCardImageUIView; // @synthesize shareCardImageUIView=_shareCardImageUIView;
@property(retain, nonatomic) MMUIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) WCShareCardJumpToFinderView *jumpToFinderView; // @synthesize jumpToFinderView=_jumpToFinderView;
@property(retain, nonatomic) MMWebImageView *certifiedIconImageView; // @synthesize certifiedIconImageView=_certifiedIconImageView;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUIView *headerTopHorizontalUIView; // @synthesize headerTopHorizontalUIView=_headerTopHorizontalUIView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) NSMutableArray *textArray; // @synthesize textArray=_textArray;
@property(retain, nonatomic) NSMutableArray *textLabelArray; // @synthesize textLabelArray=_textLabelArray;
@property(nonatomic) UIImageView *cardQRImgView; // @synthesize cardQRImgView=_cardQRImgView;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCShareCardGeneralCardHeaderV2Delegate> delegate; // @synthesize delegate=_delegate;
- (double)headImgLen;
- (id)getVailDateStr;
- (_Bool)hasJumpToFinder;
- (_Bool)hasHeadImage;
- (_Bool)hasCertifiedIcon;
- (_Bool)hasFeedField;
- (id)getTitleName;
- (id)getSubTitleName;
- (void)singleSureButtonDidSelected;
- (double)calcUsedConditionHeight;
- (_Bool)shouldShowConditionView;
- (void)onCardImgBtnClick:(id)arg1;
- (void)onWCShareCardJumpToFinderButtonClick;
- (void)setAccessibilityLabelToView:(id)arg1 fieldItem:(id)arg2;
- (void)updateHeaderTopHorizontalUIView;
- (double)viewHeight;
- (void)layoutSubviews;
- (void)confiUIByData;
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 isGiftFromUserHeaderView:(_Bool)arg3 isShareCard:(_Bool)arg4 cardStatus:(int)arg5 isNeedHideAccecptBtn:(_Bool)arg6 delegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


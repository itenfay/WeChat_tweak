//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class HbEnvelopSource, NSString, UIImageView, UILabel, UIView, WCRedEnvelopesReceiveHomeTemplateItem, WCRedEnvelopesReceiveHomeTemplateView;

@interface WCRedEnvelopesPromotionCollectionViewCell : UICollectionViewCell
{
    _Bool _isSkinSelected;
    _Bool _isSmallPicMode;
    UIView *_promotionCellBackgroundView;
    UIView *_borderView;
    WCRedEnvelopesReceiveHomeTemplateView *_templateItemView;
    UILabel *_corporationLabel;
    UILabel *_corporationLabel2;
    UILabel *_promotionWordingLabel;
    HbEnvelopSource *_hbShowResource;
    WCRedEnvelopesReceiveHomeTemplateItem *_templateItem;
    UIImageView *_backgroundImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) _Bool isSmallPicMode; // @synthesize isSmallPicMode=_isSmallPicMode;
@property(nonatomic) _Bool isSkinSelected; // @synthesize isSkinSelected=_isSkinSelected;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateItem *templateItem; // @synthesize templateItem=_templateItem;
@property(retain, nonatomic) HbEnvelopSource *hbShowResource; // @synthesize hbShowResource=_hbShowResource;
@property(retain, nonatomic) UILabel *promotionWordingLabel; // @synthesize promotionWordingLabel=_promotionWordingLabel;
@property(retain, nonatomic) UILabel *corporationLabel2; // @synthesize corporationLabel2=_corporationLabel2;
@property(retain, nonatomic) UILabel *corporationLabel; // @synthesize corporationLabel=_corporationLabel;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateView *templateItemView; // @synthesize templateItemView=_templateItemView;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *promotionCellBackgroundView; // @synthesize promotionCellBackgroundView=_promotionCellBackgroundView;
- (void)startDoneAnimation;
- (void)setPromotionCellSelected:(_Bool)arg1;
- (void)updateCellData:(id)arg1;
- (void)updateCellData:(id)arg1 isSmallPicMode:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateBackgroundView;
- (void)updateView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


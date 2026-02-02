//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class HbEnvelopSource, MMUIActivityIndicatorView, NSString, UIButton, UIImage, UIImageView, UILabel, UIView, WCRedEnvelopesReceiveHomeTemplateItem, WCRedEnvelopesReceiveHomeTemplateView;
@protocol WCRedEnvelopesSelectSkinCollectionViewCellDelegate;

@interface WCRedEnvelopesSelectSkinCollectionViewCell : UICollectionViewCell
{
    _Bool _isSkinSelected;
    _Bool _isDisabled;
    _Bool _isSmallMode;
    _Bool _isLeft;
    id <WCRedEnvelopesSelectSkinCollectionViewCellDelegate> _m_delegate;
    UIView *_skinBackgroundView;
    UIImageView *_templateView;
    UILabel *_corporationLabel;
    UIImageView *_selectedImageView;
    UILabel *_selectLabel;
    UILabel *_overtimeLabel;
    UIButton *_selectButton;
    unsigned long long _cellType;
    WCRedEnvelopesReceiveHomeTemplateItem *_templateItem;
    HbEnvelopSource *_hbShowResource;
    UIImage *_skinImage;
    UIView *_downloadImageStatusMaskView;
    MMUIActivityIndicatorView *_imageDownloadingView;
    WCRedEnvelopesReceiveHomeTemplateView *_templateItemView;
    UIView *_borderView;
    unsigned long long _viewStatus;
    UIImageView *_reloadImageView;
    UILabel *_tryReloadImageLabel;
    UILabel *_descriptLabel;
    UIView *_rightUpTagView;
    UILabel *_expiredTimeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *expiredTimeLabel; // @synthesize expiredTimeLabel=_expiredTimeLabel;
@property(retain, nonatomic) UIView *rightUpTagView; // @synthesize rightUpTagView=_rightUpTagView;
@property(retain, nonatomic) UILabel *descriptLabel; // @synthesize descriptLabel=_descriptLabel;
@property(retain, nonatomic) UILabel *tryReloadImageLabel; // @synthesize tryReloadImageLabel=_tryReloadImageLabel;
@property(retain, nonatomic) UIImageView *reloadImageView; // @synthesize reloadImageView=_reloadImageView;
@property(nonatomic) unsigned long long viewStatus; // @synthesize viewStatus=_viewStatus;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateView *templateItemView; // @synthesize templateItemView=_templateItemView;
@property(retain, nonatomic) MMUIActivityIndicatorView *imageDownloadingView; // @synthesize imageDownloadingView=_imageDownloadingView;
@property(retain, nonatomic) UIView *downloadImageStatusMaskView; // @synthesize downloadImageStatusMaskView=_downloadImageStatusMaskView;
@property(retain, nonatomic) UIImage *skinImage; // @synthesize skinImage=_skinImage;
@property(retain, nonatomic) HbEnvelopSource *hbShowResource; // @synthesize hbShowResource=_hbShowResource;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateItem *templateItem; // @synthesize templateItem=_templateItem;
@property(nonatomic) _Bool isLeft; // @synthesize isLeft=_isLeft;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) _Bool isSmallMode; // @synthesize isSmallMode=_isSmallMode;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) _Bool isSkinSelected; // @synthesize isSkinSelected=_isSkinSelected;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) UILabel *overtimeLabel; // @synthesize overtimeLabel=_overtimeLabel;
@property(retain, nonatomic) UILabel *selectLabel; // @synthesize selectLabel=_selectLabel;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UILabel *corporationLabel; // @synthesize corporationLabel=_corporationLabel;
@property(retain, nonatomic) UIImageView *templateView; // @synthesize templateView=_templateView;
@property(retain, nonatomic) UIView *skinBackgroundView; // @synthesize skinBackgroundView=_skinBackgroundView;
@property(nonatomic) __weak id <WCRedEnvelopesSelectSkinCollectionViewCellDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)stopPag;
- (void)playPag;
- (void)updateMaskView;
- (void)skinImageDownloadFail;
- (void)skinImageDownloadOK;
- (double)onelineHeight:(id)arg1;
- (void)updateExpiredSkinBackgroundView;
- (void)updateExpireView;
- (void)updateSmallSelectSkinCellView;
- (void)updateExpiredSkinCellData:(id)arg1;
- (void)updateSmallSelectSkinCellData:(id)arg1;
- (id)getTemplateItemData:(id)arg1;
- (void)updateCellData:(id)arg1;
- (void)setSkinSelected:(_Bool)arg1;
- (_Bool)canTouch;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateBackgroundView;
- (void)updateView;
- (void)layoutSubviews;
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


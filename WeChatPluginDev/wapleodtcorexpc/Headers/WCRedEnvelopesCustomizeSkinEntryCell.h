//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class HbEnvelopSource, MMUILabel, UIButton, UIImageView, UIView;
@protocol WCRedEnvelopesCustomizeSkinEntryCellDelegate;

@interface WCRedEnvelopesCustomizeSkinEntryCell : UICollectionViewCell
{
    _Bool _isSmallPicMode;
    id <WCRedEnvelopesCustomizeSkinEntryCellDelegate> _delegate;
    HbEnvelopSource *_viewData;
    UIView *_contentBkgView;
    UIView *_borderView;
    UIImageView *_iconImgView;
    MMUILabel *_titleLabel;
    UIImageView *_arrowImgView;
    UIButton *_titleButton;
    MMUILabel *_descLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSmallPicMode; // @synthesize isSmallPicMode=_isSmallPicMode;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *contentBkgView; // @synthesize contentBkgView=_contentBkgView;
@property(retain, nonatomic) HbEnvelopSource *viewData; // @synthesize viewData=_viewData;
@property(nonatomic) __weak id <WCRedEnvelopesCustomizeSkinEntryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)titleEntryButtonTouchUp;
- (void)titleEntryButtonTouchDown;
- (void)titleEntryButtonClick;
- (void)setupContentView;
- (void)layoutSubviews;
- (void)updateCellData:(id)arg1 delegate:(id)arg2 isSmallPicMode:(_Bool)arg3;
- (void)updateCellData:(id)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


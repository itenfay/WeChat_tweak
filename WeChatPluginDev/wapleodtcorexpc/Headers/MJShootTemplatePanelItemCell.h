//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MJCircleProgressView, MMCameraTemplateItem, MMWebImageView, UILabel, UIView;

@interface MJShootTemplatePanelItemCell : UICollectionViewCell
{
    _Bool _isCellSelected;
    UILabel *_versionLabel;
    UILabel *_titleLabel;
    MMWebImageView *_iconImageView;
    UIView *_borderView;
    UIView *_progressBGView;
    MJCircleProgressView *_progressView;
    MMCameraTemplateItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCameraTemplateItem *item; // @synthesize item=_item;
@property(retain, nonatomic) MJCircleProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *progressBGView; // @synthesize progressBGView=_progressBGView;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) _Bool isCellSelected; // @synthesize isCellSelected=_isCellSelected;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *versionLabel; // @synthesize versionLabel=_versionLabel;
- (void)removeLoadingUI;
- (void)showLoadingUI;
- (void)setDownloadingProgress:(float)arg1;
- (void)configCellWithItem:(id)arg1;
- (void)layoutViews;
- (void)setupViews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


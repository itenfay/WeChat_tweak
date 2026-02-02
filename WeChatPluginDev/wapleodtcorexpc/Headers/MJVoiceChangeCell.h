//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MJVoiceItem, MMUIActivityIndicatorView, MMWebImageView, UIControl, UILabel, UIView;
@protocol MJVoiceChangeCellDelegate;

@interface MJVoiceChangeCell : UICollectionViewCell
{
    _Bool _isCellSelected;
    id <MJVoiceChangeCellDelegate> _delegate;
    UILabel *_titleLabel;
    MJVoiceItem *_item;
    MMWebImageView *_iconImageView;
    UIView *_maskView;
    UIView *_iconContainerView;
    MMUIActivityIndicatorView *_loadingView;
    UIControl *_deleteCloneRoleControl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIControl *deleteCloneRoleControl; // @synthesize deleteCloneRoleControl=_deleteCloneRoleControl;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool isCellSelected; // @synthesize isCellSelected=_isCellSelected;
@property(readonly, nonatomic) MJVoiceItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MJVoiceChangeCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteCloneRoleControlDidTap:(id)arg1;
- (void)syncWithStatus;
- (void)setupWithItem:(id)arg1;
- (void)prepareForReuse;
- (void)retryButtonDidTouchUpInside;
- (void)setupMaskViewWithRetryStyle;
- (void)setupMaskViewWithLoadingStyle;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, MMWebImageView, UIButton, UIImageView, UIView;
@protocol MMToolManageTableViewCellDelegate;

@interface MMToolManageTableViewCell : UITableViewCell
{
    _Bool _isAdded;
    id <MMToolManageTableViewCellDelegate> _delegate;
    UIView *_bottomView;
    UIButton *_editButton;
    UIImageView *_reorderButton;
    MMWebImageView *_iconImageView;
    MMUILabel *_nameLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAdded; // @synthesize isAdded=_isAdded;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *reorderButton; // @synthesize reorderButton=_reorderButton;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak id <MMToolManageTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)onAccessibilityCustomAction:(id)arg1;
- (_Bool)isTouchAtResortButton:(struct CGPoint)arg1;
- (void)configueCell:(id)arg1 isAdded:(_Bool)arg2 canUp:(_Bool)arg3 canDown:(_Bool)arg4;
- (void)configueCell:(id)arg1 isAdded:(_Bool)arg2;
- (void)onClickEdit;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


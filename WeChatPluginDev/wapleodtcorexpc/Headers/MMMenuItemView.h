//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class MMMenuItem, NSString, UIImageView, UILabel;
@protocol MMMenuItemViewDelegate;

@interface MMMenuItemView : UIButton
{
    _Bool _isShow;
    id <MMMenuItemViewDelegate> _delegate;
    MMMenuItem *_menuItem;
    UIImageView *_iconImageView;
    UILabel *_textLabel;
    UILabel *_menuSubtitleLabel;
    double _leftPadding;
    double _rightPadding;
}

- (void).cxx_destruct;
@property(nonatomic) double rightPadding; // @synthesize rightPadding=_rightPadding;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) UILabel *menuSubtitleLabel; // @synthesize menuSubtitleLabel=_menuSubtitleLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(nonatomic) __weak id <MMMenuItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getIconImageView;
- (void)onMenuItemAnimatorChange:(id)arg1;
- (void)onMenuItemViewDidShow;
- (void)onItemButtonClick:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithStyle:(long long)arg1;
- (void)updateWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMTemplateMsgScopeItem, MMUIButton, UILabel;
@protocol MMTemplateMsgAuthScopeCellDelegate;

@interface MMTemplateMsgAuthScopeCell : UITableViewCell
{
    MMTemplateMsgScopeItem *_scopeItem;
    id <MMTemplateMsgAuthScopeCellDelegate> _delegate;
    MMUIButton *_checkBoxButton;
    UILabel *_titleLabel;
    MMUIButton *_infoButton;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *checkBoxButton; // @synthesize checkBoxButton=_checkBoxButton;
@property(nonatomic) __weak id <MMTemplateMsgAuthScopeCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onInfoButtonClicked:(id)arg1;
- (void)onCheckBoxButtonClicked:(id)arg1;
- (void)updateScopeItem:(id)arg1;
- (void)layoutSubviews;
- (void)initInfoButton;
- (void)initTitleLabel;
- (void)initCheckBoxView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


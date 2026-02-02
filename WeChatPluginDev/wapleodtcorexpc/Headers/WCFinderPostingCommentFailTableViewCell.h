//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIButton;
@protocol WCFinderPostingCommentFailTableViewCellDelegate;

@interface WCFinderPostingCommentFailTableViewCell : UITableViewCell
{
    _Bool _isInDarkMode;
    id <WCFinderPostingCommentFailTableViewCellDelegate> _delegate;
    UIButton *_backGroundButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *backGroundButton; // @synthesize backGroundButton=_backGroundButton;
@property(nonatomic) _Bool isInDarkMode; // @synthesize isInDarkMode=_isInDarkMode;
@property(nonatomic) __weak id <WCFinderPostingCommentFailTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickButtonAction;
- (void)setupUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


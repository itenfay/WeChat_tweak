//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, MMWebImageView, UIButton, WAContact, YYLabel;
@protocol WAProfileHeaderViewDelegate;

@interface WAProfileHeaderView : UIView
{
    _Bool _showServiceButton;
    id <WAProfileHeaderViewDelegate> _delegate;
    WAContact *_contact;
    MMWebImageView *_avatarView;
    YYLabel *_nameLabel;
    MMUILabel *_descLabel;
    UIButton *_enterButton;
    UIButton *_serviceButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *serviceButton; // @synthesize serviceButton=_serviceButton;
@property(retain, nonatomic) UIButton *enterButton; // @synthesize enterButton=_enterButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) YYLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool showServiceButton; // @synthesize showServiceButton=_showServiceButton;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <WAProfileHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutIfNeeded;
- (void)updateContact:(id)arg1;
- (void)onUnhighlightBorder:(id)arg1;
- (void)onHighlightBorder:(id)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


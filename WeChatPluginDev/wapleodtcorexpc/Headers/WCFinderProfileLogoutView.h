//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol WCFinderProfileLogoutViewDelegate;

@interface WCFinderProfileLogoutView : UIView
{
    _Bool _isLogoutDone;
    id <WCFinderProfileLogoutViewDelegate> _delegate;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIButton *_IKnowButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *IKnowButton; // @synthesize IKnowButton=_IKnowButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool isLogoutDone; // @synthesize isLogoutDone=_isLogoutDone;
@property(nonatomic) __weak id <WCFinderProfileLogoutViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCloseIKnowButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


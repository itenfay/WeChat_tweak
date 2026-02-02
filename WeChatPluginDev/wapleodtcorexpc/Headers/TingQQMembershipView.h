//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UIButton, UIImageView, UILabel;
@protocol TingQQMembershipViewDelegate;

@interface TingQQMembershipView : UIView
{
    UIButton *_actionButton;
    MMUIButton *_wecoinButton;
    id <TingQQMembershipViewDelegate> _delegate;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <TingQQMembershipViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIButton *wecoinButton; // @synthesize wecoinButton=_wecoinButton;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)wecoinButtonClicked:(id)arg1;
- (void)actionButtonClicked:(id)arg1;
- (void)updateDisplayWithTitle:(id)arg1 desc:(id)arg2 btnText:(id)arg3;
- (void)layoutSubviews;
- (void)configLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface TingMembershipResultView : UIView
{
    CDUnknownBlockType _confirmHandler;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType confirmHandler; // @synthesize confirmHandler=_confirmHandler;
- (void)actionButtonClicked:(id)arg1;
- (void)updateDisplayWithIconName:(id)arg1 title:(id)arg2 desc:(id)arg3 btnText:(id)arg4;
- (void)layoutSubviews;
- (void)configLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end


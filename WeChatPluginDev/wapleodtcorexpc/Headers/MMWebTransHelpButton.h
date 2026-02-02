//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UIImageView, UILabel;
@protocol WebTransHelpButtonDelegate;

@interface MMWebTransHelpButton : UIView
{
    id <WebTransHelpButtonDelegate> _delegate;
    UIView *_view;
    MMUIButton *_button;
    UILabel *_label;
    UIImageView *_imageIconView;
    UIImageView *_imageArrowView;
    long long _btnViewStatus;
}

- (void).cxx_destruct;
@property(nonatomic) long long btnViewStatus; // @synthesize btnViewStatus=_btnViewStatus;
@property(retain, nonatomic) UIImageView *imageArrowView; // @synthesize imageArrowView=_imageArrowView;
@property(retain, nonatomic) UIImageView *imageIconView; // @synthesize imageIconView=_imageIconView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MMUIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <WebTransHelpButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)triggerDelegate;
- (void)layoutSubviews;
- (void)setNoteColor;
- (void)setWebColor;
- (void)setMPColor;
- (void)switchToRevertViewWithTitle:(id)arg1;
- (void)switchToRevertView;
- (void)switchToTransView;
- (void)interalInit;
- (id)init;

@end


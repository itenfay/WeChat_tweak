//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;
@protocol WCPayLQTTipsModalDelegate;

@interface WCPayLQTTipsModal : UIView
{
    id <WCPayLQTTipsModalDelegate> _delegate;
    NSString *_title;
    NSString *_content;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_confirmBtn;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCPayLQTTipsModalDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showInView;
- (void)dissmissView;
- (void)onTapConfirm;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 content:(id)arg2 delegate:(id)arg3;

@end


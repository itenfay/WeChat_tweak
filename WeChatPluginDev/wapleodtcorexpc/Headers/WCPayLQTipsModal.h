//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UILabel;
@protocol WCPayLQTipsModalDelegate;

@interface WCPayLQTipsModal : UIView
{
    _Bool _isShowing;
    id <WCPayLQTipsModalDelegate> _delegate;
    NSString *_title;
    NSString *_desc;
    NSArray *_contents;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_contentsView;
    UIButton *_confirmBtn;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIView *contentsView; // @synthesize contentsView=_contentsView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCPayLQTipsModalDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapConfirmBtn;
- (void)dissmissView;
- (void)showInView;
- (void)updateView;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 desc:(id)arg2 contents:(id)arg3;
- (id)initWithTitle:(id)arg1 desc:(id)arg2 contents:(id)arg3;

@end


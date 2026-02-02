//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIColor, UIImage, UIImageView, UILabel;
@protocol WANavAlertTitleViewDelegate;

@interface WANavAlertTitleView : UIView
{
    id <WANavAlertTitleViewDelegate> _delegate;
    UIImageView *_alertIconView;
    UILabel *_alertLabel;
    UIButton *_entryBtn;
    NSString *_waName;
    NSString *_alertTitle;
    UIColor *_normalColor;
    UIColor *_highlightColor;
    UIImage *_normalIcon;
    UIImage *_highlightIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *highlightIcon; // @synthesize highlightIcon=_highlightIcon;
@property(retain, nonatomic) UIImage *normalIcon; // @synthesize normalIcon=_normalIcon;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(retain, nonatomic) NSString *waName; // @synthesize waName=_waName;
@property(retain, nonatomic) UIButton *entryBtn; // @synthesize entryBtn=_entryBtn;
@property(retain, nonatomic) UILabel *alertLabel; // @synthesize alertLabel=_alertLabel;
@property(retain, nonatomic) UIImageView *alertIconView; // @synthesize alertIconView=_alertIconView;
@property(nonatomic) __weak id <WANavAlertTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onEntryBtnClicked:(id)arg1;
- (void)endHighlight;
- (void)beginHighlight;
- (void)alert;
- (_Bool)shouldShowEntry;
- (void)updateEntryBtnWithWeAppName:(id)arg1;
- (void)updateAlertTitle:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, UIButton, UIColor, UIImageView, UIPageControl, UIScrollView;
@protocol UITextInput;

@interface LiteAppCustomKeyboard : UIView
{
    UIScrollView *scrollView;
    UIPageControl *pageControl;
    UIImageView *_imgDelete;
    UIImageView *_imgDeleteHL;
    UIColor *_btnBackgroundColorNormal;
    UIColor *_btnBackgroundColorHighlighted;
    UIColor *_delBtnBackgroundColorNormal;
    UIColor *_delBtnBackgroundColorHighlighted;
    UIColor *_btnBorderColor;
    _Bool _zeroLeft;
    _Bool _withMargin;
    _Bool _withCornerRadius;
    NSString *_confirmTitle;
    UIColor *_confirmColor;
    UIColor *_confirmBgColor;
    _Bool _confirmBtnEnableFlag;
    UIButton *_confirmBtn;
    _Bool _disableDarkMode;
    _Bool _showConfirm;
    id <UITextInput> _textView;
    long long _maxLength;
    NSTimer *_timer;
    double _height;
    UIButton *_extraButton;
    long long _type;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showConfirm; // @synthesize showConfirm=_showConfirm;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *extraButton; // @synthesize extraButton=_extraButton;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
- (id)getKeyboardButtonFont;
- (_Bool)isDarkMode;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)changePage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)getHeight;
- (void)characterPressed:(id)arg1;
- (void)deletePressed:(id)arg1;
- (void)characterDeleted;
- (void)startDelete;
- (void)deleteReleased:(id)arg1;
- (void)dismissPressed:(id)arg1;
@property(readonly, nonatomic) _Bool enableInputClicksWhenVisible;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (void)visitSubviewsOfView:(id)arg1 vistor:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <UITextInput> textView; // @synthesize textView=_textView;
- (void)setExtraKey:(id)arg1;
- (void)setup4X4Keyboard:(_Bool)arg1;
- (id)generateConfirmButton:(struct CGRect)arg1;
- (id)generateExtraButton:(struct CGRect)arg1;
- (id)generateDeleteButton:(struct CGRect)arg1;
- (id)generateNumberButton:(struct CGRect)arg1;
- (id)generateButton:(struct CGRect)arg1;
- (double)commonBtnHeight;
- (double)commonBtnWidth;
- (void)setup3X4Keyboard:(_Bool)arg1;
- (void)enableKeyboardConfirm:(_Bool)arg1;
- (void)setConfirmBgColor:(long long)arg1;
- (void)setConfirmColor:(long long)arg1;
- (void)setConfirmTitle:(id)arg1;
- (void)setDisableDarkMode:(_Bool)arg1;
- (void)setType:(long long)arg1 showConfirm:(_Bool)arg2;
- (void)updateInterfaceStyle;
- (_Bool)isPay;
- (void)didRotate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


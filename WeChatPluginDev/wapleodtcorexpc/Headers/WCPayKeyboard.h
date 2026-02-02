//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSTimer, UIButton, UIColor, UIImageView;
@protocol UITextInput, WACustomKeyboardDelegate;

@interface WCPayKeyboard : UIView
{
    UIImageView *_imgDelete;
    UIImageView *_imgDeleteHL;
    UIColor *_btnBackgroundColorNormal;
    UIColor *_btnBackgroundColorHighlighted;
    UIColor *_delBtnBackgroundColorNormal;
    UIColor *_delBtnBackgroundColorHighlighted;
    _Bool _showConfirm;
    id <UITextInput> _textView;
    long long _maxLength;
    id <WACustomKeyboardDelegate> _delegate;
    NSTimer *_timer;
    double _height;
    UIButton *_extraButton;
    long long _type;
    struct CGSize _oldSize;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize oldSize; // @synthesize oldSize=_oldSize;
@property(nonatomic) _Bool showConfirm; // @synthesize showConfirm=_showConfirm;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *extraButton; // @synthesize extraButton=_extraButton;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <WACustomKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
- (void)characterPressed:(id)arg1;
- (void)deletePressed:(id)arg1;
- (void)characterDeleted;
- (void)startDelete;
- (void)deleteReleased:(id)arg1;
- (void)dismissPressed:(id)arg1;
@property(retain) id <UITextInput> textView; // @synthesize textView=_textView;
- (void)setExtraKey:(id)arg1;
- (void)setup4X4Keyboard:(_Bool)arg1;
- (void)setup3X4Keyboard:(_Bool)arg1;
- (void)setType:(long long)arg1 showConfirm:(_Bool)arg2;
- (void)layoutSubviews;
- (_Bool)enableInputClicksWhenVisible;
- (id)init;

@end


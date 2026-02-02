//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIColor, UILongPressGestureRecognizer;
@protocol MMCPLabelDelegate;

@interface MMCPLabel
{
    NSString *m_cpKey;
    UILongPressGestureRecognizer *m_recognizer;
    NSString *m_restoreStr;
    _Bool m_bRegisterObserver;
    _Bool _showRestoreMenuItem;
    _Bool _showCopyMenuItem;
    _Bool _isHighlighted;
    id <MMCPLabelDelegate> _cpLabelDelegate;
    NSString *_prefixTitle;
    UIColor *_hlBackgroundColor;
}

+ (double)labelWidth:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 cpKey:(id)arg4;
+ (double)labelHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 cpKey:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(retain, nonatomic) UIColor *hlBackgroundColor; // @synthesize hlBackgroundColor=_hlBackgroundColor;
@property(retain, nonatomic) NSString *prefixTitle; // @synthesize prefixTitle=_prefixTitle;
@property(nonatomic) _Bool showCopyMenuItem; // @synthesize showCopyMenuItem=_showCopyMenuItem;
@property(nonatomic) __weak id <MMCPLabelDelegate> cpLabelDelegate; // @synthesize cpLabelDelegate=_cpLabelDelegate;
@property(nonatomic) _Bool showRestoreMenuItem; // @synthesize showRestoreMenuItem=_showRestoreMenuItem;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=m_cpKey;
- (void)dealloc;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onRestore:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)handleLongPressGestureRecognizer:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;

@end


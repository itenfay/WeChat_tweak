//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class HintOfKeyboard, NSArray, UILabel;
@protocol WCPayLQTKeyboardToolViewDelegate;

@interface WCPayLQTKeyboardToolView : UIView
{
    id <WCPayLQTKeyboardToolViewDelegate> _delegate;
    NSArray *_hints;
    HintOfKeyboard *_currentHint;
    UILabel *_profitLabel;
    NSArray *_amountLabels;
    NSArray *_separators;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *separators; // @synthesize separators=_separators;
@property(retain, nonatomic) NSArray *amountLabels; // @synthesize amountLabels=_amountLabels;
@property(retain, nonatomic) UILabel *profitLabel; // @synthesize profitLabel=_profitLabel;
@property(retain, nonatomic) HintOfKeyboard *currentHint; // @synthesize currentHint=_currentHint;
@property(retain, nonatomic) NSArray *hints; // @synthesize hints=_hints;
@property(nonatomic) __weak id <WCPayLQTKeyboardToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)highlightColor;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)refreshView;
- (_Bool)updateHintWithBankType:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end


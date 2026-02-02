//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonBoardView, MMGrowTextView, MMUIViewController, NSString, UIView, WCInputController;
@protocol WCInputViewProtocol;

@interface WCCommonInputPanelLogic : NSObject
{
    UIView<WCInputViewProtocol> *_inputView;
    WCInputController *_inputController;
    EmoticonBoardView *_emoticonBoardView;
    MMUIViewController *_viewController;
    MMGrowTextView *_textView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMGrowTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) UIView<WCInputViewProtocol> *inputView; // @synthesize inputView=_inputView;
- (void)onInputViewExpressionButtonClicked:(id)arg1;
- (id)initWithViewController:(id)arg1 textView:(id)arg2 inputView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


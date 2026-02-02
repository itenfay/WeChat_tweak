//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton;
@protocol WCCommonInputViewDelegate;

@interface WCSingleEmoticonInputView : UIView
{
    id <WCCommonInputViewDelegate> _delegate;
    UIButton *_expressionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(nonatomic) __weak id <WCCommonInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setInputMode:(unsigned long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (id)svgIconName:(id)arg1 isHighlight:(_Bool)arg2;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


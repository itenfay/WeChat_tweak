//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIStackView.h>

@class MMUISpacer, NSString, UIImageView, UILabel;

@interface WXKeyBoardTipsView : UIStackView
{
    NSString *m_tipsText;
    NSString *m_pathKey;
    int m_scene;
    CDUnknownBlockType _ClickTipsViewAction;
    UILabel *_wxKeyboardTipsLabel;
    MMUISpacer *_reddotSpacer;
    UIImageView *_arrowImageView;
}

+ (id)tipsViewWithScene:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUISpacer *reddotSpacer; // @synthesize reddotSpacer=_reddotSpacer;
@property(retain, nonatomic) UILabel *wxKeyboardTipsLabel; // @synthesize wxKeyboardTipsLabel=_wxKeyboardTipsLabel;
@property(copy, nonatomic) CDUnknownBlockType ClickTipsViewAction; // @synthesize ClickTipsViewAction=_ClickTipsViewAction;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)handleClickButton;
- (struct CGSize)preferSize;
@property(readonly, nonatomic) _Bool hasReddot;
- (double)innerMargin;
- (void)initViews;
- (id)initWithText:(id)arg1 pathKey:(id)arg2 scene:(int)arg3;
- (id)initWithText:(id)arg1 pathKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


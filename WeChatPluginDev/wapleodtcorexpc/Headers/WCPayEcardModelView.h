//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class InputMobileItem, KindaRichLabelViewV2, NSString, UITextField;
@protocol WCPayEcardModelViewDelegate;

@interface WCPayEcardModelView : UIView
{
    _Bool _hasBeenEdited;
    id <WCPayEcardModelViewDelegate> _m_delegate;
    InputMobileItem *_item;
    UITextField *_textField;
    UIView *_line;
    KindaRichLabelViewV2 *_tipsLabel;
    NSString *_mobileInputed;
}

- (void).cxx_destruct;
@property _Bool hasBeenEdited; // @synthesize hasBeenEdited=_hasBeenEdited;
@property(retain) NSString *mobileInputed; // @synthesize mobileInputed=_mobileInputed;
@property(retain) KindaRichLabelViewV2 *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain) UIView *line; // @synthesize line=_line;
@property(retain) UITextField *textField; // @synthesize textField=_textField;
@property(retain) InputMobileItem *item; // @synthesize item=_item;
@property __weak id <WCPayEcardModelViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)textFieldDidChange;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (unsigned long long)colorFromString:(id)arg1;
- (void)updateTipsLabel;
- (void)updateLine;
- (void)updateTextField;
- (void)layoutSubviews;
- (void)updateWithInputItem:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)text;
- (void)updateMobile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


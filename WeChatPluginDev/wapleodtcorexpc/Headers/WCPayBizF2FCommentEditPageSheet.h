//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPageSheetAdapter, NSString, UITextField;

@interface WCPayBizF2FCommentEditPageSheet : NSObject
{
    NSString *_title;
    NSString *_placeholder;
    NSString *_content;
    unsigned long long _maxLength;
    CDUnknownBlockType _onEdited;
    MMPageSheetAdapter *_adapter;
    UITextField *_textField;
    WCPayBizF2FCommentEditPageSheet *_selfRetaining;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBizF2FCommentEditPageSheet *selfRetaining; // @synthesize selfRetaining=_selfRetaining;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) MMPageSheetAdapter *adapter; // @synthesize adapter=_adapter;
@property(copy, nonatomic) CDUnknownBlockType onEdited; // @synthesize onEdited=_onEdited;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)textDidChange;
- (id)getContentView;
- (id)getTitleView;
- (void)show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


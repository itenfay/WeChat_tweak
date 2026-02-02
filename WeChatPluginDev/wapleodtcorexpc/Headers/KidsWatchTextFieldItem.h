//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UITextField;

@interface KidsWatchTextFieldItem : NSObject
{
    _Bool _useRawLength;
    unsigned int _maxInputLength;
    KidsWatchTextFieldItem *_nextItem;
    UITextField *_textField;
    CDUnknownBlockType _textHandler;
    CDUnknownBlockType _textChangeHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType textChangeHandler; // @synthesize textChangeHandler=_textChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType textHandler; // @synthesize textHandler=_textHandler;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak KidsWatchTextFieldItem *nextItem; // @synthesize nextItem=_nextItem;
@property(nonatomic) _Bool useRawLength; // @synthesize useRawLength=_useRawLength;
@property(nonatomic) unsigned int maxInputLength; // @synthesize maxInputLength=_maxInputLength;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldDidEndOnExit:(id)arg1;
- (void)onTextFieldTextDidChanged:(id)arg1;
- (void)initTextField;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


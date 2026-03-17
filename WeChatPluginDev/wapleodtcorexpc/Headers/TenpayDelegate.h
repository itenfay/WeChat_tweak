//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSMutableString, NSString, TenpaySMCertificate;

@interface TenpayDelegate : NSObject
{
    NSMutableString *_inputText;
    NSString *_salt;
    NSString *_appendText;
    int _keyIndex;
    int _maxLen;
    id _returnTarget;
    SEL _returnCallback;
    id _changeTarget;
    SEL _changeCallback;
    TenpaySMCertificate *_certificateHandler;
    _Bool bFormatBankCard;
    NSCharacterSet *_filterCharsSet;
    NSString *_whiteListCharsSet;
}

@property(copy, nonatomic) NSString *whiteListCharsSet; // @synthesize whiteListCharsSet=_whiteListCharsSet;
@property(retain, nonatomic) NSCharacterSet *filterCharsSet; // @synthesize filterCharsSet=_filterCharsSet;
@property(nonatomic) _Bool bFormatBankCard; // @synthesize bFormatBankCard;
- (void)setDefaultValue:(id)arg1;
- (id)GetUnEncryptCode;
- (id)GetEncryptCode;
- (id)GetAsteriskString:(id)arg1;
- (_Bool)isAreaIDCardNum:(long long)arg1;
- (_Bool)isUserIDNum;
- (_Bool)isBankCardNum;
- (_Bool)isPhoneNum;
- (id)GetSm4EncryptData;
- (id)Get3DesEncryptData;
- (id)GetSM2EncryptData:(long long)arg1 timestamp:(unsigned long long)arg2 nonce:(id)arg3;
- (id)Get2048EncryptDataWithHash:(_Bool)arg1;
- (id)GetEncryptDataWithHash:(_Bool)arg1;
- (void)ClearInput;
- (void)SelectRsaKey:(int)arg1;
- (void)SetSalt:(id)arg1;
- (long long)GetInputInfo;
- (id)GetVersion;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChanged:(id)arg1;
- (id)whiteListFilter:(id)arg1;
- (void)ResetInputText:(id)arg1;
- (long long)spaceCountAtFormatCursor:(long long)arg1;
- (long long)spaceCountAtSrcCursor:(long long)arg1;
- (id)EncodeCard:(id)arg1;
- (id)DecodeCardWithAppend:(id)arg1;
- (id)DecodeCard:(id)arg1;
- (void)AppendString:(id)arg1;
- (void)SetMaxInputLen:(int)arg1;
- (void)SetChange:(id)arg1 callback:(SEL)arg2;
- (void)SetReturn:(id)arg1 callback:(SEL)arg2;
- (void)setupSM;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


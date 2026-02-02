//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMIUIModal, MMIUIPage, MMKPwdInputViewOnEndEnterPasswordCallback, MMKPwdInputViewOnPasswordChangeCallback, NSString;

@protocol MMKPwdInputView <MMKView>
- (void)setOnEndEnterPasswordCallback:(MMKPwdInputViewOnEndEnterPasswordCallback *)arg1;
- (void)setOnPasswordChangeCallback:(MMKPwdInputViewOnPasswordChangeCallback *)arg1;
- (_Bool)getKeyboardDisabled;
- (void)setKeyboardDisabled:(_Bool)arg1;
- (long long)getPwdTimestamp;
- (void)setPwdTimestamp:(long long)arg1;
- (long long)getPwdEncryptMode;
- (void)setPwdEncryptMode:(long long)arg1;
- (NSString *)getPwdNonce;
- (void)setPwdNonce:(NSString *)arg1;
- (long long)getPwdStyle;
- (void)setPwdStyle:(long long)arg1;
- (_Bool)getAutoRemarkKeyBoradType;
- (void)setAutoRemarkKeyBoradType:(_Bool)arg1;
- (_Bool)getChearInput;
- (void)setChearInput:(_Bool)arg1;
- (NSString *)getHashData;
- (void)setHashData:(NSString *)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (long long)getTextLength;
- (void)setTextLength:(long long)arg1;
- (void)setKeepKeyboardOnClearFocus:(_Bool)arg1;
- (void)setEncryptSoftSaltAndVersion:(NSString *)arg1 version:(int)arg2;
- (void)setFocusUIPageListener:(MMIUIPage *)arg1;
- (void)setFocusModalListener:(MMIUIModal *)arg1;
- (long long)sm2HashType;
@end


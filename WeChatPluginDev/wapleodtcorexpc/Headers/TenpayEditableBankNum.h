//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, TenpayDelegate;

@interface TenpayEditableBankNum : UIView
{
    TenpayDelegate *_dataHandler;
    NSMutableArray *arrTextField;
}

- (void)textFieldDidBeginEditing:(id)arg1;
- (id)GetSm4EncryptData;
- (id)Get3DesEncryptData;
- (id)GetSM2EncryptData:(long long)arg1 timestamp:(unsigned long long)arg2 nonce:(id)arg3;
- (id)GetRsa2048EncryptData;
- (id)GetRsaEncryptData;
- (id)getFullBankNum;
- (void)SelectRsaKey:(int)arg1;
- (void)SetSalt:(id)arg1;
- (void)setKeyboradOrientation:(long long)arg1;
- (void)SetKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (void)SetKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2;
- (void)setKeyboradImgWithNumNormal:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4 ImageExtendNormal:(id)arg5 ImageExtendPress:(id)arg6;
- (void)setKeyboradImgWithNumNormal:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 andCodeNum:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


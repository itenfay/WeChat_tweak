//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MemSig, NSString, WloginProtocol;

@interface WTLoginApi : NSObject
{
    NSString *_UserAccount;
    unsigned long long _uin;
    unsigned int _dwBitmap;
    unsigned int _loginFlag;
    unsigned int _dwAppid;
    unsigned int _dwSubAppid;
    _Bool _hasNewTGTGT;
    MemSig *_TGTGT;
    WloginProtocol *_wloginProtocol;
}

- (void)resetLoginProcess;
- (id)sigTypeToName:(unsigned int)arg1;
- (void)setClientPicInfo:(unsigned short)arg1 CapType:(unsigned char)arg2 PicRetType:(unsigned char)arg3;
- (id)initMemUserAppidSig;
- (void)clearPwdSig:(unsigned long long)arg1;
- (_Bool)hasPwdSig:(unsigned long long)arg1;
- (CDStruct_e485254d *)resolveSvrPkg:(id)arg1;
- (int)exchangeSig:(unsigned long long)arg1 andSig:(id)arg2 andSigBitmap:(unsigned int)arg3 retData:(id)arg4;
- (int)refreshPicture:(id)arg1;
- (int)checkPicture:(id)arg1 retData:(id)arg2;
- (int)loginWithPasswd:(unsigned long long)arg1 andPasswd:(id)arg2 andSigBitmap:(unsigned int)arg3 andLoginFlag:(int)arg4 retData:(id)arg5;
- (void)dealloc;
- (id)init;

@end


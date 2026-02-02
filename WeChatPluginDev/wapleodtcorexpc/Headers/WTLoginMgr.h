//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WTLoginMgr
{
}

+ (void)clearPwdSig:(unsigned long long)arg1;
+ (_Bool)resolveServerPackage:(id)arg1 WithDictionary:(id)arg2;
+ (id)getCheckVerifyBuffer:(id)arg1;
+ (id)getLoginBuffer:(id)arg1 psw:(id)arg2 pwdMd5:(id)arg3;
+ (id)getWTLoginAPIInstance;

@end


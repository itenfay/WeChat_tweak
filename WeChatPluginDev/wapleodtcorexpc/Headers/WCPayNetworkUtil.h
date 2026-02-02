//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayNetworkUtil : NSObject
{
}

+ (unsigned char)routeInfoFromReqKey:(id)arg1;
+ (_Bool)isGetPaidOrderDetail:(unsigned int)arg1;
+ (_Bool)isSnsPayment:(id)arg1;
+ (_Bool)isPayOrderQueryCMD:(unsigned int)arg1;
+ (_Bool)isQRCodeUseBindQueryCMD:(unsigned int)arg1;
+ (_Bool)isVerifyRegCMD:(unsigned int)arg1;
+ (_Bool)isVerifyCMD:(unsigned int)arg1;
+ (_Bool)isAuthenCMD:(unsigned int)arg1;
+ (unsigned int)MMFuncForPayAuthNativeWithUrl:(id)arg1;
+ (unsigned int)MMFuncForPayAuthAppWithPrepayId:(id)arg1;
+ (unsigned int)MMFuncForGenPrePayWithParamString:(id)arg1;
+ (id)queryParamDictFromParamString:(id)arg1 WithKey:(id)arg2;
+ (unsigned int)CgiCmdForPayOrderQueryWithReqKey:(id)arg1;
+ (unsigned int)CgiCmdForQrcodeUseBindQueryWithReqKey:(id)arg1;
+ (unsigned int)CgiCmdForVerifyRegWithReqKey:(id)arg1;
+ (unsigned int)CgiCmdForVerifyWithReqKey:(id)arg1;
+ (unsigned int)CgiCmdForAuthenWithReqKey:(id)arg1;
+ (id)payOrderQueryArray;
+ (id)qrcodeUseBindQueryArray;
+ (id)verifyRegArray;
+ (id)verifyArray;
+ (id)authenArray;
+ (_Bool)ABTestOpenPayCgiSeperateOpen;
+ (void)reportSignError:(int)arg1;
+ (void)fillTenpayRequestWithSignAndCrtNo:(id)arg1 CgiNo:(unsigned int)arg2;
+ (_Bool)isCgiNoInSignBlackList:(unsigned int)arg1;
+ (id)addEncryptInfoToDic:(id)arg1;
+ (id)innerBufferWithDic:(id)arg1;
+ (id)queryBufferWithDic:(id)arg1;
+ (id)GenTenPayUrlArgumentFromDic:(id)arg1;
+ (id)AddLocationToDic:(id)arg1;

@end


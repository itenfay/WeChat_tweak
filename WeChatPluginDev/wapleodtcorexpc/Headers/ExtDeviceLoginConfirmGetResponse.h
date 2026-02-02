//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ExtDeviceLoginConfirmErrorRet, ExtDeviceLoginConfirmExpiredRet, ExtDeviceLoginConfirmOKRet, NSString;

@interface ExtDeviceLoginConfirmGetResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *autoLoginSwitchTip; // @dynamic autoLoginSwitchTip;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *deviceNameStr; // @dynamic deviceNameStr;
@property(retain, nonatomic) ExtDeviceLoginConfirmErrorRet *errorRet; // @dynamic errorRet;
@property(retain, nonatomic) ExtDeviceLoginConfirmExpiredRet *expiredRet; // @dynamic expiredRet;
@property(nonatomic) unsigned int funcCtrl; // @dynamic funcCtrl;
@property(nonatomic) unsigned int loginClientVersion; // @dynamic loginClientVersion;
@property(nonatomic) _Bool needShowSyncMsgButton; // @dynamic needShowSyncMsgButton;
@property(retain, nonatomic) ExtDeviceLoginConfirmOKRet *okret; // @dynamic okret;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class WxaSyncBlockCgiRequestCmd, WxaSyncGetCodeCmd, WxaSyncGetContactCmd, WxaSyncGetExptInfoCmd, WxaSyncInvalidCodeCmd, WxaSyncInvalidContactCmd, WxaSyncIssueContactCmd, WxaSyncIssueDecryptKeyCmd, WxaSyncIssueLaunchCmd, WxaSyncJsApiControlBytesCmd, WxaSyncPreLaunchCmd, WxaSyncPullGlobalConfCmd, WxaSyncUpdateVersionCmd;

@interface WxaSyncCmds : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WxaSyncBlockCgiRequestCmd *blockCgiRequest; // @dynamic blockCgiRequest;
@property(retain, nonatomic) WxaSyncGetCodeCmd *getCode; // @dynamic getCode;
@property(retain, nonatomic) WxaSyncGetContactCmd *getContact; // @dynamic getContact;
@property(retain, nonatomic) WxaSyncGetExptInfoCmd *getExptInfo; // @dynamic getExptInfo;
@property(retain, nonatomic) WxaSyncJsApiControlBytesCmd *getJsApiControlBytes; // @dynamic getJsApiControlBytes;
@property(retain, nonatomic) WxaSyncInvalidCodeCmd *invalidCode; // @dynamic invalidCode;
@property(retain, nonatomic) WxaSyncInvalidContactCmd *invalidContact; // @dynamic invalidContact;
@property(retain, nonatomic) WxaSyncIssueContactCmd *issueContact; // @dynamic issueContact;
@property(retain, nonatomic) WxaSyncIssueDecryptKeyCmd *issueDecryptKey; // @dynamic issueDecryptKey;
@property(retain, nonatomic) WxaSyncIssueLaunchCmd *issueLaunch; // @dynamic issueLaunch;
@property(retain, nonatomic) WxaSyncPreLaunchCmd *preLaunch; // @dynamic preLaunch;
@property(retain, nonatomic) WxaSyncPullGlobalConfCmd *pullGlobalConf; // @dynamic pullGlobalConf;
@property(retain, nonatomic) WxaSyncUpdateVersionCmd *updateVersion; // @dynamic updateVersion;

@end


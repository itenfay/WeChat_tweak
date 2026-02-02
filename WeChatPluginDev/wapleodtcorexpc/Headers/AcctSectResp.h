//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, XAgreementDmSetting, XAgreementWordingSetting;

@interface AcctSectResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *alias; // @dynamic alias;
@property(retain, nonatomic) NSString *bindEmail; // @dynamic bindEmail;
@property(retain, nonatomic) NSString *bindMobile; // @dynamic bindMobile;
@property(nonatomic) unsigned int bindUin; // @dynamic bindUin;
@property(retain, nonatomic) NSString *deviceInfoXml; // @dynamic deviceInfoXml;
@property(retain, nonatomic) NSString *fsurl; // @dynamic fsurl;
@property(retain, nonatomic) NSString *historyAliasList; // @dynamic historyAliasList;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) NSString *officialNickName; // @dynamic officialNickName;
@property(retain, nonatomic) NSString *officialUserName; // @dynamic officialUserName;
@property(nonatomic) unsigned int pluginFlag; // @dynamic pluginFlag;
@property(nonatomic) unsigned int pushMailStatus; // @dynamic pushMailStatus;
@property(nonatomic) unsigned int regType; // @dynamic regType;
@property(nonatomic) unsigned int safeDevice; // @dynamic safeDevice;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(nonatomic) unsigned int userXagreementId; // @dynamic userXagreementId;
@property(retain, nonatomic) XAgreementDmSetting *xagreementDmSetting; // @dynamic xagreementDmSetting;
@property(retain, nonatomic) XAgreementWordingSetting *xagreementWordingSetting; // @dynamic xagreementWordingSetting;

@end


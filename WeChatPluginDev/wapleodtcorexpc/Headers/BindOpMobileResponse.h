//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, BuiltinIPList, HostList, NSString, NetworkControl, SafeDeviceList, ShowStyleKey;

@interface BindOpMobileResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authTicket; // @dynamic authTicket;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BuiltinIPList *builtinIplist; // @dynamic builtinIplist;
@property(retain, nonatomic) NSString *cc; // @dynamic cc;
@property(nonatomic) unsigned int certRegion; // @dynamic certRegion;
@property(retain, nonatomic) NSString *formatedMobile; // @dynamic formatedMobile;
@property(nonatomic) unsigned int mmtlsControlBitFlag; // @dynamic mmtlsControlBitFlag;
@property(nonatomic) unsigned int mobileCheckType; // @dynamic mobileCheckType;
@property(nonatomic) int needDoPostCheck; // @dynamic needDoPostCheck;
@property(nonatomic) unsigned int needSetPwd; // @dynamic needSetPwd;
@property(retain, nonatomic) NetworkControl *networkControl; // @dynamic networkControl;
@property(retain, nonatomic) HostList *newHostList; // @dynamic newHostList;
@property(nonatomic) unsigned int obsoleteItem1; // @dynamic obsoleteItem1;
@property(retain, nonatomic) NSString *pureMobile; // @dynamic pureMobile;
@property(retain, nonatomic) NSString *pwd; // @dynamic pwd;
@property(retain, nonatomic) NSString *regSessionId; // @dynamic regSessionId;
@property(nonatomic) unsigned int restart; // @dynamic restart;
@property(nonatomic) unsigned int safeDevice; // @dynamic safeDevice;
@property(retain, nonatomic) SafeDeviceList *safeDeviceList; // @dynamic safeDeviceList;
@property(retain, nonatomic) ShowStyleKey *showStyle; // @dynamic showStyle;
@property(retain, nonatomic) NSString *smsNo; // @dynamic smsNo;
@property(retain, nonatomic) NSString *smsUpCode; // @dynamic smsUpCode;
@property(retain, nonatomic) NSString *smsUpMobile; // @dynamic smsUpMobile;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) NSString *verifyTicket; // @dynamic verifyTicket;

@end


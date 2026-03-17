//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString, TLRecCardBizInfo, TLRecCardUserInfo;

@class WXPBGeneratedMessage;

@interface TLRecCard : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appMsg; // @dynamic appMsg;
@property(retain, nonatomic) NSString *appMsgRecReason; // @dynamic appMsgRecReason;
@property(retain, nonatomic) TLRecCardBizInfo *bizInfo; // @dynamic bizInfo;
@property(retain, nonatomic) NSString *cardTitle; // @dynamic cardTitle;
@property(nonatomic) unsigned long long clientId; // @dynamic clientId;
@property(retain, nonatomic) TLRecCardUserInfo *recCardUserInfo; // @dynamic recCardUserInfo;
@property(retain, nonatomic) NSString *versionInfo; // @dynamic versionInfo;

@end


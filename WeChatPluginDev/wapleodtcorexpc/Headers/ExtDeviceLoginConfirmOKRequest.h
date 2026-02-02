//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class KidsAcctInfo, NSMutableArray, NSString;

@interface ExtDeviceLoginConfirmOKRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool enableAutoLogin; // @dynamic enableAutoLogin;
@property(retain, nonatomic) KidsAcctInfo *kidsAcct; // @dynamic kidsAcct;
@property(nonatomic) unsigned int loginScene; // @dynamic loginScene;
@property(retain, nonatomic) NSString *loginUrl; // @dynamic loginUrl;
@property(retain, nonatomic) NSString *sessionList; // @dynamic sessionList;
@property(nonatomic) _Bool syncMsg; // @dynamic syncMsg;
@property(retain, nonatomic) NSMutableArray *unReadChatContactList; // @dynamic unReadChatContactList;

@end


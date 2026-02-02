//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString, SKBuiltinBuffer_t;

@interface GetBioConfigRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int checkLiveFlag; // @dynamic checkLiveFlag;
@property(retain, nonatomic) NSString *jsonStr; // @dynamic jsonStr;
@property(retain, nonatomic) NSData *liveSelectData; // @dynamic liveSelectData;
@property(retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey; // @dynamic randomEncryKey;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *userTicket; // @dynamic userTicket;

@end


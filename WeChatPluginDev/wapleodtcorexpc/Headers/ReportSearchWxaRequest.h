//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface ReportSearchWxaRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int click; // @dynamic click;
@property(nonatomic) unsigned long long clickTimestamp; // @dynamic clickTimestamp;
@property(nonatomic) unsigned int exposure; // @dynamic exposure;
@property(nonatomic) unsigned int pos; // @dynamic pos;
@property(nonatomic) int scene; // @dynamic scene;
@property(retain, nonatomic) NSData *searchBuf; // @dynamic searchBuf;
@property(nonatomic) unsigned long long searchId; // @dynamic searchId;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int stayTime; // @dynamic stayTime;

@end


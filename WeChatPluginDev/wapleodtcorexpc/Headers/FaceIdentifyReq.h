//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface FaceIdentifyReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long bioid; // @dynamic bioid;
@property(retain, nonatomic) NSString *cdnAesKey; // @dynamic cdnAesKey;
@property(nonatomic) unsigned int checkAliveType; // @dynamic checkAliveType;
@property(retain, nonatomic) NSData *extSpamInfo; // @dynamic extSpamInfo;
@property(retain, nonatomic) NSString *jsonStr; // @dynamic jsonStr;
@property(nonatomic) unsigned int light; // @dynamic light;
@property(nonatomic) unsigned int operateCode; // @dynamic operateCode;
@property(retain, nonatomic) NSString *pictureCdnId; // @dynamic pictureCdnId;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(nonatomic) unsigned int uploadVideo; // @dynamic uploadVideo;

@end


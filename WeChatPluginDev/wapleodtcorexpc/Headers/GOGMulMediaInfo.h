//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface GOGMulMediaInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *audioCodec; // @dynamic audioCodec;
@property(nonatomic) unsigned int audioSampleRate; // @dynamic audioSampleRate;
@property(nonatomic) unsigned long long chatroomId; // @dynamic chatroomId;
@property(nonatomic) unsigned int chatroomSize; // @dynamic chatroomSize;
@property(nonatomic) unsigned long long createtime; // @dynamic createtime;
@property(retain, nonatomic) NSMutableArray *extNew; // @dynamic extNew;
@property(retain, nonatomic) NSString *fileid; // @dynamic fileid;
@property(retain, nonatomic) NSString *filekey; // @dynamic filekey;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned int mediaHeight; // @dynamic mediaHeight;
@property(nonatomic) unsigned int mediaWidth; // @dynamic mediaWidth;
@property(nonatomic) unsigned long long mediaid; // @dynamic mediaid;
@property(nonatomic) int mtype; // @dynamic mtype;
@property(retain, nonatomic) NSString *qrcodeUrl; // @dynamic qrcodeUrl;
@property(retain, nonatomic) NSData *secInfo; // @dynamic secInfo;
@property(retain, nonatomic) NSString *snsUrl; // @dynamic snsUrl;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(retain, nonatomic) NSString *videoCodec; // @dynamic videoCodec;
@property(nonatomic) unsigned int videoFps; // @dynamic videoFps;
@property(nonatomic) unsigned int videoLen; // @dynamic videoLen;

@end


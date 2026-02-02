//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface DeepLinkInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *apiName; // @dynamic apiName;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *hostAppid; // @dynamic hostAppid;
@property(nonatomic) unsigned int lifespan; // @dynamic lifespan;
@property(retain, nonatomic) NSData *reqData; // @dynamic reqData;
@property(retain, nonatomic) NSData *respData; // @dynamic respData;
@property(retain, nonatomic) NSString *sdkVersion; // @dynamic sdkVersion;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;
@property(nonatomic) unsigned int useruin; // @dynamic useruin;
@property(retain, nonatomic) NSString *wxaAppid; // @dynamic wxaAppid;
@property(nonatomic) unsigned int wxaScene; // @dynamic wxaScene;

@end


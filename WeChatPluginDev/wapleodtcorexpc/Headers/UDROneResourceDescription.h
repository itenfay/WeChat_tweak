//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, UDRExtInfo, UDRResourceDiff;

@interface UDROneResourceDescription : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) UDRResourceDiff *diffInfo; // @dynamic diffInfo;
@property(retain, nonatomic) UDRExtInfo *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *projectId; // @dynamic projectId;
@property(nonatomic) unsigned int resourceExpireTimeMs; // @dynamic resourceExpireTimeMs;
@property(retain, nonatomic) NSString *resourceName; // @dynamic resourceName;
@property(nonatomic) int resourceRet; // @dynamic resourceRet;
@property(nonatomic) unsigned int resourceSize; // @dynamic resourceSize;
@property(nonatomic) unsigned int resourceType; // @dynamic resourceType;
@property(nonatomic) unsigned int resourceVersion; // @dynamic resourceVersion;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end


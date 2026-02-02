//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EncryptMetaData, ExtInfo, NSMutableArray, NSString;

@interface OneResourceDescription : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) EncryptMetaData *encryptMetaData; // @dynamic encryptMetaData;
@property(retain, nonatomic) ExtInfo *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *projectId; // @dynamic projectId;
@property(retain, nonatomic) NSString *resourceName; // @dynamic resourceName;
@property(nonatomic) unsigned int resourceSize; // @dynamic resourceSize;
@property(nonatomic) unsigned int resourceVersion; // @dynamic resourceVersion;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSMutableArray *versionMetaDataList; // @dynamic versionMetaDataList;

@end


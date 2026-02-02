//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EncryptMetaData, ExtInfo, NSString;

@interface ResourceVersionMetaData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int compressAlgorithm; // @dynamic compressAlgorithm;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) EncryptMetaData *encryptMetaData; // @dynamic encryptMetaData;
@property(retain, nonatomic) ExtInfo *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned int priority; // @dynamic priority;
@property(nonatomic) unsigned int resourceSize; // @dynamic resourceSize;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end


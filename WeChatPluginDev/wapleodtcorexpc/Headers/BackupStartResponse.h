//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BackupStartGeneralInfo, NSString;

@interface BackupStartResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long bigDataSize; // @dynamic bigDataSize;
@property(retain, nonatomic) BackupStartGeneralInfo *generalInfo; // @dynamic generalInfo;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) unsigned int networkState; // @dynamic networkState;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) unsigned long long totalCount; // @dynamic totalCount;
@property(nonatomic) unsigned long long totalSize; // @dynamic totalSize;
@property(nonatomic) int transferType; // @dynamic transferType;

@end


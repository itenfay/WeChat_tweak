//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BackupStartGeneralInfo, NSString;

@interface BackupStartRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long bigDataSize; // @dynamic bigDataSize;
@property(nonatomic) unsigned long long dataSize; // @dynamic dataSize;
@property(retain, nonatomic) BackupStartGeneralInfo *generalInfo; // @dynamic generalInfo;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) unsigned long long msgCount; // @dynamic msgCount;
@property(nonatomic) unsigned long long sessionCount; // @dynamic sessionCount;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) int transferType; // @dynamic transferType;

@end


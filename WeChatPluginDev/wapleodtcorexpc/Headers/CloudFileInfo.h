//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CloudFileInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *fileHash; // @dynamic fileHash;
@property(retain, nonatomic) NSString *fileId; // @dynamic fileId;
@property(retain, nonatomic) NSString *fileName; // @dynamic fileName;
@property(retain, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) unsigned long long fileSize; // @dynamic fileSize;
@property(nonatomic) _Bool isDir; // @dynamic isDir;
@property(nonatomic) _Bool isFinished; // @dynamic isFinished;
@property(nonatomic) unsigned long long lastUpdateTime; // @dynamic lastUpdateTime;
@property(retain, nonatomic) NSString *parentPath; // @dynamic parentPath;

@end


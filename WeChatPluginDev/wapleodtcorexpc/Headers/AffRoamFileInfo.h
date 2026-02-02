//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface AffRoamFileInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *fileName; // @dynamic fileName;
@property(retain, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) unsigned long long fileSize; // @dynamic fileSize;
@property(nonatomic) _Bool isDir; // @dynamic isDir;
@property(nonatomic) unsigned long long lastUpdateTime; // @dynamic lastUpdateTime;

@end


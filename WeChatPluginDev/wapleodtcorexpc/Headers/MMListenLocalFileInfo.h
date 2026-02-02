//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MMListenLocalFileInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)canShowHandOffOpenInPCItem;
- (void)setFullFilePath:(id)arg1;
- (id)fullFilePath;

// Remaining properties
@property(nonatomic) long long chatLocalId; // @dynamic chatLocalId;
@property(retain, nonatomic) NSString *chatName; // @dynamic chatName;
@property(nonatomic) long long chatSvrId; // @dynamic chatSvrId;
@property(nonatomic) long long favLocalId; // @dynamic favLocalId;
@property(nonatomic) long long favSvrId; // @dynamic favSvrId;
@property(retain, nonatomic) NSString *fileExt; // @dynamic fileExt;
@property(retain, nonatomic) NSString *fileMd5; // @dynamic fileMd5;
@property(retain, nonatomic) NSString *fileName; // @dynamic fileName;
@property(retain, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) unsigned int fileSize; // @dynamic fileSize;
@property(retain, nonatomic) NSString *thumbPath; // @dynamic thumbPath;

@end


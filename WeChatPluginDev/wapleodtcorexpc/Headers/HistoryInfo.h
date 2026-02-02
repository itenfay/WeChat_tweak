//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface HistoryInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aeskey; // @dynamic aeskey;
@property(retain, nonatomic) NSString *fileId; // @dynamic fileId;
@property(nonatomic) unsigned int fileLength; // @dynamic fileLength;
@property(retain, nonatomic) NSString *fileMd5; // @dynamic fileMd5;
@property(nonatomic) unsigned int msgCount; // @dynamic msgCount;
@property(retain, nonatomic) NSString *newFormatAeskey; // @dynamic newFormatAeskey;
@property(nonatomic) unsigned int newFormatFileLength; // @dynamic newFormatFileLength;
@property(retain, nonatomic) NSString *newFormatFileid; // @dynamic newFormatFileid;
@property(retain, nonatomic) NSString *newFormatMd5; // @dynamic newFormatMd5;
@property(nonatomic) unsigned int newFormatMsgCount; // @dynamic newFormatMsgCount;

@end


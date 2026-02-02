//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CheckBigFileUploadRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aeskey; // @dynamic aeskey;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *fileExt; // @dynamic fileExt;
@property(retain, nonatomic) NSString *fileMd5; // @dynamic fileMd5;
@property(retain, nonatomic) NSString *fileName; // @dynamic fileName;
@property(nonatomic) unsigned long long fileSize; // @dynamic fileSize;
@property(nonatomic) unsigned int fileType; // @dynamic fileType;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;

@end


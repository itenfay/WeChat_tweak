//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface ParallelUploadResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aesKey; // @dynamic aesKey;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int currentPartIdlimit; // @dynamic currentPartIdlimit;
@property(retain, nonatomic) NSString *fileId; // @dynamic fileId;
@property(retain, nonatomic) NSString *imgInfo; // @dynamic imgInfo;
@property(nonatomic) unsigned int retryDelaySeconds; // @dynamic retryDelaySeconds;
@property(retain, nonatomic) NSString *uploadId; // @dynamic uploadId;

@end


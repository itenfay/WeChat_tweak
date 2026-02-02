//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString, ParallelUploadRequest_Param;

@interface ParallelUploadRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) ParallelUploadRequest_Param *initialParam; // @dynamic initialParam;
@property(retain, nonatomic) NSData *partBuffer; // @dynamic partBuffer;
@property(nonatomic) unsigned int partId; // @dynamic partId;
@property(retain, nonatomic) NSString *uploadId; // @dynamic uploadId;

@end


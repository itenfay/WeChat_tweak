//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface XMCreateUploadUrlRsp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int channel; // @dynamic channel;
@property(retain, nonatomic) NSString *dns; // @dynamic dns;
@property(nonatomic) unsigned int expiredTime; // @dynamic expiredTime;
@property(retain, nonatomic) NSString *fileid; // @dynamic fileid;
@property(nonatomic) _Bool isExist; // @dynamic isExist;
@property(retain, nonatomic) NSString *uploadKey; // @dynamic uploadKey;

@end


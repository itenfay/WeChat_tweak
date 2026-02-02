//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData;

@interface GetLensListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *ctx; // @dynamic ctx;
@property(retain, nonatomic) NSData *pageBuff; // @dynamic pageBuff;
@property(nonatomic) unsigned int reqType; // @dynamic reqType;

@end


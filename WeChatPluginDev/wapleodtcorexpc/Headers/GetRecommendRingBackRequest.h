//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, RecommendRingBackContext;

@interface GetRecommendRingBackRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) RecommendRingBackContext *context; // @dynamic context;
@property(retain, nonatomic) NSString *expBuf; // @dynamic expBuf;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end


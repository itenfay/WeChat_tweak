//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, RecPluginMsg, WebRecommendResponse_RecClientCache;

@interface WebRecommendResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) WebRecommendResponse_RecClientCache *clientCache; // @dynamic clientCache;
@property(retain, nonatomic) NSString *json; // @dynamic json;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) RecPluginMsg *pluginMsg; // @dynamic pluginMsg;
@property(nonatomic) unsigned int redDotTimeStamp; // @dynamic redDotTimeStamp;
@property(nonatomic) unsigned int updateCode; // @dynamic updateCode;

@end


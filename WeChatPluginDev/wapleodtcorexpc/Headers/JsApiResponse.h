//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface JsApiResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(retain, nonatomic) NSMutableArray *header; // @dynamic header;
@property(retain, nonatomic) NSString *respJson; // @dynamic respJson;
@property(nonatomic) int ret; // @dynamic ret;

@end


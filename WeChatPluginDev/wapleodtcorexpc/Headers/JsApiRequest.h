//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface JsApiRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int cgiCmdid; // @dynamic cgiCmdid;
@property(retain, nonatomic) NSMutableArray *header; // @dynamic header;
@property(nonatomic) unsigned int method; // @dynamic method;
@property(retain, nonatomic) NSString *reqJson; // @dynamic reqJson;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end


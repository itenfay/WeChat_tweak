//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface NewLifeBizJsApiRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)generateRequestHeader;

// Remaining properties
@property(nonatomic) unsigned int cgiCmdId; // @dynamic cgiCmdId;
@property(retain, nonatomic) NSString *cgiUri; // @dynamic cgiUri;
@property(nonatomic) unsigned int method; // @dynamic method;
@property(retain, nonatomic) NSMutableArray *reqHeader; // @dynamic reqHeader;
@property(retain, nonatomic) NSString *reqJson; // @dynamic reqJson;

@end


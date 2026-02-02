//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface ExptDebugReportRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int key; // @dynamic key;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int type; // @dynamic type;

@end


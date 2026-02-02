//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface JSAPIPreVerifyResponse_JSAPIWebCompt : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int clientReportId; // @dynamic clientReportId;
@property(retain, nonatomic) NSString *configJson; // @dynamic configJson;
@property(nonatomic) unsigned int frontendReportId; // @dynamic frontendReportId;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *tags; // @dynamic tags;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end


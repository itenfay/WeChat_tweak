//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ReportSDKItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *currPageJson; // @dynamic currPageJson;
@property(retain, nonatomic) NSString *itemId; // @dynamic itemId;
@property(nonatomic) unsigned int itemType; // @dynamic itemType;
@property(retain, nonatomic) NSString *refPageJson; // @dynamic refPageJson;
@property(retain, nonatomic) NSString *sdkSessionId; // @dynamic sdkSessionId;
@property(retain, nonatomic) NSString *sourcePageJson; // @dynamic sourcePageJson;

@end


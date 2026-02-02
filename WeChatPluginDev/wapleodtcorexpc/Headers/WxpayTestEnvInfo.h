//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WxpayTestEnvInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int callstackId; // @dynamic callstackId;
@property(nonatomic) int environmentId; // @dynamic environmentId;
@property(retain, nonatomic) NSString *extensionData; // @dynamic extensionData;
@property(nonatomic) int sceneId; // @dynamic sceneId;

@end


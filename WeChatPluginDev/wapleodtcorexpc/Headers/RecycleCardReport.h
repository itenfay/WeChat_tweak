//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface RecycleCardReport : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long clientmsgid; // @dynamic clientmsgid;
@property(retain, nonatomic) NSString *extraData; // @dynamic extraData;
@property(retain, nonatomic) NSString *reportData; // @dynamic reportData;
@property(nonatomic) unsigned int satus; // @dynamic satus;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end


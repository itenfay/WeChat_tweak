//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface StatusMediaInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long durationMs; // @dynamic durationMs;
@property(nonatomic) int height; // @dynamic height;
@property(retain, nonatomic) NSString *mediaAesKey; // @dynamic mediaAesKey;
@property(retain, nonatomic) NSString *mediaUrl; // @dynamic mediaUrl;
@property(retain, nonatomic) NSString *thumbAesKey; // @dynamic thumbAesKey;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(nonatomic) int width; // @dynamic width;

@end


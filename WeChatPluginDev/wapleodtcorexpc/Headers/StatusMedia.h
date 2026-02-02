//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface StatusMedia : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *mediaAesKey; // @dynamic mediaAesKey;
@property(nonatomic) unsigned long long mediaDurationMs; // @dynamic mediaDurationMs;
@property(retain, nonatomic) NSString *mediaName; // @dynamic mediaName;
@property(retain, nonatomic) NSString *mediaThumbAesKey; // @dynamic mediaThumbAesKey;
@property(retain, nonatomic) NSString *mediaThumbUrl; // @dynamic mediaThumbUrl;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *mediaUrl; // @dynamic mediaUrl;

@end


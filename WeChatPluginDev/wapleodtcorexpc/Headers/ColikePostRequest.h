//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ColikeAppInfo, NSString;

@interface ColikePostRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ColikeAppInfo *appInfo; // @dynamic appInfo;
@property(retain, nonatomic) NSString *comment; // @dynamic comment;
@property(retain, nonatomic) NSString *objectBuffer; // @dynamic objectBuffer;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;

@end


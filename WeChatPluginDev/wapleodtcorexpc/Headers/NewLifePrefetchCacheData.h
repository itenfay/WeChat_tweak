//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, NewLifeLocalTabTipsInfo, NewLifeStreamResponse;

@interface NewLifePrefetchCacheData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool isDownloadImage; // @dynamic isDownloadImage;
@property(nonatomic) _Bool isShow; // @dynamic isShow;
@property(retain, nonatomic) NewLifeLocalTabTipsInfo *localTabTipsInfo; // @dynamic localTabTipsInfo;
@property(retain, nonatomic) NSString *redDotPath; // @dynamic redDotPath;
@property(retain, nonatomic) NewLifeStreamResponse *response; // @dynamic response;
@property(nonatomic) unsigned long long startPrefetchTimestamp; // @dynamic startPrefetchTimestamp;
@property(retain, nonatomic) NSString *tabTipsUuid; // @dynamic tabTipsUuid;

@end


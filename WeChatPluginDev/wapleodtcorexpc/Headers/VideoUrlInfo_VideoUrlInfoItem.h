//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ContentId, NSString, VideoCdnInfo;

@interface VideoUrlInfo_VideoUrlInfoItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ContentId *contentId; // @dynamic contentId;
@property(nonatomic) _Bool valid; // @dynamic valid;
@property(retain, nonatomic) NSString *videoApi; // @dynamic videoApi;
@property(nonatomic) unsigned int videoApiExpireTime; // @dynamic videoApiExpireTime;
@property(retain, nonatomic) VideoCdnInfo *videoCdnInfo; // @dynamic videoCdnInfo;

@end


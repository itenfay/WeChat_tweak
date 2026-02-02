//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveListenSpecialConfig, MMListenSimplePlaylistInfo, NSString;

@interface FinderLiveListenPromoteInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bgImgUrl; // @dynamic bgImgUrl;
@property(nonatomic) _Bool isLike; // @dynamic isLike;
@property(nonatomic) _Bool needPreload; // @dynamic needPreload;
@property(retain, nonatomic) MMListenSimplePlaylistInfo *playInfo; // @dynamic playInfo;
@property(retain, nonatomic) FinderLiveListenSpecialConfig *spConfig; // @dynamic spConfig;
@property(retain, nonatomic) NSString *subTitle; // @dynamic subTitle;

@end


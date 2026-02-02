//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenJumpAppInfo, MMListenJumpFinderInfo, MMListenJumpSchemeGetInfo, MMListenSimplePlaylistInfo, NSString;

@interface MMListenJumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenJumpFinderInfo *finderInfo; // @dynamic finderInfo;
@property(retain, nonatomic) NSString *h5Url; // @dynamic h5Url;
@property(retain, nonatomic) NSString *highlightDiscoverLineId; // @dynamic highlightDiscoverLineId;
@property(nonatomic) int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) NSString *jumpWording; // @dynamic jumpWording;
@property(retain, nonatomic) MMListenJumpAppInfo *liteAppInfo; // @dynamic liteAppInfo;
@property(retain, nonatomic) MMListenJumpSchemeGetInfo *schemeGetInfo; // @dynamic schemeGetInfo;
@property(retain, nonatomic) MMListenSimplePlaylistInfo *simplePlaylistInfo; // @dynamic simplePlaylistInfo;

@end


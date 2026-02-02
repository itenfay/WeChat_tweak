//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MusicLiveGetLinkReqInfo, NSString;

@interface MusicLiveGetLinkRespInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int audioType; // @dynamic audioType;
@property(nonatomic) _Bool enableJoinMembership; // @dynamic enableJoinMembership;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) NSString *lyric; // @dynamic lyric;
@property(retain, nonatomic) MusicLiveGetLinkReqInfo *reqInfo; // @dynamic reqInfo;
@property(nonatomic) int ret; // @dynamic ret;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLiveKtvModUserInfo, FinderLiveKtvSongInfo, FinderLiveKtvSongReportInfo, NSData, NSString;

@interface FinderLiveKtvModSongListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *anchorFinderUsername; // @dynamic anchorFinderUsername;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned int modType; // @dynamic modType;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) FinderLiveKtvSongReportInfo *reportInfo; // @dynamic reportInfo;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) FinderLiveKtvSongInfo *songInfo; // @dynamic songInfo;
@property(retain, nonatomic) FinderLiveKtvModUserInfo *userInfo; // @dynamic userInfo;

@end


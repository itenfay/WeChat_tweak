//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLiveBriefMusicInfo, NSData, NSString;

@interface FinderLiveAdjustBackgroundMusicRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int action; // @dynamic action;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int bizScene; // @dynamic bizScene;
@property(nonatomic) unsigned int curSongId; // @dynamic curSongId;
@property(nonatomic) unsigned int curSongRatio; // @dynamic curSongRatio;
@property(nonatomic) unsigned int curVolume; // @dynamic curVolume;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) FinderLiveBriefMusicInfo *newCurBriefMusicInfo; // @dynamic newCurBriefMusicInfo;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;

@end


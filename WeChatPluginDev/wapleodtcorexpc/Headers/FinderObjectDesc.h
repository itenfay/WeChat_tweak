//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderClientDraftExtInfo, FinderExtendedReading, FinderFlowCardDesc, FinderFollowPostInfo, FinderFromAppInfo, FinderGeneralReportInfo, FinderLiveDesc, FinderLocation, FinderLongVideoDesc, FinderMVInfo, FinderMediaExtra, FinderMemberData, FinderMemberQAVO, FinderModFeedInfo, FinderMusicInfo, FinderNewLifeDesc, FinderObjectBGMInfo, FinderObjectEventDesc, FinderOriginalDesc, FinderSimpleTopicInfo, FinderTemplateInfo, FinderTopic, FinderTopicHashTagDesc, FinderVideoTemplateInfo, NSMutableArray, NSString, OriginalSoundInfo;

@interface FinderObjectDesc : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderClientDraftExtInfo *clientDraftExtInfo; // @dynamic clientDraftExtInfo;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(nonatomic) unsigned long long draftObjectId; // @dynamic draftObjectId;
@property(retain, nonatomic) FinderObjectEventDesc *event; // @dynamic event;
@property(retain, nonatomic) FinderExtendedReading *extReading; // @dynamic extReading;
@property(retain, nonatomic) FinderMediaExtra *extra; // @dynamic extra;
@property(retain, nonatomic) FinderLocation *feedLocation; // @dynamic feedLocation;
@property(retain, nonatomic) FinderNewLifeDesc *finderNewlifeDesc; // @dynamic finderNewlifeDesc;
@property(retain, nonatomic) FinderFlowCardDesc *flowCardDesc; // @dynamic flowCardDesc;
@property(retain, nonatomic) FinderObjectBGMInfo *followPostInfo; // @dynamic followPostInfo;
@property(retain, nonatomic) FinderFromAppInfo *fromApp; // @dynamic fromApp;
@property(retain, nonatomic) FinderFollowPostInfo *generalFollowPostInfo; // @dynamic generalFollowPostInfo;
@property(retain, nonatomic) FinderGeneralReportInfo *generalReportInfo; // @dynamic generalReportInfo;
@property(retain, nonatomic) FinderTopicHashTagDesc *hashTagDesc; // @dynamic hashTagDesc;
@property(retain, nonatomic) NSString *highlightDescription; // @dynamic highlightDescription;
@property(retain, nonatomic) FinderMusicInfo *imgFeedBgmInfo; // @dynamic imgFeedBgmInfo;
@property(retain, nonatomic) FinderLiveDesc *liveDesc; // @dynamic liveDesc;
@property(retain, nonatomic) FinderLocation *location; // @dynamic location;
@property(retain, nonatomic) FinderLongVideoDesc *longVideoDesc; // @dynamic longVideoDesc;
@property(retain, nonatomic) NSMutableArray *media; // @dynamic media;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) FinderMemberData *memberData; // @dynamic memberData;
@property(retain, nonatomic) FinderMemberQAVO *memberQaVo; // @dynamic memberQaVo;
@property(retain, nonatomic) NSMutableArray *mentionedMusics; // @dynamic mentionedMusics;
@property(retain, nonatomic) NSMutableArray *mentionedUser; // @dynamic mentionedUser;
@property(retain, nonatomic) FinderModFeedInfo *modFeedInfo; // @dynamic modFeedInfo;
@property(retain, nonatomic) FinderMusicInfo *musicInfo; // @dynamic musicInfo;
@property(retain, nonatomic) FinderMVInfo *mvInfo; // @dynamic mvInfo;
@property(retain, nonatomic) FinderOriginalDesc *originalInfoDesc; // @dynamic originalInfoDesc;
@property(retain, nonatomic) OriginalSoundInfo *originalsoundInfo; // @dynamic originalsoundInfo;
@property(retain, nonatomic) FinderLocation *posterLocation; // @dynamic posterLocation;
@property(retain, nonatomic) NSMutableArray *shortTitle; // @dynamic shortTitle;
@property(retain, nonatomic) FinderSimpleTopicInfo *simpleTopicInfo; // @dynamic simpleTopicInfo;
@property(retain, nonatomic) FinderTemplateInfo *tmplInfo; // @dynamic tmplInfo;
@property(retain, nonatomic) FinderTopic *topic; // @dynamic topic;
@property(retain, nonatomic) FinderVideoTemplateInfo *videoTmplInfo; // @dynamic videoTmplInfo;

@end


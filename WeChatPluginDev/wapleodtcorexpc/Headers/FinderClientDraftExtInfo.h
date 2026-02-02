//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderCropRectModel, FinderEventInfo, FinderMJPublisherInfo, FinderMemberData, FinderMusicReportInfo, NSMutableArray, NSString;

@interface FinderClientDraftExtInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long copyFromFeedId; // @dynamic copyFromFeedId;
@property(nonatomic) unsigned int coverSelectSource; // @dynamic coverSelectSource;
@property(nonatomic) float coverTimeStamp; // @dynamic coverTimeStamp;
@property(retain, nonatomic) NSMutableArray *coverWordInfo; // @dynamic coverWordInfo;
@property(retain, nonatomic) FinderCropRectModel *cropRectModel; // @dynamic cropRectModel;
@property(retain, nonatomic) FinderMusicReportInfo *editMusicReportInfo; // @dynamic editMusicReportInfo;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @dynamic eventInfo;
@property(nonatomic) float feedLatitude; // @dynamic feedLatitude;
@property(nonatomic) float feedLongitude; // @dynamic feedLongitude;
@property(nonatomic) unsigned int lbsFlagType; // @dynamic lbsFlagType;
@property(retain, nonatomic) FinderMemberData *memberData; // @dynamic memberData;
@property(retain, nonatomic) FinderMJPublisherInfo *mjPublisherInfo; // @dynamic mjPublisherInfo;
@property(retain, nonatomic) NSString *musicFollowFeedId; // @dynamic musicFollowFeedId;
@property(nonatomic) unsigned int needPostAtemplateComment; // @dynamic needPostAtemplateComment;
@property(retain, nonatomic) FinderMusicReportInfo *shootMusicReportInfo; // @dynamic shootMusicReportInfo;
@property(nonatomic) unsigned int sourceEnterScene; // @dynamic sourceEnterScene;
@property(retain, nonatomic) NSString *templateFollowFeedId; // @dynamic templateFollowFeedId;
@property(retain, nonatomic) NSString *templateFollowFeedTemplateId; // @dynamic templateFollowFeedTemplateId;
@property(retain, nonatomic) NSString *videoMusicId; // @dynamic videoMusicId;
@property(nonatomic) unsigned int videoSourceType; // @dynamic videoSourceType;
@property(nonatomic) unsigned int waitType; // @dynamic waitType;

@end


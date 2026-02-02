//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderBarInfo, FinderLivePreloadInfo, FinderPreloadInfo, FinderRelatedRecommendTips, FinderStreamLayoutInfo, FinderStreamLongVideoInfo, GetRelatedListPrefetchConfig, NSData, NSMutableArray, NSString, StreamBackupInfo;

@interface FinderGetRelatedListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) StreamBackupInfo *backupInfo; // @dynamic backupInfo;
@property(retain, nonatomic) FinderBarInfo *barInfo; // @dynamic barInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *briefCardNextWording; // @dynamic briefCardNextWording;
@property(retain, nonatomic) NSMutableArray *card; // @dynamic card;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSData *debugMessage; // @dynamic debugMessage;
@property(retain, nonatomic) NSString *fromSessionId; // @dynamic fromSessionId;
@property(retain, nonatomic) NSMutableArray *jumpObject; // @dynamic jumpObject;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderStreamLayoutInfo *layoutInfo; // @dynamic layoutInfo;
@property(retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo; // @dynamic livePreloadInfo;
@property(retain, nonatomic) FinderStreamLongVideoInfo *longVideoInfo; // @dynamic longVideoInfo;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(retain, nonatomic) GetRelatedListPrefetchConfig *prefetchConfig; // @dynamic prefetchConfig;
@property(retain, nonatomic) FinderPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(retain, nonatomic) FinderRelatedRecommendTips *relatedRecommendTips; // @dynamic relatedRecommendTips;
@property(retain, nonatomic) NSString *relatedStreamWording; // @dynamic relatedStreamWording;
@property(retain, nonatomic) NSData *streamLastBuffer; // @dynamic streamLastBuffer;
@property(retain, nonatomic) NSMutableArray *txtCard; // @dynamic txtCard;

@end


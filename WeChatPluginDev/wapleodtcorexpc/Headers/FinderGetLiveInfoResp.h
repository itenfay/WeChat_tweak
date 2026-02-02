//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderGetLiveInfoResp_AnchorInfo, FinderGetLiveInfoResp_LiveClosePageControlInfo, FinderGetLiveInfoResp_LiveCoverImage, FinderGetLiveInfoResp_LiveNotificationDynamicDisplayInfo, FinderGetLiveInfoResp_LivePreviewJoinliveControlInfo, FinderJumpInfo, FinderLiveAbnormalClosedPageInfo, FinderLiveAnchorQuestEntrance, FinderLiveInfo, FinderLiveShareCardDisplayInfo, FinderLiveStreamJumpNavInfo, FinderNotifyMoreLiveInfo, NSMutableArray, NSString;

@interface FinderGetLiveInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveAbnormalClosedPageInfo *abnormalClosePage; // @dynamic abnormalClosePage;
@property(retain, nonatomic) FinderGetLiveInfoResp_AnchorInfo *anchorInfo; // @dynamic anchorInfo;
@property(retain, nonatomic) FinderLiveAnchorQuestEntrance *anchorQuestEntrance; // @dynamic anchorQuestEntrance;
@property(nonatomic) unsigned long long audienceEndPageControl; // @dynamic audienceEndPageControl;
@property(nonatomic) unsigned int autoPlayControlFlag; // @dynamic autoPlayControlFlag;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int bizLiveNewFansNum; // @dynamic bizLiveNewFansNum;
@property(retain, nonatomic) NSMutableArray *closePageActivityBanner; // @dynamic closePageActivityBanner;
@property(retain, nonatomic) FinderGetLiveInfoResp_LiveClosePageControlInfo *closePageControlInfo; // @dynamic closePageControlInfo;
@property(retain, nonatomic) FinderJumpInfo *creatorCenterEntrance; // @dynamic creatorCenterEntrance;
@property(nonatomic) _Bool disableShareCardExpose; // @dynamic disableShareCardExpose;
@property(retain, nonatomic) NSString *generateReplayPageDisplayInfo; // @dynamic generateReplayPageDisplayInfo;
@property(retain, nonatomic) FinderLiveStreamJumpNavInfo *jumpNavInfo; // @dynamic jumpNavInfo;
@property(retain, nonatomic) FinderGetLiveInfoResp_LiveCoverImage *liveCover; // @dynamic liveCover;
@property(retain, nonatomic) FinderJumpInfo *liveDataDetailsJump; // @dynamic liveDataDetailsJump;
@property(retain, nonatomic) NSString *liveDataDetailsJumpWording; // @dynamic liveDataDetailsJumpWording;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) FinderJumpInfo *liveLoyaltyCardJump; // @dynamic liveLoyaltyCardJump;
@property(nonatomic) unsigned int liveNewFansNum; // @dynamic liveNewFansNum;
@property(retain, nonatomic) NSMutableArray *liveSuggestionJump; // @dynamic liveSuggestionJump;
@property(retain, nonatomic) FinderGetLiveInfoResp_LiveNotificationDynamicDisplayInfo *notificationDynamicDisplayInfo; // @dynamic notificationDynamicDisplayInfo;
@property(retain, nonatomic) FinderNotifyMoreLiveInfo *notifyMoreLive; // @dynamic notifyMoreLive;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(retain, nonatomic) FinderGetLiveInfoResp_LivePreviewJoinliveControlInfo *previewJoinliveControlInfo; // @dynamic previewJoinliveControlInfo;
@property(retain, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(nonatomic) unsigned int refreshInterval; // @dynamic refreshInterval;
@property(nonatomic) unsigned int replayPrivilege; // @dynamic replayPrivilege;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) FinderLiveShareCardDisplayInfo *shareCardDisplayInfo; // @dynamic shareCardDisplayInfo;
@property(nonatomic) unsigned int sharePageStatus; // @dynamic sharePageStatus;

@end


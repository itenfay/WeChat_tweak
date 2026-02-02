//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderAttachmentList, FinderContact, FinderFlowCardRecommendReason, FinderFoldedLayout, FinderIpRegionInfo, FinderLiveInfo, FinderMusicRealtimeInfo, FinderObjectAdInfo, FinderObjectClientLocalBuffer, FinderObjectDesc, FinderObjectExtend, FinderObjectHotTopicList, FinderObjectHotWordInfo, FinderObjectPlaceHolderInfo, FinderObjectWebInfo, FinderPlayHistoryInfo, FinderPromotionJumpInfo, FinderPublisherInfo, FinderRecommendLabel, FinderSnsShareInfo, FinderTipsInfo, FinderVideo, NSData, NSMutableArray, NSString;

@interface FinderObject : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)VoipRecentStatus_isVideo;
- (_Bool)VoipRecentStatus_isPhotos;
- (_Bool)VoipRecentStatus_isLegal;

// Remaining properties
@property(nonatomic) unsigned int adFlag; // @dynamic adFlag;
@property(retain, nonatomic) FinderObjectAdInfo *adInfo; // @dynamic adInfo;
@property(retain, nonatomic) FinderAttachmentList *attachmentList; // @dynamic attachmentList;
@property(nonatomic) unsigned long long blockCgiFlag; // @dynamic blockCgiFlag;
@property(retain, nonatomic) FinderObjectClientLocalBuffer *clientLocalBuffer; // @dynamic clientLocalBuffer;
@property(nonatomic) unsigned int commentClose; // @dynamic commentClose;
@property(nonatomic) unsigned int commentCount; // @dynamic commentCount;
@property(retain, nonatomic) NSMutableArray *commentList; // @dynamic commentList;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(retain, nonatomic) NSData *cookie; // @dynamic cookie;
@property(nonatomic) unsigned int createtime; // @dynamic createtime;
@property(retain, nonatomic) NSString *debugMessage; // @dynamic debugMessage;
@property(nonatomic) unsigned int deletetime; // @dynamic deletetime;
@property(nonatomic) unsigned long long displayid; // @dynamic displayid;
@property(retain, nonatomic) NSString *eupdOob; // @dynamic eupdOob;
@property(nonatomic) unsigned int eventStatusFlag; // @dynamic eventStatusFlag;
@property(nonatomic) unsigned int favCount; // @dynamic favCount;
@property(nonatomic) unsigned int favFlag; // @dynamic favFlag;
@property(retain, nonatomic) FinderPromotionJumpInfo *finderPromotionJumpinfo; // @dynamic finderPromotionJumpinfo;
@property(retain, nonatomic) FinderFlowCardRecommendReason *flowCardRecommandReason; // @dynamic flowCardRecommandReason;
@property(nonatomic) unsigned int foldedFlag; // @dynamic foldedFlag;
@property(retain, nonatomic) FinderFoldedLayout *foldedLayout; // @dynamic foldedLayout;
@property(nonatomic) unsigned int followCount; // @dynamic followCount;
@property(nonatomic) unsigned int followFeedCount; // @dynamic followFeedCount;
@property(nonatomic) unsigned int forwardCount; // @dynamic forwardCount;
@property(nonatomic) unsigned int forwardStyle; // @dynamic forwardStyle;
@property(retain, nonatomic) NSMutableArray *friendCommentList; // @dynamic friendCommentList;
@property(nonatomic) unsigned int friendFavCount; // @dynamic friendFavCount;
@property(nonatomic) unsigned int friendLikeCount; // @dynamic friendLikeCount;
@property(nonatomic) unsigned int funcFlag; // @dynamic funcFlag;
@property(retain, nonatomic) FinderObjectHotTopicList *hotTopics; // @dynamic hotTopics;
@property(retain, nonatomic) FinderObjectHotWordInfo *hotWordInfo; // @dynamic hotWordInfo;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int incFriendLikeCount; // @dynamic incFriendLikeCount;
@property(retain, nonatomic) NSString *innerRecommendReason; // @dynamic innerRecommendReason;
@property(retain, nonatomic) NSString *internalFeedbackUrl; // @dynamic internalFeedbackUrl;
@property(retain, nonatomic) FinderIpRegionInfo *ipRegionInfo; // @dynamic ipRegionInfo;
@property(nonatomic) _Bool isBlocked; // @dynamic isBlocked;
@property(nonatomic) unsigned int isPoiSameCity; // @dynamic isPoiSameCity;
@property(retain, nonatomic) NSData *likeBuffer; // @dynamic likeBuffer;
@property(nonatomic) unsigned int likeCount; // @dynamic likeCount;
@property(nonatomic) unsigned int likeFlag; // @dynamic likeFlag;
@property(retain, nonatomic) NSMutableArray *likeList; // @dynamic likeList;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) NSData *liveRelatedLastBuffer; // @dynamic liveRelatedLastBuffer;
@property(retain, nonatomic) FinderVideo *longVideoNoneed; // @dynamic longVideoNoneed;
@property(nonatomic) unsigned int mentionedListSelected; // @dynamic mentionedListSelected;
@property(retain, nonatomic) NSMutableArray *mentionedUserContact; // @dynamic mentionedUserContact;
@property(nonatomic) unsigned int msgEventFlag; // @dynamic msgEventFlag;
@property(retain, nonatomic) NSString *msgId; // @dynamic msgId;
@property(retain, nonatomic) FinderMusicRealtimeInfo *musicRealtimeInfo; // @dynamic musicRealtimeInfo;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) FinderObjectDesc *objectDesc; // @dynamic objectDesc;
@property(retain, nonatomic) FinderObjectExtend *objectExtend; // @dynamic objectExtend;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int objectStatus; // @dynamic objectStatus;
@property(nonatomic) unsigned int objectType; // @dynamic objectType;
@property(nonatomic) unsigned int orgRecommendType; // @dynamic orgRecommendType;
@property(retain, nonatomic) FinderContact *originalContact; // @dynamic originalContact;
@property(nonatomic) unsigned int originalFlag; // @dynamic originalFlag;
@property(nonatomic) unsigned int permissionFlag; // @dynamic permissionFlag;
@property(retain, nonatomic) FinderObjectPlaceHolderInfo *placeHolderInfo; // @dynamic placeHolderInfo;
@property(retain, nonatomic) FinderPlayHistoryInfo *playhistoryInfo; // @dynamic playhistoryInfo;
@property(retain, nonatomic) NSString *posTriggerConfig; // @dynamic posTriggerConfig;
@property(nonatomic) unsigned int previewFlag; // @dynamic previewFlag;
@property(nonatomic) unsigned int privateFlag; // @dynamic privateFlag;
@property(retain, nonatomic) FinderPublisherInfo *publisherInfo; // @dynamic publisherInfo;
@property(nonatomic) unsigned int readCount; // @dynamic readCount;
@property(retain, nonatomic) FinderRecommendLabel *recommendLabel; // @dynamic recommendLabel;
@property(retain, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(nonatomic) unsigned int recommendReasonType; // @dynamic recommendReasonType;
@property(nonatomic) unsigned int recommendType; // @dynamic recommendType;
@property(retain, nonatomic) NSMutableArray *recommenderList; // @dynamic recommenderList;
@property(retain, nonatomic) FinderContact *refObjectContact; // @dynamic refObjectContact;
@property(nonatomic) unsigned long long refObjectFlag; // @dynamic refObjectFlag;
@property(retain, nonatomic) NSString *refObjectNonceId; // @dynamic refObjectNonceId;
@property(nonatomic) unsigned long long refObjectid; // @dynamic refObjectid;
@property(nonatomic) unsigned int ringtoneCount; // @dynamic ringtoneCount;
@property(nonatomic) unsigned int secondaryShowFlag; // @dynamic secondaryShowFlag;
@property(retain, nonatomic) NSString *sendShareFavWording; // @dynamic sendShareFavWording;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) _Bool showOriginal; // @dynamic showOriginal;
@property(retain, nonatomic) FinderSnsShareInfo *snsShareInfo; // @dynamic snsShareInfo;
@property(nonatomic) unsigned int stickyTime; // @dynamic stickyTime;
@property(retain, nonatomic) FinderTipsInfo *tipsInfo; // @dynamic tipsInfo;
@property(retain, nonatomic) NSString *tipsWording; // @dynamic tipsWording;
@property(nonatomic) unsigned int urlValidDuration; // @dynamic urlValidDuration;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) NSString *verifyInfoBuf; // @dynamic verifyInfoBuf;
@property(nonatomic) unsigned int warnFlag; // @dynamic warnFlag;
@property(retain, nonatomic) NSString *warnWording; // @dynamic warnWording;
@property(retain, nonatomic) FinderObjectWebInfo *webInfo; // @dynamic webInfo;
@property(retain, nonatomic) NSString *wxStatusIconId; // @dynamic wxStatusIconId;
@property(nonatomic) unsigned int wxStatusPermissionFlag; // @dynamic wxStatusPermissionFlag;
@property(nonatomic) unsigned int wxStatusRefCount; // @dynamic wxStatusRefCount;
@property(retain, nonatomic) NSString *wxaGameExportId; // @dynamic wxaGameExportId;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderNegativeFeedback, LiveItemInfo, NSString;

@interface TLRecFinderCardData : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)reportRecReason;

// Remaining properties
@property(nonatomic) unsigned int alignment; // @dynamic alignment;
@property(nonatomic) unsigned int alignmentReal; // @dynamic alignmentReal;
@property(retain, nonatomic) NSString *bizUin; // @dynamic bizUin;
@property(nonatomic) unsigned int cardRecType; // @dynamic cardRecType;
@property(nonatomic) unsigned int cardShowStyle; // @dynamic cardShowStyle;
@property(retain, nonatomic) NSString *coverImgUrl; // @dynamic coverImgUrl;
@property(retain, nonatomic) NSString *expType; // @dynamic expType;
@property(nonatomic) unsigned int finderCommentCount; // @dynamic finderCommentCount;
@property(nonatomic) unsigned int finderCoverHeight; // @dynamic finderCoverHeight;
@property(nonatomic) unsigned int finderCoverWidth; // @dynamic finderCoverWidth;
@property(nonatomic) unsigned int finderCreateTime; // @dynamic finderCreateTime;
@property(nonatomic) unsigned int finderDuration; // @dynamic finderDuration;
@property(retain, nonatomic) NSString *finderEncryptUserName; // @dynamic finderEncryptUserName;
@property(retain, nonatomic) NSString *finderExportId; // @dynamic finderExportId;
@property(retain, nonatomic) NSString *finderExportUsername; // @dynamic finderExportUsername;
@property(nonatomic) unsigned int finderHeight; // @dynamic finderHeight;
@property(nonatomic) unsigned int finderLikeCount; // @dynamic finderLikeCount;
@property(nonatomic) unsigned int finderMediaType; // @dynamic finderMediaType;
@property(retain, nonatomic) NSString *finderObjectId; // @dynamic finderObjectId;
@property(retain, nonatomic) NSString *finderObjectNonceId; // @dynamic finderObjectNonceId;
@property(retain, nonatomic) NSString *finderSessionBuffer; // @dynamic finderSessionBuffer;
@property(retain, nonatomic) NSString *finderUin; // @dynamic finderUin;
@property(nonatomic) unsigned int finderWidth; // @dynamic finderWidth;
@property(nonatomic) unsigned int hasRedpacketCover; // @dynamic hasRedpacketCover;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;
@property(retain, nonatomic) LiveItemInfo *liveInfo; // @dynamic liveInfo;
@property(nonatomic) unsigned int msgRecType; // @dynamic msgRecType;
@property(retain, nonatomic) FinderNegativeFeedback *negativeFeedbackInfo; // @dynamic negativeFeedbackInfo;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(nonatomic) unsigned long long objectFlag; // @dynamic objectFlag;
@property(retain, nonatomic) NSString *recInfo; // @dynamic recInfo;
@property(retain, nonatomic) NSString *recSummary; // @dynamic recSummary;
@property(retain, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(nonatomic) unsigned int recommendSendTime; // @dynamic recommendSendTime;
@property(retain, nonatomic) NSString *reportInfo; // @dynamic reportInfo;
@property(nonatomic) _Bool shouldCheckSubscription; // @dynamic shouldCheckSubscription;
@property(nonatomic) unsigned int showFinder; // @dynamic showFinder;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) _Bool userHasDeleted; // @dynamic userHasDeleted;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(nonatomic) int wrapperFinderShowType; // @dynamic wrapperFinderShowType;
@property(retain, nonatomic) NSString *wrapperRecommedTitle; // @dynamic wrapperRecommedTitle;
@property(nonatomic) unsigned int wrapperShowNegativeFeedbackReason; // @dynamic wrapperShowNegativeFeedbackReason;

@end


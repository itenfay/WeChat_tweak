//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJoinLiveMsgBubbleInfo, FinderJoinLiveVisibleInfo, FinderJumpInfo, FinderLiveContact, FinderLiveJoinLiveMsgExtInfo, FinderLiveKtvExtInfo, FinderLiveKtvPlayerWaitList, FinderLiveUserQuitLiveGuideInfo, LiveDescInfo, NSMutableArray, NSString;

@interface FinderJoinLiveRespExtend : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveContact *anchorContact; // @dynamic anchorContact;
@property(retain, nonatomic) NSString *anchorGameHonoraryTitle; // @dynamic anchorGameHonoraryTitle;
@property(retain, nonatomic) FinderJumpInfo *appRecordScreenGameLivePendantJumpInfo; // @dynamic appRecordScreenGameLivePendantJumpInfo;
@property(retain, nonatomic) NSMutableArray *buttonDisplayPriorityList; // @dynamic buttonDisplayPriorityList;
@property(nonatomic) _Bool enableDescExtend; // @dynamic enableDescExtend;
@property(nonatomic) _Bool isNeverJoinFanclub; // @dynamic isNeverJoinFanclub;
@property(retain, nonatomic) FinderJoinLiveMsgBubbleInfo *joinliveMsgBubbleInfo; // @dynamic joinliveMsgBubbleInfo;
@property(retain, nonatomic) FinderJoinLiveVisibleInfo *joinliveVisibleInfo; // @dynamic joinliveVisibleInfo;
@property(retain, nonatomic) FinderLiveKtvExtInfo *ktvExtInfo; // @dynamic ktvExtInfo;
@property(retain, nonatomic) FinderLiveKtvPlayerWaitList *ktvPlayerWaitList; // @dynamic ktvPlayerWaitList;
@property(retain, nonatomic) LiveDescInfo *liveDescInfo; // @dynamic liveDescInfo;
@property(retain, nonatomic) NSMutableArray *liveModeControlInfoList; // @dynamic liveModeControlInfoList;
@property(retain, nonatomic) FinderJumpInfo *playTogetherIconJumpInfo; // @dynamic playTogetherIconJumpInfo;
@property(retain, nonatomic) FinderLiveJoinLiveMsgExtInfo *selfJoinliveMsgExtInfo; // @dynamic selfJoinliveMsgExtInfo;
@property(retain, nonatomic) FinderLiveUserQuitLiveGuideInfo *userQuitLiveGuideInfo; // @dynamic userQuitLiveGuideInfo;

@end


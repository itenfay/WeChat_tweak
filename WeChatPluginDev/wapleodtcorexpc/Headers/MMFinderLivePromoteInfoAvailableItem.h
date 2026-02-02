//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeInfo, FinderLivePromoteInfoAvailableItem_AdvertisementExtBuffer, FinderLivePromoteInfoAvailableItem_AppDownLoadExtBuffer, FinderLivePromoteInfoAvailableItem_JumpInfoExtBuffer, FinderLivePromoteInfoAvailableItem_ListenExtBuffer, FinderLivePromoteInfoAvailableItem_LiveNoticeExtBuffer, FinderLivePromoteInfoAvailableItem_MemberZoneExtBuffer, FinderLivePromoteInfoAvailableItem_MiniProgramExtBuffer, FinderLivePromoteInfoAvailableItem_OtherExtBuffer, FinderLivePromoteInfoAvailableItem_PaidCollectionExtBuffer, FinderLivePromoteInfoAvailableItem_ProgrammeListExtBuffer, FinderLivePromoteInfoAvailableItem_RedPacketCoverExtBuffer, FinderLivePromoteInfoAvailableItem_WeComContactExtBuffer, FinderLivePromoteInfoListWecomContact, NSString;

@interface MMFinderLivePromoteInfoAvailableItem : NSObject
{
    unsigned int _type;
    unsigned int _businessType;
    unsigned int _isAvailable;
    unsigned int _isAddable;
    unsigned int _canShow;
    unsigned int _status;
    NSString *_statusTips;
    FinderLiveNoticeInfo *_noticeInfo;
    FinderLivePromoteInfoListWecomContact *_wecomContact;
    FinderLivePromoteInfoAvailableItem_LiveNoticeExtBuffer *_liveNoticeExtBuffer;
    FinderLivePromoteInfoAvailableItem_WeComContactExtBuffer *_weComContactExtBuffer;
    FinderLivePromoteInfoAvailableItem_ProgrammeListExtBuffer *_programmeListExtBuffer;
    FinderLivePromoteInfoAvailableItem_JumpInfoExtBuffer *_jumpInfoExtBuffer;
    FinderLivePromoteInfoAvailableItem_MemberZoneExtBuffer *_memberZoneExtBuffer;
    FinderLivePromoteInfoAvailableItem_AdvertisementExtBuffer *_advertisementExtBuffer;
    FinderLivePromoteInfoAvailableItem_AppDownLoadExtBuffer *_appDownLoadExtBuffer;
    FinderLivePromoteInfoAvailableItem_MiniProgramExtBuffer *_miniProgramExtBuffer;
    FinderLivePromoteInfoAvailableItem_OtherExtBuffer *_otherExtBuffer;
    FinderLivePromoteInfoAvailableItem_RedPacketCoverExtBuffer *_redPacketCoverExtBuffer;
    FinderLivePromoteInfoAvailableItem_ListenExtBuffer *_listenExtBuffer;
    FinderLivePromoteInfoAvailableItem_PaidCollectionExtBuffer *_paidCollectionExtBuffer;
}

+ (_Bool)shouldReportAtPromoteManagerAvaiableListWithType:(unsigned int)arg1;
+ (id)createAnchorPromoteAvailableItemFrom:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLivePromoteInfoAvailableItem_PaidCollectionExtBuffer *paidCollectionExtBuffer; // @synthesize paidCollectionExtBuffer=_paidCollectionExtBuffer;
@property(retain, nonatomic) FinderLivePromoteInfoAvailableItem_ListenExtBuffer *listenExtBuffer; // @synthesize listenExtBuffer=_listenExtBuffer;
@property(retain, nonatomic) FinderLivePromoteInfoAvailableItem_RedPacketCoverExtBuffer *redPacketCoverExtBuffer; // @synthesize redPacketCoverExtBuffer=_redPacketCoverExtBuffer;
@property(retain, nonatomic) FinderLivePromoteInfoAvailableItem_OtherExtBuffer *otherExtBuffer; // @synthesize otherExtBuffer=_otherExtBuffer;
@property(retain, nonatomic) FinderLivePromoteInfoAvailableItem_MiniProgramExtBuffer *miniProgramExtBuffer; // @synthesize miniProgramExtBuffer=_miniProgramExtBuffer;
@property(retain, nonatomic) FinderLivePromoteInfoAvailableItem_AppDownLoadExtBuffer *appDownLoadExtBuffer; // @synthesize appDownLoadExtBuffer=_appDownLoadExtBuffer;
@property(retain, nonatomic) FinderLivePromoteInfoAvailableItem_AdvertisementExtBuffer *advertisementExtBuffer; // @synthesize advertisementExtBuffer=_advertisementExtBuffer;
@property(retain, nonatomic) FinderLivePromoteInfoAvailableItem_MemberZoneExtBuffer *memberZoneExtBuffer; // @synthesize memberZoneExtBuffer=_memberZoneExtBuffer;
@property(retain, nonatomic) FinderLivePromoteInfoAvailableItem_JumpInfoExtBuffer *jumpInfoExtBuffer; // @synthesize jumpInfoExtBuffer=_jumpInfoExtBuffer;
@property(retain, nonatomic) FinderLivePromoteInfoAvailableItem_ProgrammeListExtBuffer *programmeListExtBuffer; // @synthesize programmeListExtBuffer=_programmeListExtBuffer;
@property(retain, nonatomic) FinderLivePromoteInfoAvailableItem_WeComContactExtBuffer *weComContactExtBuffer; // @synthesize weComContactExtBuffer=_weComContactExtBuffer;
@property(retain, nonatomic) FinderLivePromoteInfoAvailableItem_LiveNoticeExtBuffer *liveNoticeExtBuffer; // @synthesize liveNoticeExtBuffer=_liveNoticeExtBuffer;
@property(retain, nonatomic) FinderLivePromoteInfoListWecomContact *wecomContact; // @synthesize wecomContact=_wecomContact;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(retain, nonatomic) NSString *statusTips; // @synthesize statusTips=_statusTips;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int canShow; // @synthesize canShow=_canShow;
@property(nonatomic) unsigned int isAddable; // @synthesize isAddable=_isAddable;
@property(nonatomic) unsigned int isAvailable; // @synthesize isAvailable=_isAvailable;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end


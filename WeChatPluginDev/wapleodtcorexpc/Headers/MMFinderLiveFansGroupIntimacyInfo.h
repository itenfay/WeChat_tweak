//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, FinderLiveAllRightsInfo, FinderLiveBadgeInfo, FinderLiveFanClubFloatMsgInfo, FinderLiveNewRightsInfo, FinderLiveSuperFanRightInfo, NSString, TaskProgressInfo;

@interface MMFinderLiveFansGroupIntimacyInfo : NSObject
{
    _Bool _noticeReserved;
    _Bool _canReserveNotice;
    unsigned int _currIntimacy;
    unsigned int _nextLevelNeedIntimacy;
    FinderLiveBadgeInfo *_badgeInfo;
    FinderLiveNewRightsInfo *_theNewRightsInfo;
    TaskProgressInfo *_progressInfo;
    NSString *_introductionUrl;
    FinderLiveAllRightsInfo *_allRightsInfo;
    FinderLiveFanClubFloatMsgInfo *_floatMsgInfo;
    FinderLiveSuperFanRightInfo *_superfanRightsInfo;
    FinderJumpInfo *_cancelSuperfanSubscribeJumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfo *cancelSuperfanSubscribeJumpInfo; // @synthesize cancelSuperfanSubscribeJumpInfo=_cancelSuperfanSubscribeJumpInfo;
@property(retain, nonatomic) FinderLiveSuperFanRightInfo *superfanRightsInfo; // @synthesize superfanRightsInfo=_superfanRightsInfo;
@property(retain, nonatomic) FinderLiveFanClubFloatMsgInfo *floatMsgInfo; // @synthesize floatMsgInfo=_floatMsgInfo;
@property(retain, nonatomic) FinderLiveAllRightsInfo *allRightsInfo; // @synthesize allRightsInfo=_allRightsInfo;
@property(nonatomic) _Bool canReserveNotice; // @synthesize canReserveNotice=_canReserveNotice;
@property(nonatomic) _Bool noticeReserved; // @synthesize noticeReserved=_noticeReserved;
@property(retain, nonatomic) NSString *introductionUrl; // @synthesize introductionUrl=_introductionUrl;
@property(retain, nonatomic) TaskProgressInfo *progressInfo; // @synthesize progressInfo=_progressInfo;
@property(retain, nonatomic) FinderLiveNewRightsInfo *theNewRightsInfo; // @synthesize theNewRightsInfo=_theNewRightsInfo;
@property(retain, nonatomic) FinderLiveBadgeInfo *badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property(nonatomic) unsigned int nextLevelNeedIntimacy; // @synthesize nextLevelNeedIntimacy=_nextLevelNeedIntimacy;
@property(nonatomic) unsigned int currIntimacy; // @synthesize currIntimacy=_currIntimacy;

@end


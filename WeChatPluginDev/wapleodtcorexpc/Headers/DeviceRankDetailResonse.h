//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface DeviceRankDetailResonse
{
    _Bool _uiIsFollower;
    _Bool _isLikedCover;
    _Bool _isLike;
    unsigned int _uiDayScore;
    unsigned int _myranknum;
    unsigned int _likecount;
    NSString *_nsCoverUrl;
    NSString *_nsMotto;
    NSString *_nsDayScoreTitle;
    NSArray *_aryRankList;
    NSArray *_aryScoreDescList;
    NSString *_nsSource;
    NSArray *_affectedUserList;
    NSString *_shareUrl;
    NSString *_shareTitle;
    NSArray *_aryStepList;
    NSArray *_aryFollowList;
    NSArray *_aryButtonList;
    NSString *_reportUrl;
    NSArray *_arrRecord;
    NSArray *_arrLikes;
    NSArray *_arrGoal;
}

+ (void)initialize;
+ (void)PBArrayAdd_arrGoal;
+ (void)PBArrayAdd_arrRecord;
+ (void)PBArrayAdd_reportUrl;
+ (void)PBArrayAdd_myranknum;
+ (void)PBArrayAdd_isLikedCover;
+ (void)PBArrayAdd_aryButtonList;
+ (void)PBArrayAdd_uiIsFollower;
+ (void)PBArrayAdd_aryFollowList;
+ (void)PBArrayAdd_aryStepList;
+ (void)PBArrayAdd_shareTitle;
+ (void)PBArrayAdd_shareUrl;
+ (void)PBArrayAdd_affectedUserList;
+ (void)PBArrayAdd_nsSource;
+ (void)PBArrayAdd_aryScoreDescList;
+ (void)PBArrayAdd_aryRankList;
+ (void)PBArrayAdd_uiDayScore;
+ (void)PBArrayAdd_nsDayScoreTitle;
+ (void)PBArrayAdd_nsMotto;
+ (void)PBArrayAdd_nsCoverUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrGoal; // @synthesize arrGoal=_arrGoal;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(retain, nonatomic) NSArray *arrLikes; // @synthesize arrLikes=_arrLikes;
@property(nonatomic) unsigned int likecount; // @synthesize likecount=_likecount;
@property(retain, nonatomic) NSArray *arrRecord; // @synthesize arrRecord=_arrRecord;
@property(retain, nonatomic) NSString *reportUrl; // @synthesize reportUrl=_reportUrl;
@property(nonatomic) unsigned int myranknum; // @synthesize myranknum=_myranknum;
@property(nonatomic) _Bool isLikedCover; // @synthesize isLikedCover=_isLikedCover;
@property(retain, nonatomic) NSArray *aryButtonList; // @synthesize aryButtonList=_aryButtonList;
@property(nonatomic) _Bool uiIsFollower; // @synthesize uiIsFollower=_uiIsFollower;
@property(retain, nonatomic) NSArray *aryFollowList; // @synthesize aryFollowList=_aryFollowList;
@property(retain, nonatomic) NSArray *aryStepList; // @synthesize aryStepList=_aryStepList;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) NSArray *affectedUserList; // @synthesize affectedUserList=_affectedUserList;
@property(retain, nonatomic) NSString *nsSource; // @synthesize nsSource=_nsSource;
@property(retain, nonatomic) NSArray *aryScoreDescList; // @synthesize aryScoreDescList=_aryScoreDescList;
@property(retain, nonatomic) NSArray *aryRankList; // @synthesize aryRankList=_aryRankList;
@property(nonatomic) unsigned int uiDayScore; // @synthesize uiDayScore=_uiDayScore;
@property(retain, nonatomic) NSString *nsDayScoreTitle; // @synthesize nsDayScoreTitle=_nsDayScoreTitle;
@property(retain, nonatomic) NSString *nsMotto; // @synthesize nsMotto=_nsMotto;
@property(retain, nonatomic) NSString *nsCoverUrl; // @synthesize nsCoverUrl=_nsCoverUrl;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


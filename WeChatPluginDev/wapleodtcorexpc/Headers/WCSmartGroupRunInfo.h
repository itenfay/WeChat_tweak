//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet;

@interface WCSmartGroupRunInfo : NSObject
{
    _Bool _bOnlyRecommendGroups;
    _Bool _bSearchRecommendGroups;
    _Bool _bRecommendFromLastMemberIfNeed;
    _Bool _bForbidRecommendOpenIMContact;
    _Bool _bRepick;
    unsigned int _totalGroupCnt;
    unsigned int _totalMMCnt;
    unsigned long long _seq;
    NSArray *_arrInputMemlist;
    NSArray *_arrSessionCopy;
    unsigned long long _taskBeginTime;
    unsigned long long _taskEndTime;
    NSMutableArray *_arrResult;
    NSMutableArray *_arrTimeCost;
    NSMutableArray *_arrSharedGroupCnt;
    NSArray *_arrSharedGroup;
    NSMutableSet *_filterSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *filterSet; // @synthesize filterSet=_filterSet;
@property(retain, nonatomic) NSArray *arrSharedGroup; // @synthesize arrSharedGroup=_arrSharedGroup;
@property(retain, nonatomic) NSMutableArray *arrSharedGroupCnt; // @synthesize arrSharedGroupCnt=_arrSharedGroupCnt;
@property(retain, nonatomic) NSMutableArray *arrTimeCost; // @synthesize arrTimeCost=_arrTimeCost;
@property(retain, nonatomic) NSMutableArray *arrResult; // @synthesize arrResult=_arrResult;
@property(nonatomic) _Bool bRepick; // @synthesize bRepick=_bRepick;
@property(nonatomic) unsigned int totalMMCnt; // @synthesize totalMMCnt=_totalMMCnt;
@property(nonatomic) unsigned int totalGroupCnt; // @synthesize totalGroupCnt=_totalGroupCnt;
@property(nonatomic) unsigned long long taskEndTime; // @synthesize taskEndTime=_taskEndTime;
@property(nonatomic) unsigned long long taskBeginTime; // @synthesize taskBeginTime=_taskBeginTime;
@property(retain, nonatomic) NSArray *arrSessionCopy; // @synthesize arrSessionCopy=_arrSessionCopy;
@property(retain, nonatomic) NSArray *arrInputMemlist; // @synthesize arrInputMemlist=_arrInputMemlist;
@property(nonatomic) _Bool bForbidRecommendOpenIMContact; // @synthesize bForbidRecommendOpenIMContact=_bForbidRecommendOpenIMContact;
@property(nonatomic) _Bool bRecommendFromLastMemberIfNeed; // @synthesize bRecommendFromLastMemberIfNeed=_bRecommendFromLastMemberIfNeed;
@property(nonatomic) _Bool bSearchRecommendGroups; // @synthesize bSearchRecommendGroups=_bSearchRecommendGroups;
@property(nonatomic) _Bool bOnlyRecommendGroups; // @synthesize bOnlyRecommendGroups=_bOnlyRecommendGroups;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
- (id)getSessionByUserName:(id)arg1;
- (id)getInputMemDesc;

@end


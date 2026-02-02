//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, WCSmartGroupCore;
@protocol FTSMultiContactSearchDelegate;

@interface FTSMultiContactSearchLogic : NSObject
{
    NSMutableArray *_arrContact;
    NSMutableArray *_arrGroupContact;
    NSMutableDictionary *_dicContact;
    NSMutableArray *_arrKeywords;
    NSMutableArray *_arrResultWrap;
    _Bool _hasStaredSearch;
    WCSmartGroupCore *_recommendLogic;
    unsigned int _smartGroupSeq;
    NSMutableArray *_arrRecommendContacts;
    _Bool _bNewSearchForSingleQuery;
    _Bool _bStrictMatchGroup;
    _Bool _bForbidRecommendOpenIMContact;
    id <FTSMultiContactSearchDelegate> _delegate;
    NSString *_fullQuery;
    NSArray *_arrShareGroupStrictContact;
}

+ (id)FilterArrKeywords:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool bForbidRecommendOpenIMContact; // @synthesize bForbidRecommendOpenIMContact=_bForbidRecommendOpenIMContact;
@property(nonatomic) _Bool bStrictMatchGroup; // @synthesize bStrictMatchGroup=_bStrictMatchGroup;
@property(retain, nonatomic) NSArray *arrShareGroupStrictContact; // @synthesize arrShareGroupStrictContact=_arrShareGroupStrictContact;
@property(retain, nonatomic) NSString *fullQuery; // @synthesize fullQuery=_fullQuery;
@property(nonatomic) _Bool bNewSearchForSingleQuery; // @synthesize bNewSearchForSingleQuery=_bNewSearchForSingleQuery;
@property(nonatomic) __weak id <FTSMultiContactSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateRecommendContacts:(id)arg1;
- (unsigned int)genSeq;
- (void)finishTask:(id)arg1;
- (_Bool)asyncSearchRecommendsBy:(id)arg1;
- (void)onContactReload;
- (void)handleQueryChanged:(id)arg1 keywords:(id)arg2;
- (void)handleQueryChanged:(id)arg1;
- (void)sortContacts:(id)arg1 matchTips:(id)arg2;
- (void)asyncSearch;
- (id)preFilterSourceContact;
- (void)addOrderedResultFrom:(id)arg1;
- (void)appendResultWrap:(id)arg1;
- (id)getArrRecommendContactResultWrap;
- (id)getArrResultWrap;
- (_Bool)isTargetContact:(id)arg1;
- (void)fillSourceContact;
- (void)initData:(id)arg1;
- (id)initWithQuerys:(id)arg1 andKeywords:(id)arg2;
- (id)init;

@end


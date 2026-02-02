//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSContactDB, FTSTopHitMgr, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol FTSContactSearchTaskDelegate;

@interface FTSContactSearchTask : NSObject
{
    _Bool m_isCancel;
    _Bool m_isRunning;
    FTSContactDB *m_contactDB;
    NSMutableArray *m_arrSingleContact;
    NSMutableArray *m_arrGroupContact;
    NSMutableArray *m_arrBrandContact;
    NSMutableArray *m_allContact;
    NSMutableDictionary *m_dicMatchTips;
    int m_searchType;
    NSString *m_pendingSearchText;
    _Bool _hasSearchDone;
    _Bool _isMultiKeyMatch;
    NSString *_taskKey;
    id <FTSContactSearchTaskDelegate> _delegate;
    FTSTopHitMgr *_topHitMgr;
    NSArray *_extendSearchContacts;
    NSString *_newestQueryText;
    NSString *_lastQueryText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMultiKeyMatch; // @synthesize isMultiKeyMatch=_isMultiKeyMatch;
@property(nonatomic) _Bool hasSearchDone; // @synthesize hasSearchDone=_hasSearchDone;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(retain, nonatomic) NSArray *extendSearchContacts; // @synthesize extendSearchContacts=_extendSearchContacts;
@property(retain, nonatomic) FTSTopHitMgr *topHitMgr; // @synthesize topHitMgr=_topHitMgr;
@property(nonatomic) __weak id <FTSContactSearchTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
- (void)onContactReload;
- (_Bool)isTopHitContactActive:(id)arg1;
- (_Bool)isTopHitContactReady;
- (id)getContactDictionary;
- (_Bool)hasMatchWechatID;
- (id)getMatchTipForUserName:(id)arg1;
- (id)getAllSearchMatchTip;
- (unsigned int)getBrandContactsCount;
- (id)getBrandContacts;
- (unsigned int)getGroupContactsCount;
- (id)getGroupContacts;
- (unsigned int)getSingleContactsCount;
- (id)getSingleContacts;
- (id)getAllContacts;
- (unsigned int)getTotalCount;
- (void)selectContact:(id)arg1;
- (void)sortGroupContacts:(id)arg1 dicMatchTip:(id)arg2 dicSessionTime:(id)arg3;
- (_Bool)checkMultiKeywordMatchInfo:(id)arg1;
- (void)cancelSearch;
- (void)fillMultiKeywordContent:(id)arg1 toHelpItem:(id)arg2;
- (id)getMemSearchContactSourceWithType:(int)arg1;
- (int)getDBQueryType:(int)arg1;
- (void)asyncSearch:(id)arg1 type:(int)arg2 isForce:(_Bool)arg3;
- (void)forceSearch;
- (void)asyncSearch:(id)arg1 type:(int)arg2;
- (void)dealloc;
- (void)copyResultFromHomeTask:(id)arg1 withSearchType:(int)arg2;
- (id)initWithDB:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


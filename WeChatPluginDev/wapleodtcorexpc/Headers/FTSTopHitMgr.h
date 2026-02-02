//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSTopHitItem, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol FTSTopHitDelegate;

@interface FTSTopHitMgr : NSObject
{
    NSMutableArray *_arrTopHitContactItem;
    NSMutableArray *_arrTopHitAddressBookItem;
    NSMutableDictionary *_dicTopHitExtItem;
    FTSTopHitItem *_thMemberMatchedGroup;
    NSMutableDictionary *_dicTopHitResultItem;
    NSMutableDictionary *_dicTopHitResultItemValue;
    NSMutableDictionary *_dicTopHitResultCache;
    NSMutableArray *_arrAllTopHitMMGroupResult;
    NSString *_lastQueryText;
    _Bool _hasInit;
    _Bool _bNeedSearch;
    _Bool _needSaveContactTopHit;
    _Bool _needSaveAddressBookTopHit;
    _Bool _needSaveExtTopHit;
    unsigned int _thType;
    id <FTSTopHitDelegate> _delegateForContactSearch;
    id <FTSTopHitDelegate> _delegateForFeatureSearch;
    id <FTSTopHitDelegate> _delegateForWeAppSearch;
    id <FTSTopHitDelegate> _delegateForFinderSearch;
    id <FTSTopHitDelegate> _delegateForKFContactSearch;
    NSSet *_ignoreSpecTypes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *ignoreSpecTypes; // @synthesize ignoreSpecTypes=_ignoreSpecTypes;
@property(nonatomic) __weak id <FTSTopHitDelegate> delegateForKFContactSearch; // @synthesize delegateForKFContactSearch=_delegateForKFContactSearch;
@property(nonatomic) __weak id <FTSTopHitDelegate> delegateForFinderSearch; // @synthesize delegateForFinderSearch=_delegateForFinderSearch;
@property(nonatomic) __weak id <FTSTopHitDelegate> delegateForWeAppSearch; // @synthesize delegateForWeAppSearch=_delegateForWeAppSearch;
@property(nonatomic) __weak id <FTSTopHitDelegate> delegateForFeatureSearch; // @synthesize delegateForFeatureSearch=_delegateForFeatureSearch;
@property(nonatomic) __weak id <FTSTopHitDelegate> delegateForContactSearch; // @synthesize delegateForContactSearch=_delegateForContactSearch;
- (void)logSearchInfo;
- (void)checkAndFillTimestamp;
- (void)doReportTopHitStatus;
- (void)tryReportTopHitStatus;
- (_Bool)isOpenRemovalABTest;
- (_Bool)isContactType:(unsigned int)arg1;
- (void)removeTopHitItem:(id)arg1 forTopHitType:(unsigned int)arg2;
- (void)onAppTerminate;
- (void)onClearData;
- (void)onEnterBackGround;
- (void)trySaveTopHitExtItem;
- (void)trySaveTopHitContactItem;
- (void)trySaveTopHitItem;
- (void)tryLoadTopHitItem;
- (id)pathForTopHitExtItem;
- (id)pathForTopHitContactItem;
- (void)clearTopHitValue;
- (void)clearTopHitResult;
- (id)getTopHitItems:(unsigned int)arg1;
- (unsigned int)getTopHitCount:(unsigned int)arg1;
- (_Bool)hasTopHit:(unsigned int)arg1;
- (void)sortTopHitValueList:(id)arg1;
- (_Bool)selectItemKey:(id)arg1 typeKey:(id)arg2;
- (unsigned int)convertFeatureIDFromItemKey:(id)arg1;
- (id)convertTopHitKeyFromType:(unsigned int)arg1;
- (id)getTopHitItemKey:(id)arg1;
- (void)addScore:(id)arg1 arrTopHitItem:(id)arg2;
- (void)mergeTopHitMMGroup:(id)arg1 withDicMember:(id)arg2;
- (void)selectMMGroup:(id)arg1 matchTip:(id)arg2;
- (void)selectItem:(id)arg1 type:(unsigned int)arg2;
- (void)removeBaseTopHitResult:(id)arg1 count:(unsigned long long)arg2;
- (void)calWithMMGroupDisplayResult:(id)arg1 otherCount:(unsigned long long)arg2;
- (_Bool)checkTopHitMatchInfo:(id)arg1 matchTip:(id)arg2;
- (id)findContactInArray:(id)arg1 key:(id)arg2;
- (id)findTopHitValue:(id)arg1 key:(id)arg2;
- (id)targetKeysForTopHitType:(unsigned int)arg1;
- (void)removeInvalidValue:(id)arg1 withTopHitItem:(id)arg2 withTopHitKey:(id)arg3;
- (_Bool)isTopHitList:(id)arg1 keyContainsValue:(id)arg2;
- (void)trySearchMemberGroup:(id)arg1 andTargetKeys:(id)arg2 dictionary:(id)arg3 dicMatchTip:(id)arg4;
- (void)searchTopHit:(id)arg1 dicCheckList:(id)arg2 matchTips:(id)arg3 maxCount:(unsigned int)arg4;
- (_Bool)isSessionActiveForContact:(id)arg1;
- (_Bool)isNormalOrChatRoomContact:(id)arg1;
- (void)searchTopHit:(id)arg1 dicCheckList:(id)arg2 matchTips:(id)arg3;
- (void)setNeedsSearchNextTime;
- (void)cancelSearch;
- (void)doInitWorker;
- (void)initData;
- (void)dealloc;
- (id)initWithType:(unsigned int)arg1;
- (id)init;

@end


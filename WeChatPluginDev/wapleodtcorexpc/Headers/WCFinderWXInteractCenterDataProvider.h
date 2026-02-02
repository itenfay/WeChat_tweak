//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSHashTable, NSMutableArray, NSMutableSet, WCFinderBaseCgi;

@interface WCFinderWXInteractCenterDataProvider : NSObject
{
    _Bool _continueFlag;
    NSHashTable *_observerTable;
    NSMutableArray *_contentVMArray;
    NSMutableSet *_tidContainSet;
    unsigned long long _state;
    long long _selectType;
    NSData *_lastBuffer;
    WCFinderBaseCgi *_cgi;
}

+ (int)genDetailCommentSceneByType:(long long)arg1;
+ (int)genFlowCommentSceneByType:(long long)arg1;
+ (long long)genAllTabFlag;
+ (long long)convertTabFlagToTabType:(long long)arg1;
+ (long long)convertTabTypeToTabFlag:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBaseCgi *cgi; // @synthesize cgi=_cgi;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) long long selectType; // @synthesize selectType=_selectType;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(retain, nonatomic) NSMutableArray *contentVMArray; // @synthesize contentVMArray=_contentVMArray;
@property(retain, nonatomic) NSHashTable *observerTable; // @synthesize observerTable=_observerTable;
- (long long)indexRowForTid:(id)arg1;
- (long long)indexRowForContentVM:(id)arg1;
- (id)contentVMFromTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (_Bool)hasMoreData;
- (unsigned long long)dataCount;
- (unsigned long long)flowViewState;
- (void)deleteContentVM:(id)arg1;
- (void)resetContentInfo;
- (_Bool)isValiadServerDataItem:(id)arg1;
- (id)processServerData:(id)arg1;
- (void)triggerFetchActionBySelectType:(long long)arg1;
- (void)dataAppendFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)dataFail;
- (void)dataFetchSuc;
- (void)dataLoadLocal;
- (void)removeObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)dealloc;
- (void)loadFirstPageData;
- (id)initWithType:(long long)arg1;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, WCFinderBaseCgi, WCFinderDataItem, WCFinderLiveTabInfo;

@interface WCFinderMoreLiveTabInfoDataModel : NSObject
{
    _Bool _continueFlag;
    _Bool _hasFetchData;
    _Bool _isFetchingData;
    _Bool _isFetchingFollowDataFinish;
    _Bool _isStartFetchingFollowData;
    _Bool _isFetchingFollowData;
    _Bool _hasEndLiveNeedRefresh;
    unsigned long long _type;
    WCFinderLiveTabInfo *_tabInfo;
    NSData *_lastBuffer;
    NSMutableArray *_sectionInfos;
    WCFinderBaseCgi *_requestCgi;
    NSMutableArray *_followFoldTidArray;
    WCFinderDataItem *_fetchRelatedListItem;
    WCFinderBaseCgi *_fetchRelatedListCgi;
    NSArray *_fetchRelatedList;
    NSMutableArray *_fetchRelatedTidList;
    unsigned long long _refreshInterval;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasEndLiveNeedRefresh; // @synthesize hasEndLiveNeedRefresh=_hasEndLiveNeedRefresh;
@property(nonatomic) unsigned long long refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(retain, nonatomic) NSMutableArray *fetchRelatedTidList; // @synthesize fetchRelatedTidList=_fetchRelatedTidList;
@property(retain, nonatomic) NSArray *fetchRelatedList; // @synthesize fetchRelatedList=_fetchRelatedList;
@property(retain, nonatomic) WCFinderBaseCgi *fetchRelatedListCgi; // @synthesize fetchRelatedListCgi=_fetchRelatedListCgi;
@property(retain, nonatomic) WCFinderDataItem *fetchRelatedListItem; // @synthesize fetchRelatedListItem=_fetchRelatedListItem;
@property(nonatomic) _Bool isFetchingFollowData; // @synthesize isFetchingFollowData=_isFetchingFollowData;
@property(retain, nonatomic) NSMutableArray *followFoldTidArray; // @synthesize followFoldTidArray=_followFoldTidArray;
@property(retain, nonatomic) WCFinderBaseCgi *requestCgi; // @synthesize requestCgi=_requestCgi;
@property(nonatomic) _Bool isStartFetchingFollowData; // @synthesize isStartFetchingFollowData=_isStartFetchingFollowData;
@property(nonatomic) _Bool isFetchingFollowDataFinish; // @synthesize isFetchingFollowDataFinish=_isFetchingFollowDataFinish;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(retain, nonatomic) NSMutableArray *sectionInfos; // @synthesize sectionInfos=_sectionInfos;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) WCFinderLiveTabInfo *tabInfo; // @synthesize tabInfo=_tabInfo;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)resetModelState;
- (id)initWithTabInfo:(id)arg1 type:(unsigned long long)arg2;

@end


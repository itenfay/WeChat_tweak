//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPoiStreamNearbyInfo, FinderPoiStreamResponse_PoiPrepare, FinderPoiStreamTabList, NSData, NSMutableArray, NSMutableDictionary, NSString, SnsPoiDetail, WCFinderContact, WCFinderPOIParamsModel;
@protocol WCFinderPOIRelatedStreamViewModelDelegate;

@interface WCFinderPOIRelatedStreamViewModel : NSObject
{
    _Bool _stopFetchNextPage;
    _Bool _hasFetchEnterData;
    _Bool _isDataEmpty;
    _Bool _onlyShowPoiName;
    _Bool _nearbyFlag;
    unsigned int _totalFeedsCount;
    int _addressSubType;
    id <WCFinderPOIRelatedStreamViewModelDelegate> _delegate;
    WCFinderPOIParamsModel *_poiParamsModel;
    FinderPoiStreamTabList *_tabList;
    NSMutableArray *_tabInfoArray;
    NSData *_lastBuffer;
    unsigned long long _preFetchNextPageIndex;
    unsigned long long _refreshTime;
    FinderPoiStreamResponse_PoiPrepare *_poiPrepare;
    long long _friendLikeCount;
    unsigned long long _defaultIndex;
    unsigned long long _defaultFilterIndex;
    FinderPoiStreamNearbyInfo *_nearbyInfo;
    unsigned long long _prefetchCount;
    NSMutableDictionary *_dataArrayDict;
    SnsPoiDetail *_poiDetail;
    WCFinderContact *_bindContact;
    NSString *_noticeWording;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *noticeWording; // @synthesize noticeWording=_noticeWording;
@property(retain, nonatomic) WCFinderContact *bindContact; // @synthesize bindContact=_bindContact;
@property(retain, nonatomic) SnsPoiDetail *poiDetail; // @synthesize poiDetail=_poiDetail;
@property(retain, nonatomic) NSMutableDictionary *dataArrayDict; // @synthesize dataArrayDict=_dataArrayDict;
@property(nonatomic) unsigned long long prefetchCount; // @synthesize prefetchCount=_prefetchCount;
@property(retain, nonatomic) FinderPoiStreamNearbyInfo *nearbyInfo; // @synthesize nearbyInfo=_nearbyInfo;
@property(nonatomic) _Bool nearbyFlag; // @synthesize nearbyFlag=_nearbyFlag;
@property(nonatomic) int addressSubType; // @synthesize addressSubType=_addressSubType;
@property(nonatomic) unsigned long long defaultFilterIndex; // @synthesize defaultFilterIndex=_defaultFilterIndex;
@property(nonatomic) unsigned long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(nonatomic) long long friendLikeCount; // @synthesize friendLikeCount=_friendLikeCount;
@property(retain, nonatomic) FinderPoiStreamResponse_PoiPrepare *poiPrepare; // @synthesize poiPrepare=_poiPrepare;
@property(nonatomic) unsigned int totalFeedsCount; // @synthesize totalFeedsCount=_totalFeedsCount;
@property(nonatomic) _Bool onlyShowPoiName; // @synthesize onlyShowPoiName=_onlyShowPoiName;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) _Bool isDataEmpty; // @synthesize isDataEmpty=_isDataEmpty;
@property(nonatomic) unsigned long long preFetchNextPageIndex; // @synthesize preFetchNextPageIndex=_preFetchNextPageIndex;
@property(nonatomic) _Bool hasFetchEnterData; // @synthesize hasFetchEnterData=_hasFetchEnterData;
@property(nonatomic) _Bool stopFetchNextPage; // @synthesize stopFetchNextPage=_stopFetchNextPage;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *tabInfoArray; // @synthesize tabInfoArray=_tabInfoArray;
@property(retain, nonatomic) FinderPoiStreamTabList *tabList; // @synthesize tabList=_tabList;
@property(retain, nonatomic) WCFinderPOIParamsModel *poiParamsModel; // @synthesize poiParamsModel=_poiParamsModel;
@property(nonatomic) __weak id <WCFinderPOIRelatedStreamViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)copyPoiParamsIfNeededForTabIndex:(unsigned long long)arg1;
- (id)poiIDReport;
- (id)finderUsernameReport;
- (id)poiInfoFor21875;
- (id)poiDetailReport;
- (id)shareItemWithDataItem:(id)arg1;
- (id)getCurBindContact;
- (id)getNoticeWording;
- (id)getChatName;
- (id)getPoiInfo;
- (id)poiName;
- (_Bool)isSnSPoiDetailVaild;
- (id)getHeaderSnsPoiDetail;
- (unsigned long long)filterIndexOfType:(unsigned int)arg1;
- (unsigned long long)indexOfTabId:(int)arg1;
- (void)requestPoiTabList;
- (id)enterReportID;
- (id)dataArrayAtIndex:(unsigned long long)arg1 filterIndex:(unsigned long long)arg2;
- (id)tabInfoAtIndex:(unsigned long long)arg1;
- (id)initWithPOIParamsModel:(id)arg1;

@end


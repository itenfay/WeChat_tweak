//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface DataReportPageConfig
{
    NSMutableDictionary *m_pageConfigModels;
    NSMutableArray *m_filterPages;
    NSMutableDictionary *m_needReplenishPages;
}

- (void).cxx_destruct;
- (_Bool)isFinderOrNearbyTabSubPages:(id)arg1;
- (_Bool)isNeedReplenishPage:(id)arg1 withCurPage:(id)arg2;
- (_Bool)isFilterPage:(id)arg1;
- (void)pullCloudConfig;
- (void)parsePageConfig;
- (void)parseFilterConfig;
- (void)parseReplenishConfig;
- (id)getPageConfigModel:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


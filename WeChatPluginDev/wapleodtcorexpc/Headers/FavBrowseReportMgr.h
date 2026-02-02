//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavBrowseDetailData, NSMutableArray, NSString;

@interface FavBrowseReportMgr
{
    _Bool m_needClickStream;
    NSMutableArray *m_arrClickStreamData;
    _Bool m_needAttachBrowseData;
    FavBrowseDetailData *_currentBrowseData;
}

+ (id)findScrollVeiwIn:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FavBrowseDetailData *currentBrowseData; // @synthesize currentBrowseData=_currentBrowseData;
- (void)adaptClickStreamReportForVC:(id)arg1;
- (void)endLogAndReport15508;
- (void)addClickStreamData:(id)arg1;
- (void)startLogFavClickStream;
- (void)adaptBrowseDetailReportForVC:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


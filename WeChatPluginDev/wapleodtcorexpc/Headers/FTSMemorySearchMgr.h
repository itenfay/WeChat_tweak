//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSTopHitMgr, NSMutableArray, NSMutableDictionary, NSString, Package;

@interface FTSMemorySearchMgr : NSObject
{
    _Bool _hasInited;
    NSMutableDictionary *_dicSourceFeatureSearchItem;
    unsigned int _curFeatureListVersion;
    unsigned int _lastCheckPackageTime;
    Package *_downloadingPackage;
    NSMutableDictionary *_dicChinesePinYin;
    NSString *_lastQueryText;
    NSString *_newestQueryText;
    NSMutableArray *_arrLastQueryKeywords;
    NSMutableArray *_arrFeatureResultItem;
    NSMutableArray *_arrFeatureResultItemForDetail;
    NSMutableDictionary *_dicFeatureMatchTip;
    NSMutableDictionary *_dicFeatureMatchTipForDetail;
    NSMutableDictionary *_dicGameMatchTip;
    NSMutableDictionary *_dicGameMatchTipForDetail;
    NSString *_newestDetailPageQueryText;
    NSString *_lastDetailPageQueryText;
    NSMutableArray *_arrDetailPageLastQueryKeywords;
    FTSTopHitMgr *_ftsTopHitMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSTopHitMgr *ftsTopHitMgr; // @synthesize ftsTopHitMgr=_ftsTopHitMgr;
@property(retain, nonatomic) NSMutableArray *arrDetailPageLastQueryKeywords; // @synthesize arrDetailPageLastQueryKeywords=_arrDetailPageLastQueryKeywords;
@property(retain, nonatomic) NSString *lastDetailPageQueryText; // @synthesize lastDetailPageQueryText=_lastDetailPageQueryText;
@property(retain, nonatomic) NSString *newestDetailPageQueryText; // @synthesize newestDetailPageQueryText=_newestDetailPageQueryText;
@property(readonly, nonatomic) NSMutableDictionary *dicGameMatchTipForDetail; // @synthesize dicGameMatchTipForDetail=_dicGameMatchTipForDetail;
@property(readonly, nonatomic) NSMutableDictionary *dicGameMatchTip; // @synthesize dicGameMatchTip=_dicGameMatchTip;
@property(readonly, nonatomic) NSMutableDictionary *dicFeatureMatchTipForDetail; // @synthesize dicFeatureMatchTipForDetail=_dicFeatureMatchTipForDetail;
@property(readonly, nonatomic) NSMutableDictionary *dicFeatureMatchTip; // @synthesize dicFeatureMatchTip=_dicFeatureMatchTip;
@property(readonly, nonatomic) NSMutableArray *arrFeatureResultItemForDetail; // @synthesize arrFeatureResultItemForDetail=_arrFeatureResultItemForDetail;
@property(readonly, nonatomic) NSMutableArray *arrFeatureResultItem; // @synthesize arrFeatureResultItem=_arrFeatureResultItem;
@property(retain, nonatomic) NSMutableArray *arrLastQueryKeywords; // @synthesize arrLastQueryKeywords=_arrLastQueryKeywords;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
- (_Bool)isTopHitFeatureShouldFilterOut:(id)arg1;
- (_Bool)isTopHitFeatureReady;
- (id)getFeatureDictionary;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;
- (void)updateVersion:(unsigned int)arg1;
- (unsigned int)getCurrenPackageVersion;
- (id)getFeatureIcon:(unsigned int)arg1;
- (id)getFeatureListFilePath:(id)arg1;
- (id)getFeatureListVersionFile;
- (id)getFeatureListTempZipPayloadPath;
- (id)getFeatureListZipPayloadPath;
- (id)getFeatureListPackageZipFile;
- (id)getFeatureListPackageRootPath;
- (void)onAuthOK;
- (void)delayCheckUpdate;
- (void)doCheckUpdate;
- (id)getPackageKey;
- (void)onLanguageChange;
- (_Bool)hasSearchDoneForFeatureDetailPage:(id)arg1;
- (void)cancelSearchForFeatureDetailPage;
- (void)asyncSearchFeatureForDetailPage:(id)arg1;
- (_Bool)checkSearchResultHadofficialFeature;
- (id)getDetailMatchTip:(id)arg1 featureID:(unsigned int)arg2;
- (id)getMatchTip:(id)arg1 featureID:(unsigned int)arg2;
- (id)getFeatureItem:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)getFeatureSearchItemCount:(id)arg1;
- (_Bool)hasFeatureSearchResult:(id)arg1;
- (_Bool)hasSearchDone:(id)arg1;
- (void)cancelSearch;
- (void)asyncSearchText:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)sortFeatures:(id)arg1 matchTips:(id)arg2;
- (_Bool)isSepecialFeatureAlwayShowFeatureItem:(id)arg1;
- (_Bool)shouldFilterOutFeatureItem:(id)arg1;
- (id)getSourceSearchItem;
- (id)removeTopHitFeaturesWithinArray:(id)arg1;
- (id)createOfficialAccountsSearchItem;
- (id)createVisionProLoginMsgSearchItem;
- (id)createBrandTemplateMsgSearchItem;
- (id)createWeGameSearchItem;
- (id)createWeChatPayCollAssistSearchItem;
- (id)createWeChatPaySearchItem;
- (id)createWeSportSearchItem;
- (void)initFeatureItem;
- (void)initSearchItem;
- (void)asyncInitFeatureItem;
- (void)asyncInitSearchItem;
- (id)loadSearchItem:(id)arg1;
- (id)convertFeatureItem:(id)arg1;
- (void)doInitWorker;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


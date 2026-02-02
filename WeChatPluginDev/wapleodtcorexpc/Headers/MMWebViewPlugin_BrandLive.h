//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface MMWebViewPlugin_BrandLive
{
    _Bool _hasLiveTitleViewReport;
    _Bool _hasProfileTitleViewLiveReport;
    NSMutableDictionary *_customBrandLiveDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *customBrandLiveDict; // @synthesize customBrandLiveDict=_customBrandLiveDict;
@property(nonatomic) _Bool hasProfileTitleViewLiveReport; // @synthesize hasProfileTitleViewLiveReport=_hasProfileTitleViewLiveReport;
@property(nonatomic) _Bool hasLiveTitleViewReport; // @synthesize hasLiveTitleViewReport=_hasLiveTitleViewReport;
- (void)reportLiveTopBarAction:(_Bool)arg1 fromProfileTopBar:(_Bool)arg2;
- (void)reportLiveTitleViewShow;
- (void)reportProfileTitleViewLiveShow;
- (void)onBrandLivingStatusChange:(id)arg1 isLiving:(_Bool)arg2 finderFeedExportId:(id)arg3;
- (id)getBrandUserNameForCurrentPage;
- (id)getCustomModelForCurrentPage;
- (void)openFinderLiveWithScene:(unsigned int)arg1;
- (_Bool)isCurrentPageBrandLiving;
- (void)pullBizLivingInfo;
- (void)tryfetchBrandLiveInfo;
- (void)updateLiveStatus:(_Bool)arg1;
- (void)updateAndFetchBrandLiveInfo;
- (void)configureCustomBrandLiveModel:(id)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;

@end


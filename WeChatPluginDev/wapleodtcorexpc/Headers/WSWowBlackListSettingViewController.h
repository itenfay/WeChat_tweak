//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString, WSPersonalizedRecommendManager;

@interface WSWowBlackListSettingViewController
{
    _Bool _isRequestingHide;
    _Bool _isRequestingBlock;
    _Bool _isRequestHideByClick;
    _Bool _isRequestBlockByClick;
    MMTableViewInfo *_tableViewInfo;
    NSString *_dontSeeCountStr;
    NSString *_dontAllowSeeCountStr;
    WSPersonalizedRecommendManager *_personalizedRecommendManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WSPersonalizedRecommendManager *personalizedRecommendManager; // @synthesize personalizedRecommendManager=_personalizedRecommendManager;
@property(nonatomic) _Bool isRequestBlockByClick; // @synthesize isRequestBlockByClick=_isRequestBlockByClick;
@property(nonatomic) _Bool isRequestHideByClick; // @synthesize isRequestHideByClick=_isRequestHideByClick;
@property(nonatomic) _Bool isRequestingBlock; // @synthesize isRequestingBlock=_isRequestingBlock;
@property(nonatomic) _Bool isRequestingHide; // @synthesize isRequestingHide=_isRequestingHide;
@property(retain, nonatomic) NSString *dontAllowSeeCountStr; // @synthesize dontAllowSeeCountStr=_dontAllowSeeCountStr;
@property(retain, nonatomic) NSString *dontSeeCountStr; // @synthesize dontSeeCountStr=_dontSeeCountStr;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (void)onChangePersonalizedRecommendSwitch:(id)arg1;
- (id)genPersonalizedRecommendCellManager;
- (void)onRequestGetColikeBlockListEndResult:(_Bool)arg1 withType:(unsigned int)arg2 list:(id)arg3;
- (void)openDontAllowSomebodySee:(id)arg1;
- (void)openDontSeeSomebody:(id)arg1;
- (id)appendUrlString:(id)arg1 withKey:(id)arg2 stringValue:(id)arg3;
- (void)openOpnionFeedback:(id)arg1;
- (void)fixLoadingRect;
- (void)reloadTableView;
- (void)initData;
- (void)initView;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)initNavBar;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


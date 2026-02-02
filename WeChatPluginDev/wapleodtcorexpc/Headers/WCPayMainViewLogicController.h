//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GetAllFunctionResponse, LocationRetriever, NSString, WCPayControlData, WCPayGetGDPRInfoCgi, WCPayJumpRemindControlLogic, WCPayWalletGetAllFunctionCgi;
@protocol WCPayMainViewLogicControllerDelegate;

@interface WCPayMainViewLogicController : NSObject
{
    _Bool _bHasGetPayCardList;
    _Bool _bNeedUpdateOnAppear;
    _Bool _bHasSubTitleCell;
    _Bool _bHasPreloadWeAppEnv;
    _Bool _bHasPrefetchWeApp;
    unsigned int _paycardListLogicTag;
    WCPayControlData *_data;
    id <WCPayMainViewLogicControllerDelegate> _delegate;
    WCPayWalletGetAllFunctionCgi *_getAllFunctionCgi;
    GetAllFunctionResponse *_walletFunctionResp;
    LocationRetriever *_locationRetriver;
    WCPayJumpRemindControlLogic *_jumpRemindControlLogic;
    WCPayGetGDPRInfoCgi *_getGDPRinfoCgi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bHasPrefetchWeApp; // @synthesize bHasPrefetchWeApp=_bHasPrefetchWeApp;
@property(nonatomic) _Bool bHasPreloadWeAppEnv; // @synthesize bHasPreloadWeAppEnv=_bHasPreloadWeAppEnv;
@property(nonatomic) _Bool bHasSubTitleCell; // @synthesize bHasSubTitleCell=_bHasSubTitleCell;
@property(nonatomic) _Bool bNeedUpdateOnAppear; // @synthesize bNeedUpdateOnAppear=_bNeedUpdateOnAppear;
@property(nonatomic) _Bool bHasGetPayCardList; // @synthesize bHasGetPayCardList=_bHasGetPayCardList;
@property(nonatomic) unsigned int paycardListLogicTag; // @synthesize paycardListLogicTag=_paycardListLogicTag;
@property(retain, nonatomic) WCPayGetGDPRInfoCgi *getGDPRinfoCgi; // @synthesize getGDPRinfoCgi=_getGDPRinfoCgi;
@property(retain, nonatomic) WCPayJumpRemindControlLogic *jumpRemindControlLogic; // @synthesize jumpRemindControlLogic=_jumpRemindControlLogic;
@property(retain, nonatomic) LocationRetriever *locationRetriver; // @synthesize locationRetriver=_locationRetriver;
@property(retain, nonatomic) GetAllFunctionResponse *walletFunctionResp; // @synthesize walletFunctionResp=_walletFunctionResp;
@property(retain, nonatomic) WCPayWalletGetAllFunctionCgi *getAllFunctionCgi; // @synthesize getAllFunctionCgi=_getAllFunctionCgi;
@property(nonatomic) __weak id <WCPayMainViewLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPayControlData *data; // @synthesize data=_data;
- (void)stopPayCardListLogic;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)OnWCPayGetGDPRInfoCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayGetGDPRInfoCgiResponseOK:(id)arg1;
- (void)calcHasSubTitleCell;
- (void)checkAndPrefetchMiniApp;
- (void)checkAndPreloadMiniApp;
- (void)onGetWalletAllFunctionCgiResp:(id)arg1;
- (void)openECardLogicDidSuccess:(id)arg1;
- (void)OnGetLocalCachePayCardList:(id)arg1;
- (void)onContinuePayCardListChanged:(id)arg1;
- (void)OnPayCardListChanged:(id)arg1;
- (void)onKindaWebViewPassParams:(id)arg1 returnParams:(id)arg2;
- (void)OnKindaWebViewClose;
- (void)handleCollectionViewDidSelectWithIndexPath:(id)arg1;
- (id)dataHeaderWithSectionIndex:(long long)arg1;
- (id)dataItemWithIndexPath:(id)arg1;
- (long long)dataRowCountWithSectionIndex:(long long)arg1;
- (id)dataGroupInfoWithSection:(long long)arg1;
- (long long)dataSectionCount;
- (_Bool)useSmallBottomMarginInSection;
- (id)getLastActivityItemIndexPath;
- (id)getAllFunctionDetailData;
- (id)getEnterManageSettingWording;
- (_Bool)checkIfNeedUpdateOnAppear;
- (void)setNeedUpdateOnAppear;
- (void)refreshViewDataWhenPopOrDismiss;
- (id)getControlData;
- (void)refreshWithData:(id)arg1;
- (void)checkLocationAndWifiData;
- (void)setupReportData;
- (void)getWalletFounctionDataFromSvr;
- (void)getViewDataFromSvr;
- (void)setupData;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


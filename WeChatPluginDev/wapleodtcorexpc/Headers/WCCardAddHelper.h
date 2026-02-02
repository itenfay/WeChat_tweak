//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCardBatchImportViewController, WCNewCardDetailViewController;
@protocol WCCardAddHelperDelegate;

@interface WCCardAddHelper
{
    id <WCCardAddHelperDelegate> _delegate;
    _Bool _isBatchReturn;
    _Bool _isDetailReturn;
    _Bool _isFromAppBrand;
    unsigned long long _appBrandModeType;
    WCCardBatchImportViewController *_batchImportVC;
    WCNewCardDetailViewController *_cardDetailVC;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromAppBrand; // @synthesize isFromAppBrand=_isFromAppBrand;
@property(nonatomic) _Bool isDetailReturn; // @synthesize isDetailReturn=_isDetailReturn;
@property(nonatomic) _Bool isBatchReturn; // @synthesize isBatchReturn=_isBatchReturn;
@property(nonatomic) __weak WCNewCardDetailViewController *cardDetailVC; // @synthesize cardDetailVC=_cardDetailVC;
@property(nonatomic) __weak WCCardBatchImportViewController *batchImportVC; // @synthesize batchImportVC=_batchImportVC;
@property(nonatomic) unsigned long long appBrandModeType; // @synthesize appBrandModeType=_appBrandModeType;
- (void)onBatchDidBeCleared;
- (void)onCancel;
- (void)onShareFail:(id)arg1;
- (void)onShareSuccess:(id)arg1;
- (void)onImportFail:(id)arg1;
- (void)onImportSuccess:(id)arg1;
- (void)onDetailDidBeCleared;
- (void)onAcceptCardFail:(id)arg1;
- (void)onAcceptCardSuccess:(id)arg1;
- (void)dismissImportVC;
- (void)dismissViewController;
- (void)cancelHandle;
- (void)handleCardListInfo:(id)arg1 isPush:(_Bool)arg2 isFromAppBrand:(_Bool)arg3;
- (void)handleCardListInfo:(id)arg1 isPush:(_Bool)arg2;
- (void)handleCardListInfo:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


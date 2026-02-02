//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationRetriever, NSString, ScanProductItem;
@protocol ProductDetailLogicHelperDelegate;

@interface ProductDetailLogicHelper
{
    LocationRetriever *m_locationRetriver;
    ScanProductItem *m_productItem;
    unsigned long long lastMsgSvrId;
    id <ProductDetailLogicHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ProductDetailLogicHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)sendGetActionInfoRequest:(id)arg1;
- (void)startAsyncGetActionInfo;
- (void)dealloc;
- (id)initWithProductItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


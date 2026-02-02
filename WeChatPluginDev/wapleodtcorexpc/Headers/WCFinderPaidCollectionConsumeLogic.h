//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPaidCollectionInfo, MMTimer, NSData, NSString, WCFinderPaidCollectionConsumeAdapter;
@protocol WCFinderPaidCollectionConsumeLogicDelegate;

@interface WCFinderPaidCollectionConsumeLogic : NSObject
{
    _Bool _waitingBillProcess;
    int _reportScene;
    id <WCFinderPaidCollectionConsumeLogicDelegate> _delegate;
    NSString *_finderUsername;
    FinderPaidCollectionInfo *_paidCollection;
    WCFinderPaidCollectionConsumeAdapter *_consumeAdapter;
    NSString *_sourceFeedID;
    NSString *_billNo;
    NSData *_respBuff;
    unsigned long long _billWaitStartTimestamp;
    MMTimer *_waitBillTimeoutTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *waitBillTimeoutTimer; // @synthesize waitBillTimeoutTimer=_waitBillTimeoutTimer;
@property(nonatomic) unsigned long long billWaitStartTimestamp; // @synthesize billWaitStartTimestamp=_billWaitStartTimestamp;
@property(nonatomic) _Bool waitingBillProcess; // @synthesize waitingBillProcess=_waitingBillProcess;
@property(retain, nonatomic) NSData *respBuff; // @synthesize respBuff=_respBuff;
@property(copy, nonatomic) NSString *billNo; // @synthesize billNo=_billNo;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(copy, nonatomic) NSString *sourceFeedID; // @synthesize sourceFeedID=_sourceFeedID;
@property(retain, nonatomic) WCFinderPaidCollectionConsumeAdapter *consumeAdapter; // @synthesize consumeAdapter=_consumeAdapter;
@property(retain, nonatomic) FinderPaidCollectionInfo *paidCollection; // @synthesize paidCollection=_paidCollection;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) __weak id <WCFinderPaidCollectionConsumeLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPaidCollectionTopicID:(id)arg1 purchaseStateChanged:(_Bool)arg2;
- (void)billProcessTimeout;
- (void)invalidTimeoutTimer;
- (void)endLoadingOnCurrentVC;
- (void)startLoadingOnCurrentVC;
- (id)getCurrentViewController;
- (void)startWaitBillProcessing;
- (void)consumeDidCancel:(id)arg1;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)onPurchaseFailWithMsg:(id)arg1;
- (void)reportWeCoinPanelWithEvent:(id)arg1;
- (id)genConsumeParameterWithMode:(unsigned long long)arg1;
- (void)startWeCoinConsume;
- (void)onfetchFPaidCollectionPayBillFail;
- (void)onfetchPiadCollectionPayBillSuccess;
- (void)fetchPaidCollectionPayBill;
- (void)startPaidCollectionConsume;
- (id)initWithFinderUsername:(id)arg1 paidCollection:(id)arg2 sourceFeedID:(id)arg3 reportScene:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayBypMsgMgr
{
    _Bool _enbalePayByp;
}

@property(nonatomic) _Bool enbalePayByp; // @synthesize enbalePayByp=_enbalePayByp;
- (void)reportBypMsgWithMsgWrap:(id)arg1 reportScene:(unsigned int)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)reportSyncPayBusinessMsgIfNecessary:(id)arg1;
- (void)onExptItemListChange;
- (void)checkAndReportBypPayMsg:(id)arg1;
- (void)onAuthOK;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


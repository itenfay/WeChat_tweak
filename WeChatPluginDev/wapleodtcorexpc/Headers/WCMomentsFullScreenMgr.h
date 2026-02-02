//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCDataItem;

@interface WCMomentsFullScreenMgr
{
    NSString *_fullScreenTid;
    NSString *_fullScreenMid;
    WCDataItem *_dataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NSString *fullScreenMid; // @synthesize fullScreenMid=_fullScreenMid;
@property(retain, nonatomic) NSString *fullScreenTid; // @synthesize fullScreenTid=_fullScreenTid;
- (_Bool)isCurrentDataItemOpenedLiveTask:(id)arg1;
- (void)resetRecordDataIfNeededWithLiveTask:(id)arg1;
- (void)onWillExitLiveWithLiveTask:(id)arg1;
- (void)onCollapseAnimationWillStart:(id)arg1;
- (void)onMinimizeInteractiveWillEnd:(id)arg1;
- (void)templateFullScreenViewController:(id)arg1 closeFullScreenComplete:(id)arg2;
- (void)playerViewControllerCloseAnimationComplete:(id)arg1;
- (void)onViewAnimationWillHide;
- (void)onViewAnimationDidHide;
- (void)reset;
- (_Bool)isFullScreenShow:(id)arg1 mid:(id)arg2;
- (_Bool)isFullScreenShow:(id)arg1;
- (void)removeFullScreenTid:(id)arg1 mid:(id)arg2;
- (void)recordFullScreenTid:(id)arg1 mid:(id)arg2;
- (void)recordFullScreenDataItem:(id)arg1 mid:(id)arg2;
- (void)unRegisterExt;
- (void)registerExt;
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


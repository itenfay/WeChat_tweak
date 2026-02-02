//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCDataItem, WCMomentsMenuActionReportSession, WCUserComment;

@interface WCMomentsMenuReportMgr
{
    _Bool _isShow;
    WCDataItem *_dataItem;
    WCUserComment *_comment;
    long long _contentType;
    long long _scene;
    long long _clickedActionType;
    WCMomentsMenuActionReportSession *_reportSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WCMomentsMenuActionReportSession *reportSession; // @synthesize reportSession=_reportSession;
@property(readonly, nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(readonly, nonatomic) long long clickedActionType; // @synthesize clickedActionType=_clickedActionType;
@property(readonly, nonatomic) long long scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) WCUserComment *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (id)genMomentsMenuReportSessionWithActionType:(long long)arg1;
- (_Bool)canResponseOnClickWithDataItem:(id)arg1 comment:(id)arg2 scene:(long long)arg3 contentType:(long long)arg4;
- (void)reportCancelActionIfNeeded;
- (void)clearData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onMenuControllerDidHide:(id)arg1;
- (void)onClickWithDataItem:(id)arg1 comment:(id)arg2 scene:(long long)arg3 contentType:(long long)arg4 actionType:(long long)arg5;
- (void)onMenuItemWillShowWithDataItem:(id)arg1 comment:(id)arg2 scene:(long long)arg3 contentType:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


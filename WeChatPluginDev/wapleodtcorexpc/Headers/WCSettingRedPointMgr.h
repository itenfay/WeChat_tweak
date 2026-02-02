//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, RedPointCtrlInfo;

@interface WCSettingRedPointMgr
{
    RedPointCtrlInfo *_ctrlInfo;
    NSArray *_validRedPointPathArray;
}

- (void).cxx_destruct;
- (_Bool)canPluginReceiveRedPoint:(id)arg1;
- (void)parseRedPointCtrlMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)delCtrlInfo;
- (_Bool)trySetSeqWhenShowPluginProfileInfo:(id)arg1;
- (_Bool)trySetSeqWhenShowPluginView;
- (_Bool)trySetSeqWhenShowGeneralView;
- (_Bool)trySetSeqWhenShowRecentOptionView;
- (_Bool)trySetSeqWhenShowPrivacyView;
- (_Bool)trySetSeqWhenShowSettingView;
- (_Bool)trySetSeqWhenShowMoreView;
- (_Bool)shouldShowRedPointInPluginItem:(id)arg1;
- (_Bool)shouldShowRedPointInPluginCell;
- (_Bool)shouldShowRedPointInGeneralCell;
- (_Bool)shouldShowRedPointInRecentOption;
- (_Bool)shouldShowRedPointInPrivacy;
- (_Bool)shouldShowRedPointInSetting;
- (_Bool)shouldShowRedPointInMoreTab;
- (void)clearAllData;
- (void)loadData;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


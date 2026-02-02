//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITableView;
@protocol MMFinderLiveConnectMicIncomingAudienceSettingsPanelDelegate;

@interface MMFinderLiveConnectMicIncomingAudienceSettingsPanel
{
    _Bool _canAutoConnect;
    id <MMFinderLiveConnectMicIncomingAudienceSettingsPanelDelegate> _delegate;
    unsigned long long _curConditionType;
    unsigned long long _bannedConditionFlag;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long bannedConditionFlag; // @synthesize bannedConditionFlag=_bannedConditionFlag;
@property(nonatomic) _Bool canAutoConnect; // @synthesize canAutoConnect=_canAutoConnect;
@property(nonatomic) unsigned long long curConditionType; // @synthesize curConditionType=_curConditionType;
@property(nonatomic) __weak id <MMFinderLiveConnectMicIncomingAudienceSettingsPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showSelectConnectModePanel;
- (void)showMicConditionChoosePanel;
- (id)getConditionTitleByType:(unsigned long long)arg1;
- (void)initializeComponents;
- (void)onMMFinderLiveConnectMicSelectConnectModePanelClosed;
- (void)onMMFinderLiveConnectMicSelectConnectModeUpdateCanAutoConnect:(_Bool)arg1;
- (void)onMMFinderLiveConnectMicConditionClose;
- (void)onMMFinderLiveConnectMicConditionChoose:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithCurrentCondition:(unsigned long long)arg1 autoConnect:(_Bool)arg2 bannedConditionsFlag:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


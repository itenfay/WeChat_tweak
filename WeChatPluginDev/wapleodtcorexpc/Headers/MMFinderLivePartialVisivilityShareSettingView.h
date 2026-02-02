//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePartialVisivilitySettingInfo;

@interface MMFinderLivePartialVisivilityShareSettingView
{
    MMFinderLivePartialVisivilitySettingInfo *_partialSettingInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePartialVisivilitySettingInfo *partialSettingInfo; // @synthesize partialSettingInfo=_partialSettingInfo;
- (void)selectVisibleFileListFromAllVisibilityFileLists;
- (void)selectVisibleContactsFromRecentSessions;
- (id)getCustomViewForCreateVisibleFileList;
- (id)getRightViewForVisibleUserFileListCell:(double)arg1;
- (id)getRightViewByCurrentVisibleUsers:(double)arg1;
- (void)layoutConfirmButton;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)arg1 visibilityMode:(long long)arg2 liveMode:(long long)arg3;
- (void)updateConfirmButtonEnabled;
- (void)updateSettingInfo:(id)arg1;
- (void)reloadTableData;
- (double)getContentHeight;
- (id)navTitle;
- (void)initSettingInfo:(id)arg1;
- (id)initWithSettingInfo:(id)arg1 initParam:(id)arg2 forceDarkMode:(_Bool)arg3 rootVC:(id)arg4;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DelaySwitchSettingLogic, MMTableViewInfo, NSIndexPath;

@interface SettingAutoDownloadSightViewController
{
    MMTableViewInfo *m_tableViewInfo;
    unsigned int curImgSettingValue;
    _Bool _shouldHighlightCleanMsgItem;
    long long _from;
    DelaySwitchSettingLogic *_delaySwitchLogic;
    unsigned long long _settingViewType;
    NSIndexPath *_cleanOriginMsgIndex;
}

- (void).cxx_destruct;
@property(nonatomic) NSIndexPath *cleanOriginMsgIndex; // @synthesize cleanOriginMsgIndex=_cleanOriginMsgIndex;
@property(nonatomic) unsigned long long settingViewType; // @synthesize settingViewType=_settingViewType;
@property(retain, nonatomic) DelaySwitchSettingLogic *delaySwitchLogic; // @synthesize delaySwitchLogic=_delaySwitchLogic;
@property(nonatomic) _Bool shouldHighlightCleanMsgItem; // @synthesize shouldHighlightCleanMsgItem=_shouldHighlightCleanMsgItem;
@property(readonly, nonatomic) long long from; // @synthesize from=_from;
- (void)highlightCellAnimated:(id)arg1;
- (void)reportOperate:(long long)arg1;
- (void)voipDoubleLinkSettingChanged:(id)arg1;
- (void)silentDownloadChanged;
- (void)saveCleanOriginMsgChanged:(id)arg1;
- (void)saveIntelligentImgChanged:(id)arg1;
- (void)saveVideoAutoPlayChanged:(id)arg1;
- (void)saveVideoToLibraryChanged:(id)arg1;
- (void)savePhotoToLibraryChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onReturn;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 from:(long long)arg2;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreDownloadView, MMEmoticonStoreDownloadViewConfig, NSString, UIImageView;
@protocol MMEmoticonStoreDownloadLogicDelegate;

@interface MMEmoticonStoreDownloadLogic
{
    long long _scene;
    long long _downloadType;
    id <MMEmoticonStoreDownloadLogicDelegate> _delegate;
    MMEmoticonStoreDownloadViewConfig *_config;
    UIImageView *_downloadedCheck;
    EmoticonStoreDownloadView *_downloadView;
    double _staticBtnWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double staticBtnWidth; // @synthesize staticBtnWidth=_staticBtnWidth;
@property(retain, nonatomic) EmoticonStoreDownloadView *downloadView; // @synthesize downloadView=_downloadView;
@property(retain, nonatomic) UIImageView *downloadedCheck; // @synthesize downloadedCheck=_downloadedCheck;
@property(retain, nonatomic) MMEmoticonStoreDownloadViewConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <MMEmoticonStoreDownloadLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long downloadType; // @synthesize downloadType=_downloadType;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (id)curViewController;
- (void)onAlertViewQuitDownloadBtnClick;
- (void)onTapCancelDownload;
- (void)onTapUninstall;
- (void)onTapUse;
- (void)onTapReward;
- (void)onTapDownload;
- (_Bool)isLongWeCoinType;
- (void)notifyDisplayViewChange;
- (void)onDownloadProgress:(float)arg1;
- (void)onDownloadStatusChangeTo:(unsigned long long)arg1;
- (void)initDownloadedCheckIfNeeded;
- (void)initDownloadViewIfNeeded;
- (void)initViewIfNeeded;
- (id)displayView;
- (double)calMaxDisplayLength;
- (void)updateConfig:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreReportInfo, MMUIViewController;
@protocol StoreEmoticonLiteAppDownloadLogicDelegate;

@interface StoreEmoticonLiteAppDownloadLogic
{
    long long _scene;
    long long _downloadType;
    EmoticonStoreReportInfo *_reportInfo;
    MMUIViewController *_callingVC;
    id <StoreEmoticonLiteAppDownloadLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <StoreEmoticonLiteAppDownloadLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMUIViewController *callingVC; // @synthesize callingVC=_callingVC;
@property(nonatomic) EmoticonStoreReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) long long downloadType; // @synthesize downloadType=_downloadType;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (long long)getLiteAppStatusForStatus:(unsigned long long)arg1;
- (id)curViewController;
- (void)onAlertViewQuitDownloadBtnClick;
- (void)onTapDownloadActivity;
- (void)tryUninstall;
- (void)tryCancelDownload;
- (_Bool)tryDownload;
- (void)onDownloadProgress:(float)arg1;
- (void)onDownloadStatusChangeTo:(unsigned long long)arg1;
- (_Bool)doOperation:(long long)arg1;

@end


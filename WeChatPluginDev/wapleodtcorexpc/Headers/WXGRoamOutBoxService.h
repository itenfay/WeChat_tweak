//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURL, UIView;

@interface WXGRoamOutBoxService
{
    NSURL *_autoTestUrl;
    UIView *_tipsView;
    UIView *_tipsPanView;
    UIView *_documentView;
    NSString *_checkRelativePath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *checkRelativePath; // @synthesize checkRelativePath=_checkRelativePath;
@property(retain, nonatomic) UIView *documentView; // @synthesize documentView=_documentView;
@property(retain, nonatomic) UIView *tipsPanView; // @synthesize tipsPanView=_tipsPanView;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) NSURL *autoTestUrl; // @synthesize autoTestUrl=_autoTestUrl;
- (void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (id)getRemarkWith:(id)arg1;
- (void)changeRemarkWith:(id)arg1 remark:(id)arg2;
- (id)getURLStringWith:(id)arg1;
- (id)getBookmarkWith:(id)arg1;
- (void)saveBookmarkWith:(id)arg1 url:(id)arg2;
- (id)genConcatenatedDataWith:(id)arg1;
- (id)genNewOutBoxDeviceIdFile:(id)arg1;
- (id)checkIsDeviceIdExistValid:(id)arg1;
- (_Bool)checkDeviceIdExist:(id)arg1;
- (id)checkDeviceIdWhenInit:(id)arg1;
- (id)getRelativeURLWithAbsoluteUrl:(id)arg1;
- (void)createBackupMenuWith:(id)arg1;
- (void)checkPermissionWith:(id)arg1;
- (void)writeDataToURL;
- (void)onTapTips;
- (void)handlePanGesture:(id)arg1;
- (void)addTipsViewSecond;
- (void)showDocumentPickerViewControllerWith:(id)arg1;
- (void)showDocumentPickerViewControllerCheckPermissionWith:(id)arg1 path:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


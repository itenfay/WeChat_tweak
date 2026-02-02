//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, MPPageFastLoadEventMgr, NSArray, NSString, NSURLSession;

@interface MPPageFastLoadTmplViewController
{
    _Bool _isInDownloadProcess;
    NSArray *_arrTmplNum;
    MMTableViewInfo *_tableViewInfo;
    MPPageFastLoadEventMgr *_pageFastLoadEventMgr;
    NSURLSession *_urlSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(nonatomic) _Bool isInDownloadProcess; // @synthesize isInDownloadProcess=_isInDownloadProcess;
@property(nonatomic) __weak MPPageFastLoadEventMgr *pageFastLoadEventMgr; // @synthesize pageFastLoadEventMgr=_pageFastLoadEventMgr;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) NSArray *arrTmplNum; // @synthesize arrTmplNum=_arrTmplNum;
- (id)__detailDescFrinPageFastTmplDownloadEndEvent:(unsigned int)arg1;
- (id)__detailNameFromPageFastTmplDownloadState:(unsigned int)arg1;
- (void)onTemplateType:(unsigned int)arg1 downloadEndWithEvent:(unsigned int)arg2 checkTmplInfo:(id)arg3 templateInfo:(id)arg4 descMsg:(id)arg5;
- (void)onTemplateType:(unsigned int)arg1 downloadStateChanged:(unsigned int)arg2 checkTmplInfo:(id)arg3 templateInfo:(id)arg4;
- (void)onResponseHTTPDownloadWebComptDebugPkgLib:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)deleteDebugWebComptPkgLib;
- (void)requestDebugWebComptPkgLib;
- (void)onResponseHTTPCheckTmplInfo:(id)arg1 data:(id)arg2 error:(id)arg3 templateType:(unsigned int)arg4;
- (void)showUpTemplateVersionWithTemplateInfo:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onDownloadDeubugWebComptPkgCellSelected:(id)arg1;
- (void)onDownloadInfoCellSelected:(id)arg1 indexPath:(id)arg2;
- (void)onClearTmplDevCellSelected:(id)arg1 indexPath:(id)arg2;
- (void)onTmplDevInfoCellSelected:(id)arg1 indexPath:(id)arg2;
- (void)onTmplInfoCellSelected:(id)arg1 indexPath:(id)arg2;
- (void)onMPFastLoadTimeoutDisableChanged:(id)arg1;
- (id)mpFastLoadDebugSession;
- (id)currentWebComptPkgSession;
- (id)currentTmplDownloadStateSection;
- (id)currentTmplInfoSection;
- (id)currentDevTmplSection;
- (void)reBuildWebComptPkgLibSection;
- (void)reBuildDownloadInfoSection;
- (void)buildTableViewData;
- (void)initTableView;
- (void)initView;
- (void)onReturn;
- (void)initNavigationBarItem;
- (void)initData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


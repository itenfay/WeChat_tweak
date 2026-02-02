//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;
@protocol IMBFileSystem;

@interface WAWebViewPlugin_PagView
{
    id <IMBFileSystem> _fileSystem;
    NSMutableDictionary *_pagViewDataList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pagViewDataList; // @synthesize pagViewDataList=_pagViewDataList;
@property(nonatomic) __weak id <IMBFileSystem> fileSystem; // @synthesize fileSystem=_fileSystem;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (_Bool)checkDownloadResourceLoadedAndPlay:(id)arg1;
- (void)adjustPagViewPara:(id)arg1 withPara:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)preProcess:(id)arg1;
- (_Bool)removePagView:(id)arg1;
- (void)updatePagView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)insertPagView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)currentAppid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, PAGImage, WCPaySingleDownloadLogic;
@protocol WCPayWebPagViewDelegate;

@interface WCPayWebPagView
{
    _Bool _isNeedFlush;
    _Bool _isForceUpdate;
    int _replaceIndex;
    id <WCPayWebPagViewDelegate> _delegate;
    NSMutableDictionary *_extraInfoDict;
    NSString *_pagUrl;
    WCPaySingleDownloadLogic *_singleDownloadLogic;
    PAGImage *_relplacePagImage;
}

- (void).cxx_destruct;
@property(nonatomic) int replaceIndex; // @synthesize replaceIndex=_replaceIndex;
@property(retain, nonatomic) PAGImage *relplacePagImage; // @synthesize relplacePagImage=_relplacePagImage;
@property(retain, nonatomic) WCPaySingleDownloadLogic *singleDownloadLogic; // @synthesize singleDownloadLogic=_singleDownloadLogic;
@property(nonatomic) _Bool isForceUpdate; // @synthesize isForceUpdate=_isForceUpdate;
@property(retain, nonatomic) NSString *pagUrl; // @synthesize pagUrl=_pagUrl;
@property(nonatomic) _Bool isNeedFlush; // @synthesize isNeedFlush=_isNeedFlush;
@property(retain, nonatomic) NSMutableDictionary *extraInfoDict; // @synthesize extraInfoDict=_extraInfoDict;
@property(nonatomic) __weak id <WCPayWebPagViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 extraInfo:(id)arg3 filePath:(id)arg4 totalLength:(unsigned long long)arg5;
- (void)startLoadPagData;
- (void)setPagURL:(id)arg1 forceUpdate:(_Bool)arg2 pagLoadDelegate:(id)arg3;
- (void)setPagURL:(id)arg1;
- (void)setReplaceImage:(id)arg1 index:(int)arg2;
- (id)getCurrentPagUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WNSaveImageCgi;

@interface WNSaveImageResourceMgr
{
    _Bool _bDownload;
    unsigned int _localId;
    WNSaveImageCgi *_resourceCgi;
    NSArray *_arrFontInfos;
    NSArray *_arrBkgImageInfos;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) _Bool bDownload; // @synthesize bDownload=_bDownload;
@property(retain, nonatomic) NSArray *arrBkgImageInfos; // @synthesize arrBkgImageInfos=_arrBkgImageInfos;
@property(retain, nonatomic) NSArray *arrFontInfos; // @synthesize arrFontInfos=_arrFontInfos;
@property(retain, nonatomic) WNSaveImageCgi *resourceCgi; // @synthesize resourceCgi=_resourceCgi;
- (void)loadFontWithFileName:(id)arg1 andZipFile:(id)arg2;
- (id)wnFontOfSize:(double)arg1 fileName:(id)arg2 andFamilyName:(id)arg3 andZipFile:(id)arg4;
- (void)handleNetworkResource;
- (void)onDownloadNone;
- (void)onDownloadFail;
- (void)onDownloadSuccess;
- (id)getWNBkgImageInfoArr;
- (id)getWNFontInfoArr;
- (void)startDownloadResources:(unsigned int)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


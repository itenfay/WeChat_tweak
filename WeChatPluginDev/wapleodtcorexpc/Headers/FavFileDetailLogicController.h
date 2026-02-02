//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItem, FavoritesItemDataField, NSString;

@interface FavFileDetailLogicController
{
    _Bool _disableAutoDownload;
    FavoritesItem *_favItem;
    FavoritesItemDataField *_favData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableAutoDownload; // @synthesize disableAutoDownload=_disableAutoDownload;
@property(retain, nonatomic) FavoritesItemDataField *favData; // @synthesize favData=_favData;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
- (void)stopDownloadAppMsgByUser;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getFavForawrdViewController;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)OnFileDelete;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)OnFavCdnDownload:(id)arg1 TotalLength:(unsigned long long)arg2 FinishLength:(unsigned long long)arg3;
- (_Bool)autoDownload;
- (id)getMusicLocalFileDataUnit;
- (void)onFavTagEditBegin:(int)arg1;
- (void)OnOpenByApp:(id)arg1;
- (_Bool)performCustomizeAction:(id)arg1;
- (void)customizeActionSheetInFirstRow:(id)arg1 secondRow:(id)arg2;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (void)onForwardToContact:(id)arg1;
- (_Bool)canAddToFavorites;
- (void)stopDownload;
- (id)getFileExt;
- (unsigned int)GetPreviewType;
- (id)GetFilePath;
- (id)GetFileName;
- (unsigned long long)GetFileSize;
- (void)startDownload;
- (void)onEnterRecentUsedTask:(id)arg1;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (_Bool)restoreDataFromMinimizeTaskData:(id)arg1;
- (id)getMinimizeKey;
- (id)getHandOffItem;
- (id)getMinimizeTaskData;
- (_Bool)isMinimizeEnable;
- (_Bool)isDownloading;
- (id)initWithTask:(id)arg1;
- (id)initWithFavItem:(id)arg1 fileData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


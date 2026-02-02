//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface FavoritesUploadFileSaver
{
    int _uploadState;
}

@property(nonatomic) int uploadState; // @synthesize uploadState=_uploadState;
- (void)incFileRetainCountForItem:(id)arg1;
- (void)clearSourcePath:(id)arg1;
- (_Bool)doCopyFileInItem:(id)arg1;
- (void)saveCdnInfoOfFavItem:(id)arg1;
- (_Bool)CountItemDataMD5:(id)arg1;
- (void)onProccessEnd:(_Bool)arg1;
- (void)tryProccess;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1 isPrior:(_Bool)arg2;

@end


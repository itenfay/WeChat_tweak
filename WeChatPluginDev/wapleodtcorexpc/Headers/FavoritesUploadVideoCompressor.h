//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface FavoritesUploadVideoCompressor
{
    NSMutableSet *m_currentItemCompressingVideoSet;
}

- (void).cxx_destruct;
- (void)onFavVideoCompressFinish:(id)arg1 isSuccess:(_Bool)arg2;
- (void)configCompressedVideosInDataList:(id)arg1;
- (void)findNeedCompressVideosInDataList:(id)arg1;
- (void)configFavData:(id)arg1 withCompressPath:(id)arg2;
- (void)onCompressItem:(id)arg1 isSuccess:(_Bool)arg2;
- (void)tryProccess;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1 isPrior:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


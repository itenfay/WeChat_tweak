//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonDownloadProxy, NSMutableOrderedSet, NSString;

@interface StoreEmotionSingleDownloadMgr
{
    NSMutableOrderedSet *m_downloadQueue;
    EmoticonDownloadProxy *m_downloadCgi;
}

- (void).cxx_destruct;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (void)finishDownloadEmotionWrap:(id)arg1;
- (void)checkDownload;
- (id)dataOfEmoticonIfExistedWithWrap:(id)arg1;
- (_Bool)saveToNotTempPathWithMD5:(id)arg1;
- (_Bool)downloadEmotionWithWrap:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


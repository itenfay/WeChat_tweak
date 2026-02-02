//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface StoreEmotionThumbImageDownloadMgr
{
    NSMutableDictionary *m_downloadTaskListDic;
}

- (void).cxx_destruct;
- (void)onDownloadFinishedWithLoader:(id)arg1 AndData:(id)arg2;
- (void)downloadImgUrlStr:(id)arg1 toPath:(id)arg2;
- (void)preDownloadImgUrlStr:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


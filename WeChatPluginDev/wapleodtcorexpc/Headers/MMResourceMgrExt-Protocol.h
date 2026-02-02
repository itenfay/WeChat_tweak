//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMResourceMgrExt

@optional
- (void)onResFinishDownload:(_Bool)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3 version:(unsigned int)arg4;
- (void)onResBeginDownloadWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (void)onResHasNewWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
@end


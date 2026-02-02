//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCMomentsForwardImageOp
{
}

- (void)OnForwardMessageFailUpdate:(id)arg1;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (id)getImageFromCache:(id)arg1;
- (void)startDownloadImage;
- (void)subscribeImageDownload;
- (void)updateMessageWrap;
- (_Bool)startForwardToCustomContact:(id)arg1;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;

@protocol IDownloadImageTaskExt

@optional
- (void)OnDownloadImageStop:(CMessageWrap *)arg1 isHD:(_Bool)arg2;
- (void)OnDownloadImageOk:(CMessageWrap *)arg1 isHD:(_Bool)arg2;
- (void)OnDownloadImageFail:(CMessageWrap *)arg1 isHD:(_Bool)arg2;
- (void)OnDownloadImageExpired:(CMessageWrap *)arg1 isHD:(_Bool)arg2;
@end


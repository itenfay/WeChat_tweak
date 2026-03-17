//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSString;

@protocol IDownloadImageExt

@optional
- (void)OnDownloadForSaveAlbumFail:(CMessageWrap *)arg1 Expired:(_Bool)arg2;
- (void)OnImageSaveAlbumError:(CMessageWrap *)arg1;
- (void)OnImageSaveAlbumSuccess:(CMessageWrap *)arg1;
- (void)OnDownloadImageStopByChatName:(NSString *)arg1 FromDelMsg:(_Bool)arg2;
- (void)OnDownloadImagePartNew:(CMessageWrap *)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3 TryShow:(_Bool)arg4;
- (void)OnDownloadImagePart:(CMessageWrap *)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)OnDownloadImageStop:(CMessageWrap *)arg1;
- (void)OnDownloadImageOk:(CMessageWrap *)arg1;
- (void)OnDownloadImageFail:(CMessageWrap *)arg1;
- (void)OnDownloadImageExpired:(CMessageWrap *)arg1;
@end


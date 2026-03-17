//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;

@protocol IVideoExt

@optional
- (void)OnVideoThumbDidChange:(CMessageWrap *)arg1;
- (void)UpdateVideoMsg:(CMessageWrap *)arg1;
- (void)OnThumbDownloadFailed:(CMessageWrap *)arg1;
- (void)OnThumbDownloadOK:(CMessageWrap *)arg1;
@end


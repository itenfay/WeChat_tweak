//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDownloadArgsWrap;

@protocol WCPlayerDownloaderDelegate <NSObject>
- (void)onDataAvailableWithRange:(struct _NSRange)arg1;
- (void)onDataDownloadFail:(int)arg1;
- (void)onDataDownloadSuccess;

@optional
- (void)onUpdateNetwordSpeed:(unsigned int)arg1;
- (void)onSwitchDataSource:(WCDownloadArgsWrap *)arg1;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onMoovReady;
- (void)onM3u8Ready;
- (void)onVideoSourceChanged;
- (void)onDataDownloadFailWithExpired:(_Bool)arg1;
@end


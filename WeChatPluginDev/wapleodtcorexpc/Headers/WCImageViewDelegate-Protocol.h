//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCImageView;

@protocol WCImageViewDelegate <NSObject>

@optional
- (void)onDownloadCancel:(WCImageView *)arg1;
- (void)onDownloadFailed:(WCImageView *)arg1;
- (void)onDownloadFinish:(WCImageView *)arg1;
- (void)onLongPressedWCImage:(WCImageView *)arg1;
- (void)onClickWCImageFrom3DTouch:(WCImageView *)arg1;
- (void)onClickWCImage:(WCImageView *)arg1;
@end


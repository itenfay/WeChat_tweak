//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ImageScrollView, MMUIViewController, NSString, UIBarButtonItem;

@protocol FileDetailLogicDelegate <NSObject>
- (UIBarButtonItem *)getRightBarButtonItem;
- (MMUIViewController *)getCurrentViewController;

@optional
- (void)setImageScrollView:(ImageScrollView *)arg1;
- (void)onRevoked;
- (void)onCanShareToFriendByButton;
- (void)onDownloadFilePartLen:(unsigned long long)arg1 TotalLen:(unsigned long long)arg2;
- (void)onDownloadFileSuccess;
- (void)onDownloadFileFailWithHint:(NSString *)arg1;
- (void)onRealtimeUploadStatusChanged:(int)arg1;
@end


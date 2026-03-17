//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, SimpleImgInfo;

@protocol MMFullScreenItemViewDelegate <NSObject>
- (void)onFullScreenItemViewShowWithImgInfo:(SimpleImgInfo *)arg1;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartOffset:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (_Bool)isItemNeedLazyDownload:(NSString *)arg1;
- (void)tryToDownLoadVideo;
- (void)dismissCurrentView;
@end


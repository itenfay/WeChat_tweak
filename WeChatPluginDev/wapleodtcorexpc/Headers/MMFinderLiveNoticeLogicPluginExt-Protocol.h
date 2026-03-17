//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveNoticeInfo;

@protocol MMFinderLiveNoticeLogicPluginExt <NSObject>

@optional
- (void)onFinderLiveBubbleDismissNoticeBubble;
- (void)onFinderLiveBubbleShowWithNoticeInfo:(FinderLiveNoticeInfo *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EVVideoPreviewBrowserView;

@protocol EVVideoPreviewBrowserViewDelegate <NSObject>
- (void)previewBrowserViewDidReachEnd:(EVVideoPreviewBrowserView *)arg1;
- (void)listenPlayProgressWithCMTime:(CDStruct_1b6d18a9)arg1;
@end


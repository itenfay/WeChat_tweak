//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditVideoCompositionBrowserView;

@protocol EditVideoCompositionBrowserViewDelegate <NSObject>

@optional
- (void)videoCompositionBrowserViewPlayReachEnd:(EditVideoCompositionBrowserView *)arg1;
- (void)videoCompositionBrowserView:(EditVideoCompositionBrowserView *)arg1 progressDidUpdateWithCurrentTime:(CDStruct_1b6d18a9)arg2;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCStoryDataUnit, WCStoryPreviewContactIndicatorView;

@protocol WCStoryPreviewContactIndicatorViewDataSource <NSObject>
- (unsigned long long)numberOfDataUnitInStoryContactIndicatorView:(WCStoryPreviewContactIndicatorView *)arg1;
- (WCStoryDataUnit *)storyContactIndicatorView:(WCStoryPreviewContactIndicatorView *)arg1 dataUnitForIndex:(unsigned long long)arg2;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCStoryTimelineCellModel;

@protocol IWCStoryTimelineDataVMExt <NSObject>

@optional
- (void)storyTimelineDataItemsHasUpdate;
- (void)WCStoryTimelineDataCellNeedReload:(WCStoryTimelineCellModel *)arg1 index:(unsigned long long)arg2 isTimeStampUnread:(_Bool)arg3;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizeTaskData, WAAppItemData;

@protocol WAMainFrameTaskBarSectionBaseViewReportDelegate <NSObject>

@optional
- (void)onSectionViewWillDisplay:(MinimizeTaskData *)arg1 weappData:(WAAppItemData *)arg2 position:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)onSectionViewDelete:(MinimizeTaskData *)arg1 weappData:(WAAppItemData *)arg2 position:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)onWeAppSectionViewClick:(WAAppItemData *)arg1 position:(int)arg2 isMyWeApp:(_Bool)arg3;
- (void)onSectionViewClick:(MinimizeTaskData *)arg1 weappData:(WAAppItemData *)arg2 position:(int)arg3;
@end


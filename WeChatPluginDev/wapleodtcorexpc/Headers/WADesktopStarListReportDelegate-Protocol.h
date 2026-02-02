//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAAppItemData;

@protocol WADesktopStarListReportDelegate <NSObject>
- (void)reportItemMove:(WAAppItemData *)arg1 from:(long long)arg2 to:(long long)arg3 isMy:(long long)arg4;
- (void)reportItemStared:(WAAppItemData *)arg1 index:(long long)arg2 isMy:(long long)arg3;
- (void)reportItemDeleted:(WAAppItemData *)arg1 index:(long long)arg2 isMy:(long long)arg3;
@end


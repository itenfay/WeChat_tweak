//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAAppItemData;

@protocol WAMainListStarLogicDelegate <NSObject>

@optional
- (void)starDataDidUpdated;
- (void)appItemDidUnStaredFailedWithUnknownError:(WAAppItemData *)arg1;
- (void)appItemDidUnStaredSuccess:(WAAppItemData *)arg1;
- (void)appItemDidStaredFailedWithUnknownError:(WAAppItemData *)arg1;
- (void)appItemDidStaredFailedWithCountLimit:(WAAppItemData *)arg1;
- (void)appItemDidStaredSuccess:(WAAppItemData *)arg1;
@end


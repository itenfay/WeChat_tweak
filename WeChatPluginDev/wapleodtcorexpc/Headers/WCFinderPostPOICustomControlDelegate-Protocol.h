//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCLocationInfo;

@protocol WCFinderPostPOICustomControlDelegate <NSObject>

@optional
- (void)poiCustomClickRecommendBubble:(WCLocationInfo *)arg1 index:(long long)arg2;
- (void)poiCustomClickActionPoiStyle:(unsigned int)arg1;
@end


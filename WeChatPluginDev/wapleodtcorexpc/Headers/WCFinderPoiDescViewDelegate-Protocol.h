//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary, WCFinderPoiDescView;

@protocol WCFinderPoiDescViewDelegate <NSObject>
- (NSMutableDictionary *)dataReportParamDict;
- (void)onTapDescViewExpandButton:(WCFinderPoiDescView *)arg1;
@end


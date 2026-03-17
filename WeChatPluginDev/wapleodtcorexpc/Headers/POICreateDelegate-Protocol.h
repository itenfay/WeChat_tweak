//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol POICreateDelegate <NSObject>

@optional
- (void)onPOICreated:(NSString *)arg1 poiDistrict:(NSString *)arg2 poiStreet:(NSString *)arg3 PoiID:(NSString *)arg4;
- (void)onPOICreateCancel;
@end


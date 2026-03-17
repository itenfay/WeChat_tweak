//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMKRegionEditViewOnRegionSelectedCallback, NSArray, NSString;

@protocol MMKRegionEditView <MMKView>
- (void)setOnRegionSelectedCallback:(MMKRegionEditViewOnRegionSelectedCallback *)arg1;
- (_Bool)getAutoLocation;
- (void)setAutoLocation:(_Bool)arg1;
- (_Bool)getShowSelectedLocation;
- (void)setShowSelectedLocation:(_Bool)arg1;
- (_Bool)getShowDomesticCity;
- (void)setShowDomesticCity:(_Bool)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (void)setAreaExcludeArray:(NSArray *)arg1;
- (void)setOriginRegion:(NSString *)arg1 province:(NSString *)arg2 city:(NSString *)arg3 areaStr:(NSString *)arg4;
- (_Bool)isUSOrCA;
- (NSString *)getCity;
- (NSString *)getProvince;
- (NSString *)getCountry;
@end


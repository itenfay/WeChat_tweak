//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSValue.h>

@interface NSValue (NSValueQGeometryExtensions)
+ (id)valueWithCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (id)valueWithQMapRect:(CDStruct_02837cd9)arg1;
+ (id)valueWithQMapSize:(CDStruct_c3b9c2ee)arg1;
+ (id)valueWithQMapPoint:(CDStruct_c3b9c2ee)arg1;
+ (id)valueWithLzRange:(struct _LzRange)arg1;
+ (id)valueWithFloatRange:(CDStruct_c3b9c2ee)arg1;
- (struct CLLocationCoordinate2D)coordinateValue;
- (CDStruct_02837cd9)QMapRectValue;
- (CDStruct_c3b9c2ee)QMapSizeValue;
- (CDStruct_c3b9c2ee)QMapPointValue;
@property(readonly, nonatomic) struct MCOffsetRange MCOffsetRangeValue;
- (long long)lzRangeCompare:(id)arg1;
- (struct _LzRange)lzrangeValue;
@property(readonly) CDStruct_c3b9c2ee floatRangeValue;
@end


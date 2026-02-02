//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBorder : NSObject
{
    struct CGPath *_borderPath;
    struct CGRect _borderBoundingBox;
    struct CGPoint *_points;
    int _nPoints;
}

- (void)dealloc;
- (id)initWithBorder:(id)arg1;
- (void)constructPathWithString:(id)arg1 unitSeparator:(id)arg2 itemSeparator:(id)arg3;
- (void)constructBorderPath:(id)arg1;
- (_Bool)containsMapRect:(CDStruct_02837cd9)arg1;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1;

@end


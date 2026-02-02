//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class POIInfo;

@interface WCCanvasComponentLocationInfo : NSObject
{
    POIInfo *_poiInfo;
    double _topLineSize;
    double _bottomLineSize;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomLineSize; // @synthesize bottomLineSize=_bottomLineSize;
@property(nonatomic) double topLineSize; // @synthesize topLineSize=_topLineSize;
@property(retain, nonatomic) POIInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end


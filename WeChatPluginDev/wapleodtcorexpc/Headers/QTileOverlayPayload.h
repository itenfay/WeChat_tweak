//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QTileOverlayPayload : NSObject
{
    _Bool _isHighResoultionTile;
    int _maxDataLevel;
    int _minDataLevel;
    int _zIndex;
}

@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) int minDataLevel; // @synthesize minDataLevel=_minDataLevel;
@property(nonatomic) int maxDataLevel; // @synthesize maxDataLevel=_maxDataLevel;
@property(nonatomic) _Bool isHighResoultionTile; // @synthesize isHighResoultionTile=_isHighResoultionTile;

@end


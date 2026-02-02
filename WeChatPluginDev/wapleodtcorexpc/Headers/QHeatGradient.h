//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface QHeatGradient : NSObject
{
    int _mapSize;
    NSArray *_colors;
    NSArray *_startPoints;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *startPoints; // @synthesize startPoints=_startPoints;
@property(readonly, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (int)getMapSize;
- (id)initWithColor:(id)arg1 andWithStartPoints:(id)arg2;

@end


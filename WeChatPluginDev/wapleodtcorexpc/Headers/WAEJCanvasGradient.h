//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WAEJTexture;

@interface WAEJCanvasGradient : NSObject
{
    int type;
    CDStruct_6e3f967a p1;
    CDStruct_6e3f967a p2;
    float r1;
    float r2;
    NSMutableArray *colorStops;
    WAEJTexture *texture;
}

@property(readonly, nonatomic) NSMutableArray *colorStops; // @synthesize colorStops;
@property(readonly, nonatomic) float r2; // @synthesize r2;
@property(readonly, nonatomic) float r1; // @synthesize r1;
@property(readonly, nonatomic) CDStruct_6e3f967a p2; // @synthesize p2;
@property(readonly, nonatomic) CDStruct_6e3f967a p1; // @synthesize p1;
@property(readonly, nonatomic) int type; // @synthesize type;
- (id)getPixelsWithWidth:(int)arg1 forSortedStops:(id)arg2;
- (void)rebuild;
@property(readonly, nonatomic) WAEJTexture *texture;
- (void)addStopWithRawColor:(CDUnion_a0760c36)arg1 at:(float)arg2;
- (void)addStopWithColor:(CDUnion_a0760c36)arg1 at:(float)arg2;
- (void)dealloc;
- (id)initRadialGradientWithP1:(CDStruct_6e3f967a)arg1 r1:(float)arg2 p2:(CDStruct_6e3f967a)arg3 r2:(float)arg4;
- (id)initLinearGradientWithP1:(CDStruct_6e3f967a)arg1 p2:(CDStruct_6e3f967a)arg2;

@end


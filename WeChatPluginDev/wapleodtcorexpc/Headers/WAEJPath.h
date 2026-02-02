//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAEJPath : NSObject
{
    CDStruct_6e3f967a currentPos;
    CDStruct_6e3f967a lastPushed;
    CDStruct_6e3f967a minPos;
    CDStruct_6e3f967a maxPos;
    int fillRule;
    unsigned int longestSubpath;
    float distanceTolerance;
    struct CGAffineTransform transform;
    struct {
        struct vector<EJVector2, std::allocator<EJVector2>> points;
        _Bool isClosed;
    } currentPath;
    struct vector<subpath_t, std::allocator<subpath_t>> paths;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) int fillRule; // @synthesize fillRule;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform;
- (void)drawLinesToContext:(id)arg1;
- (void)drawArcToContext:(id)arg1 atPoint:(CDStruct_6e3f967a)arg2 v1:(CDStruct_6e3f967a)arg3 v2:(CDStruct_6e3f967a)arg4 color:(CDUnion_a0760c36)arg5;
- (void)drawPolygonsToContext:(id)arg1 fillRule:(int)arg2 target:(int)arg3;
- (void)arcX:(float)arg1 y:(float)arg2 radius:(float)arg3 startAngle:(float)arg4 endAngle:(float)arg5 antiClockwise:(_Bool)arg6;
- (void)arcToX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 radius:(float)arg5;
- (void)recursiveQuadraticX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 x3:(float)arg5 y3:(float)arg6 level:(int)arg7;
- (void)quadraticCurveToCpx:(float)arg1 cpy:(float)arg2 x:(float)arg3 y:(float)arg4 scale:(float)arg5;
- (void)recursiveBezierX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 x3:(float)arg5 y3:(float)arg6 x4:(float)arg7 y4:(float)arg8 level:(int)arg9;
- (void)bezierCurveToCpx1:(float)arg1 cpy1:(float)arg2 cpx2:(float)arg3 cpy2:(float)arg4 x:(float)arg5 y:(float)arg6 scale:(float)arg7;
- (void)lineToX:(float)arg1 y:(float)arg2;
- (void)moveToX:(float)arg1 y:(float)arg2;
- (void)endSubPath;
- (void)close;
- (void)reset;
- (void)push:(CDStruct_6e3f967a)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


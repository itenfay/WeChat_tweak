//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMBubbleLayer : NSObject
{
    int _arrowDirection;
    double _cornerRadius;
    double _arrowHeight;
    double _arrowWidth;
    double _arrowPosition;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(nonatomic) int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) double arrowWidth; // @synthesize arrowWidth=_arrowWidth;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)bubblePath;
- (struct CGRect)contentFrame;
- (id)centerOfCorner;
- (id)keyPointAtcorner;
- (id)arrowPoints;
- (id)layerForSize:(struct CGSize)arg1;
- (void)setArrowPositionAtPos:(double)arg1 baseLen:(double)arg2;
- (id)init;

@end


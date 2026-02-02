//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface MJGradientLabel
{
    NSArray *_colors;
    NSArray *_locations;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (struct CGPoint)gradientEndPointWithRect:(struct CGRect)arg1;
- (struct CGPoint)gradientStartPointWithRect:(struct CGRect)arg1;
- (double *)cgColorLocations;
- (id)cgColors;
- (void)configure:(id)arg1;
- (id)gradientColorInRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;

@end


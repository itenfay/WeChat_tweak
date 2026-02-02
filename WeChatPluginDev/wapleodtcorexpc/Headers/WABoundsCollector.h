//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface WABoundsCollector : NSObject
{
    UIView *_toView;
    double _minx;
    double _miny;
    double _maxx;
    double _maxy;
}

- (void).cxx_destruct;
@property(nonatomic) double maxy; // @synthesize maxy=_maxy;
@property(nonatomic) double maxx; // @synthesize maxx=_maxx;
@property(nonatomic) double miny; // @synthesize miny=_miny;
@property(nonatomic) double minx; // @synthesize minx=_minx;
@property(retain, nonatomic) UIView *toView; // @synthesize toView=_toView;
- (void)collectPoint:(struct CGPoint)arg1;
- (void)collectView:(id)arg1;
- (struct CGRect)collectBoundsFromView:(id)arg1 ToView:(id)arg2;

@end


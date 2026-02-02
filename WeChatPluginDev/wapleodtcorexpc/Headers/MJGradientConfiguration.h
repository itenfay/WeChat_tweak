//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MJGradientConfiguration : NSObject
{
    NSArray *_colors;
    NSArray *_locations;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

+ (id)verticalGradientWithColors:(id)arg1;
+ (id)horizontalGradientWithColors:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(readonly, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (id)initWithColors:(id)arg1 locations:(id)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4;
- (id)init;

@end


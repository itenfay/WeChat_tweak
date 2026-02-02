//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface QArcStyle : NSObject
{
    NSArray *_gradient;
    double _width;
    double _degree;
}

- (void).cxx_destruct;
@property(nonatomic) double degree; // @synthesize degree=_degree;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSArray *gradient; // @synthesize gradient=_gradient;
- (id)init;

@end


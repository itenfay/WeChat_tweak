//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface QGPColor
{
    double _r;
    double _g;
    double _b;
}

@property(nonatomic) double b; // @synthesize b=_b;
@property(nonatomic) double g; // @synthesize g=_g;
@property(nonatomic) double r; // @synthesize r=_r;
- (id)toUIColor;

@end


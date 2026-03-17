//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveSEIConnectMicSeatInfo : NSObject
{
    unsigned int _st;
    double _x;
    double _y;
    double _w;
    double _h;
    unsigned long long _i;
}

@property(nonatomic) unsigned long long i; // @synthesize i=_i;
@property(nonatomic) double h; // @synthesize h=_h;
@property(nonatomic) double w; // @synthesize w=_w;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) unsigned int st; // @synthesize st=_st;
- (struct CGRect)normalizedSeatFrame;
- (_Bool)isInOtherRoom;
- (void)updateWithMicSeatInfo:(id)arg1;

@end


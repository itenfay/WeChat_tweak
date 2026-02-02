//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QGridModel : NSObject
{
    int _x;
    int _y;
    unsigned int _scale;
    NSString *_gridID;
}

+ (int)gridUnitAtScale:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *gridID; // @synthesize gridID=_gridID;
@property(readonly, nonatomic) unsigned int scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) int y; // @synthesize y=_y;
@property(readonly, nonatomic) int x; // @synthesize x=_x;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)createChildren;
- (id)initWithScael:(unsigned int)arg1 x:(int)arg2 y:(int)arg3;

@end


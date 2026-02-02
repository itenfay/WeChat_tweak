//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMLiveSEIConnectMicMsg : NSObject
{
    NSArray *_list;
    double _x;
    double _y;
    double _w;
    double _h;
    unsigned long long _z;
    unsigned long long _f;
    unsigned long long _m;
    double _a;
    unsigned long long _i;
    NSArray *_hl;
    NSArray *_gl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *gl; // @synthesize gl=_gl;
@property(retain, nonatomic) NSArray *hl; // @synthesize hl=_hl;
@property(nonatomic) unsigned long long i; // @synthesize i=_i;
@property(nonatomic) double a; // @synthesize a=_a;
@property(nonatomic) unsigned long long m; // @synthesize m=_m;
@property(nonatomic) unsigned long long f; // @synthesize f=_f;
@property(nonatomic) unsigned long long z; // @synthesize z=_z;
@property(nonatomic) double h; // @synthesize h=_h;
@property(nonatomic) double w; // @synthesize w=_w;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(readonly, nonatomic) _Bool emptyUserListAllowed;
- (_Bool)isInConnectedMicUI;
- (unsigned long long)micLayoutMode;
- (unsigned long long)audioModeUsersCount;
- (_Bool)hasOtherConnectMicAnchor;
- (unsigned long long)anchorUIType;
- (struct CGRect)normalizedAnchorFrame;

@end


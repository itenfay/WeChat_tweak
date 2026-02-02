//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveSEIConnectMicUserInfo : NSObject
{
    unsigned int _us;
    NSString *_uId;
    double _x;
    double _y;
    double _w;
    double _h;
    unsigned long long _z;
    unsigned long long _f;
    unsigned long long _i;
    unsigned long long _mt;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long mt; // @synthesize mt=_mt;
@property(nonatomic) unsigned long long i; // @synthesize i=_i;
@property(nonatomic) unsigned long long f; // @synthesize f=_f;
@property(nonatomic) unsigned long long z; // @synthesize z=_z;
@property(nonatomic) double h; // @synthesize h=_h;
@property(nonatomic) double w; // @synthesize w=_w;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) unsigned int us; // @synthesize us=_us;
@property(retain, nonatomic) NSString *uId; // @synthesize uId=_uId;
- (unsigned long long)uiType;
- (struct CGRect)normalizedUserFrame;
- (_Bool)isMicMutedByAnchor;
- (_Bool)isInOtherRoom;
- (_Bool)isOtherAnchor;
- (_Bool)isAudioMode;
- (_Bool)isTalking;
- (void)updateWithMicUserInfo:(id)arg1;

@end


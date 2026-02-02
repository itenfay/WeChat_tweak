//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CameraScanCombineItemFrameLogModel : NSObject
{
    int _bILbl;
    unsigned long long _idx;
    long long _modVer;
    double _mvX;
    double _mvY;
    double _v;
    double _vThres;
    double _bIX1;
    double _bIX2;
    double _bIY1;
    double _bIY2;
    double _bIS;
}

@property(nonatomic) int bILbl; // @synthesize bILbl=_bILbl;
@property(nonatomic) double bIS; // @synthesize bIS=_bIS;
@property(nonatomic) double bIY2; // @synthesize bIY2=_bIY2;
@property(nonatomic) double bIY1; // @synthesize bIY1=_bIY1;
@property(nonatomic) double bIX2; // @synthesize bIX2=_bIX2;
@property(nonatomic) double bIX1; // @synthesize bIX1=_bIX1;
@property(nonatomic) double vThres; // @synthesize vThres=_vThres;
@property(nonatomic) double v; // @synthesize v=_v;
@property(nonatomic) double mvY; // @synthesize mvY=_mvY;
@property(nonatomic) double mvX; // @synthesize mvX=_mvX;
@property(nonatomic) long long modVer; // @synthesize modVer=_modVer;
@property(nonatomic) unsigned long long idx; // @synthesize idx=_idx;
- (id)log24193StringWithItemIdx:(unsigned long long)arg1;

@end


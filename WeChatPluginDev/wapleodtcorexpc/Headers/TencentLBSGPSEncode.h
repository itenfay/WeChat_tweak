//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TencentLBSGPSEncode : NSObject
{
    double _casm_rr;
    double _casm_t1;
    double _casm_t2;
    double _casm_x1;
    double _casm_y1;
    double _casm_x2;
    double _casm_y2;
    double _casm_f;
}

@property(nonatomic) double casm_f; // @synthesize casm_f=_casm_f;
@property(nonatomic) double casm_y2; // @synthesize casm_y2=_casm_y2;
@property(nonatomic) double casm_x2; // @synthesize casm_x2=_casm_x2;
@property(nonatomic) double casm_y1; // @synthesize casm_y1=_casm_y1;
@property(nonatomic) double casm_x1; // @synthesize casm_x1=_casm_x1;
@property(nonatomic) double casm_t2; // @synthesize casm_t2=_casm_t2;
@property(nonatomic) double casm_t1; // @synthesize casm_t1=_casm_t1;
@property(nonatomic) double casm_rr; // @synthesize casm_rr=_casm_rr;
- (struct CLLocationCoordinate2D)getEncryCoord:(struct CLLocationCoordinate2D)arg1;
- (id)getEncryPointwithlng:(double)arg1 withlat:(double)arg2;
- (_Bool)isValid:(long long)arg1;
- (id)wgtochina_lbwithFlag:(int)arg1 withLg:(int)arg2 withLa:(int)arg3 withh:(int)arg4 withW:(int)arg5 withT:(int)arg6;
- (void)IniCasmWithT:(double)arg1 withLg:(double)arg2 withLa:(double)arg3;
- (double)random_yj;
- (double)Transform_jyj5Withx:(double)arg1 withy:(double)arg2;
- (double)Transform_jy5Withx:(double)arg1 withy:(double)arg2;
- (double)Transform_yjy5Withx:(double)arg1 withy:(double)arg2;
- (double)Transform_yj5Withx:(double)arg1 withy:(double)arg2;
- (double)yj_sin2:(double)arg1;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CAAnimationGroup.h>

@interface WCPayFaceHBLayerAnimation : CAAnimationGroup
{
    int _i;
    int _mx;
    int _my;
}

@property(nonatomic) int my; // @synthesize my=_my;
@property(nonatomic) int mx; // @synthesize mx=_mx;
@property(nonatomic) int i; // @synthesize i=_i;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createBangAnimtionStart:(struct CGPoint)arg1 End:(struct CGPoint)arg2 Time:(double)arg3;

@end


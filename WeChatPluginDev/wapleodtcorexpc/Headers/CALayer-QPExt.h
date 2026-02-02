//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CALayer.h>

@interface CALayer (QPExt)
@property(nonatomic, setter=qp_setTransformRotation:) double qp_transformRotation;
- (void)qp_setOrigin:(struct CGPoint)arg1;
- (void)qp_addAnimation:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)qp_addAnimation:(id)arg1;
- (id)qp_snapshotImage;
@end


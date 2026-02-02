//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface FlutterClippingMaskView : UIView
{
    struct vector<fml::CFRef<const CGPath *>, std::allocator<fml::CFRef<const CGPath *>>> paths_;
    struct CATransform3D _reverseScreenScale;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CATransform3D reverseScreenScale; // @synthesize reverseScreenScale=_reverseScreenScale;
- (CFRef_9a097741)getTransformedPath:(struct CGPath *)arg1 matrix:(struct CATransform3D)arg2;
- (void)clipPath:(const void *)arg1 matrix:(const struct SkMatrix *)arg2;
- (void)clipRRect:(const struct SkRRect *)arg1 matrix:(const struct SkMatrix *)arg2;
- (void)clipRect:(const struct SkRect *)arg1 matrix:(const struct SkMatrix *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1 screenScale:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


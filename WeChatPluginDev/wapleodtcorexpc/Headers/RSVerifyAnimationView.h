//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RSAnimationHeadImgView;
@protocol RSVerifyAnimationViewDelegate;

@interface RSVerifyAnimationView
{
    RSAnimationHeadImgView *_headImage;
    struct CGPoint _originPoint;
    struct CGSize _originSize;
    id <RSVerifyAnimationViewDelegate> _rsDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RSVerifyAnimationViewDelegate> rsDelegate; // @synthesize rsDelegate=_rsDelegate;
@property(retain, nonatomic) RSAnimationHeadImgView *headImage; // @synthesize headImage=_headImage;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)onZoomOutFinish;
- (void)onZoomInFinish;
- (void)doZoomOutAnimation;
- (void)startAnimationWithRadarSearchMember:(id)arg1 remarkName:(id)arg2 OriginPoint:(struct CGPoint)arg3;
- (void)doZoomOut:(float)arg1 animated:(_Bool)arg2;
- (void)doZoomIn:(float)arg1 animated:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


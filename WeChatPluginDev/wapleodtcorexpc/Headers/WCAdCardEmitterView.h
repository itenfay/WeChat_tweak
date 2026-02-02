//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage, WCAdTouchParticleInfo;

@interface WCAdCardEmitterView
{
    WCAdTouchParticleInfo *_particleInfo;
    UIImage *_cellContent;
    double _distanceGap;
    double _chanceGap;
    struct CGPoint _lastPoint;
}

- (void).cxx_destruct;
@property(nonatomic) double chanceGap; // @synthesize chanceGap=_chanceGap;
@property(nonatomic) double distanceGap; // @synthesize distanceGap=_distanceGap;
@property(retain, nonatomic) UIImage *cellContent; // @synthesize cellContent=_cellContent;
@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(retain, nonatomic) WCAdTouchParticleInfo *particleInfo; // @synthesize particleInfo=_particleInfo;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)updateCellContent;
- (void)genGapsWithParticleInfo:(id)arg1;
- (double)getPointDistanceBetweenP1:(struct CGPoint)arg1 p2:(struct CGPoint)arg2;
- (void)endEmitters;
- (void)appendEmitterAtPoint:(struct CGPoint)arg1 more:(_Bool)arg2 longitudeType:(long long)arg3;
- (void)appendEmitterAtPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 particleInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


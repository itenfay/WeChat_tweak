//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, MiniTaskCollectioViewMaskLayerConfig;

@interface MiniTaskCollectioViewMaskLayer : CALayer
{
    CAShapeLayer *_subLeftMask;
    CAShapeLayer *_subRightMask;
    CAShapeLayer *_subMaskForOneCell;
    CALayer *_guardLayer;
    CALayer *_bigGuardLayer;
    MiniTaskCollectioViewMaskLayerConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MiniTaskCollectioViewMaskLayerConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) CALayer *bigGuardLayer; // @synthesize bigGuardLayer=_bigGuardLayer;
@property(retain, nonatomic) CALayer *guardLayer; // @synthesize guardLayer=_guardLayer;
@property(retain, nonatomic) CAShapeLayer *subMaskForOneCell; // @synthesize subMaskForOneCell=_subMaskForOneCell;
@property(retain, nonatomic) CAShapeLayer *subRightMask; // @synthesize subRightMask=_subRightMask;
@property(retain, nonatomic) CAShapeLayer *subLeftMask; // @synthesize subLeftMask=_subLeftMask;
- (struct CGRect)transCellRectToMaskRect:(struct CGRect)arg1;
- (void)setupSublayers;
- (void)showMaskLayer;
- (void)hideMaskLayer;
- (void)updateSubMaskLayersWithCellCount:(unsigned long long)arg1;
- (id)initWithConfig:(id)arg1;

@end


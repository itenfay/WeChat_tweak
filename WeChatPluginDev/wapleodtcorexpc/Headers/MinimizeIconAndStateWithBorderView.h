//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface MinimizeIconAndStateWithBorderView
{
    _Bool _isRoundMaskPathAfterAnimation;
    NSMutableArray *_lineLayerList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *lineLayerList; // @synthesize lineLayerList=_lineLayerList;
@property(nonatomic) _Bool isRoundMaskPathAfterAnimation; // @synthesize isRoundMaskPathAfterAnimation=_isRoundMaskPathAfterAnimation;
- (void)updateAllSublayerAnimated:(double)arg1 ViewPath:(id)arg2 Duration:(double)arg3;
- (void)resetIconViewSublayer:(double)arg1;
- (void)resetLineCircleOnIcon;
- (void)addLineCircleLayerOnIcon:(id)arg1 LinePath:(id)arg2;
- (void)removeLineCircleOnIcon;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol EditImageAnimatedDelegate;

@interface EditImageAnimatedWidgetTool
{
    _Bool _isSticky;
    id <EditImageAnimatedDelegate> _animatedDelegate;
    struct CGSize _editBounds;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSticky; // @synthesize isSticky=_isSticky;
@property(nonatomic) struct CGSize editBounds; // @synthesize editBounds=_editBounds;
@property(nonatomic) __weak id <EditImageAnimatedDelegate> animatedDelegate; // @synthesize animatedDelegate=_animatedDelegate;
- (void)judgeFromDeleteBar:(id)arg1;
- (void)setScreenCenter:(struct CGPoint)arg1;
- (_Bool)needHighQuality;
- (void)subclassReloadFrame;
- (void)subclassLargeTouchFrame;
- (double)widgetViewBorder;
- (double)maxFrameScaleWhileSelect;
- (double)maxScaleFactor;
- (double)originalScaleFactor;
- (id)exportAnimatedLayerWithTimingObject:(id)arg1;

@end


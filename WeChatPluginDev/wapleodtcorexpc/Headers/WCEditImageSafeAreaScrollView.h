//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView;

@interface WCEditImageSafeAreaScrollView
{
    MMUIView *_topLine;
    MMUIView *_bottomLine;
    MMUIView *_leftLine;
    MMUIView *_rightLine;
    struct CGRect _areaFrame;
}

+ (_Bool)isCGRect1:(struct CGRect)arg1 inRect2:(struct CGRect)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) MMUIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) MMUIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MMUIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) struct CGRect areaFrame; // @synthesize areaFrame=_areaFrame;
- (void)drawDottedLineByCAShapeLayer:(id)arg1 dotLength:(int)arg2 dotSpacing:(int)arg3 lineColor:(id)arg4 lineDirection:(_Bool)arg5;
- (void)drawDottedLineByCAShapeLayer:(id)arg1 isHorizonal:(_Bool)arg2;
- (void)setAreaLineHidden:(_Bool)arg1;
- (void)updateAreaLineFrame:(struct CGRect)arg1;
- (void)autoAdjustWidgetPosition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)autoAdjustAllWidgetsPosition;
- (void)handlePanGesture:(id)arg1;

@end


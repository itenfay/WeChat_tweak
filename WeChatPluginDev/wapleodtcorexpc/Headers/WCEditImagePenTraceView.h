//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString;

@interface WCEditImagePenTraceView : UIView
{
    CAShapeLayer *_normalPenTraceLayer;
    CAShapeLayer *_highLightPenTraceLayer;
    CAShapeLayer *_highLightPenTraceBoarderLayer;
}

+ (id)copyLayer:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *highLightPenTraceBoarderLayer; // @synthesize highLightPenTraceBoarderLayer=_highLightPenTraceBoarderLayer;
@property(retain, nonatomic) CAShapeLayer *highLightPenTraceLayer; // @synthesize highLightPenTraceLayer=_highLightPenTraceLayer;
@property(retain, nonatomic) CAShapeLayer *normalPenTraceLayer; // @synthesize normalPenTraceLayer=_normalPenTraceLayer;
- (_Bool)hiddenPenTraceAtPointIfNeeded:(struct CGPoint)arg1;
- (_Bool)isPenTraceViewHighLight;
- (void)setPenTraceViewHighLight:(_Bool)arg1;
- (_Bool)highLightPenTraceAtPointIfNeeded:(struct CGPoint)arg1;
- (_Bool)isViewPathContainPoint:(struct CGPoint)arg1;
- (void)setupWithShapeLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


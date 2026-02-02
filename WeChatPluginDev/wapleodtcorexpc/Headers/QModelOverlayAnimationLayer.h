//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CALayer.h>

@protocol QModelOverlayAnimationLayerDelegate;

@interface QModelOverlayAnimationLayer : CALayer
{
    id <QModelOverlayAnimationLayerDelegate> _modelOverlayAnimDelegate;
    double _modelRotation;
    struct CGPoint _coordinate;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
+ (_Bool)isMatchAnimKeys:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double modelRotation; // @synthesize modelRotation=_modelRotation;
@property(nonatomic) struct CGPoint coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) __weak id <QModelOverlayAnimationLayerDelegate> modelOverlayAnimDelegate; // @synthesize modelOverlayAnimDelegate=_modelOverlayAnimDelegate;

@end


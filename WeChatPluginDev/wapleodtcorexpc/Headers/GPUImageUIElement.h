//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer, UIView;

@interface GPUImageUIElement
{
    UIView *view;
    CALayer *layer;
    struct CGSize previousLayerSizeInPixels;
    CDStruct_1b6d18a9 time;
    double actualTimeOfLastUpdate;
}

- (void).cxx_destruct;
- (void)updateWithTimestamp:(CDStruct_1b6d18a9)arg1;
- (void)updateUsingCurrentTime;
- (void)update;
- (struct CGSize)layerSizeInPixels;
- (id)initWithLayer:(id)arg1;
- (id)initWithView:(id)arg1;

@end


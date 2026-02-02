//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol MJAudioWaveformViewDelegate;

@interface MJAudioWaveformView : UIView
{
    struct shared_ptr<std::vector<float>> _normalizedHeights;
    double _startOffset;
    id <MJAudioWaveformViewDelegate> _delegate;
}

+ (Class)layerClass;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MJAudioWaveformViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)internalClearWaveform;
- (void)internalDrawWaveform;
- (void)drawWaveformWithNormalizedHeights:(const void *)arg1 startOffset:(double)arg2;
- (void)setLineWidth:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)shapeLayer;

@end


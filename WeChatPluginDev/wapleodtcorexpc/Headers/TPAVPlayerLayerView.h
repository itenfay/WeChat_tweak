//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString;
@protocol TPAVPlayerLayerViewDelegate;

@interface TPAVPlayerLayerView : UIView
{
    _Bool _firstFrameRendered;
    id <TPAVPlayerLayerViewDelegate> _delegate;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TPAVPlayerLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool firstFrameRendered; // @synthesize firstFrameRendered=_firstFrameRendered;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setNeedsDisplay;
- (void)resetView;
- (void)setLayerPlayer:(id)arg1;
@property(nonatomic) NSString *videoFillMode;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


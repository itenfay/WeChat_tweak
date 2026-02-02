//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class ORERenderViewConIOS;

@interface OVCPlaybackView : UIView
{
    ORERenderViewConIOS *_renderViewCon;
    void * _windowName;
    UIView *_overlayView;
}

+ (struct CGSize)alignSize:(struct CGSize)arg1 scaleFactor:(double)arg2 roundMethod:(unsigned long long)arg3;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (id)backingRenderViewCon;
- (const void *)windowName;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class ORERenderViewConIOS;

@interface OVCPlaybackView : UIView
{
    ORERenderViewConIOS *_renderViewCon;
    basic_string_5909a4e2 _windowName;
    UIView *_overlayView;
}

+ (struct CGSize)alignSize:(struct CGSize)arg1 scaleFactor:(double)arg2 roundMethod:(unsigned long long)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (id)backingRenderViewCon;
- (const void *)windowName;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end


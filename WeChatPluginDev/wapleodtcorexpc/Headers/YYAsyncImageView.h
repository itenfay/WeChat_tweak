//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class NSString, YYImage;

@interface YYAsyncImageView : UIImageView
{
    YYImage *m_image;
    YYImage *m_highlightedImage;
    YYImage *m_defaultImage;
    _Bool m_highlighted;
    _Bool _didSetDarkModeObserver;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool didSetDarkModeObserver; // @synthesize didSetDarkModeObserver=_didSetDarkModeObserver;
- (void)didSetDynamicYYImage;
- (long long)overrideStyle;
- (void)willMoveToWindow:(id)arg1;
- (id)newAsyncDisplayTask;
- (void)resetAllImage;
- (void)setDefaultImage:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MMImageScrollViewHelperDelegate;

@interface MMImageScrollViewHelper : NSObject
{
    _Bool dontCalcPreviewRect;
    _Bool noSingleTaps;
    _Bool noDoubleTaps;
    id <MMImageScrollViewHelperDelegate> m_delegate;
    double _contentRatioY;
}

- (void).cxx_destruct;
@property(nonatomic) double contentRatioY; // @synthesize contentRatioY=_contentRatioY;
@property(nonatomic) __weak id <MMImageScrollViewHelperDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool noDoubleTaps; // @synthesize noDoubleTaps;
@property(nonatomic) _Bool noSingleTaps; // @synthesize noSingleTaps;
@property(nonatomic) _Bool dontCalcPreviewRect; // @synthesize dontCalcPreviewRect;
- (void)scrollViewDidZoom:(id)arg1;
- (void)ZoomForPoint:(struct CGPoint)arg1;
- (void)onDoubleTap:(id)arg1;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;
- (void)onSingleTap:(id)arg1;
- (void)dealloc;
- (void)initHelper:(struct CGSize)arg1 orientation:(long long)arg2;
- (void)initHelper:(struct CGSize)arg1 orientation:(long long)arg2 containSize:(struct CGSize)arg3 rectImage:(struct CGRect)arg4;
- (void)initHelper:(struct CGSize)arg1 orientation:(long long)arg2 containSize:(struct CGSize)arg3;
- (void)initHelper:(struct CGSize)arg1;
- (void)InitGestureRecognizer;
- (id)init;

@end


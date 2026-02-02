//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WAWebViewPlugin_baseView
{
    _Bool _isReady;
    NSMutableArray *_animates;
}

+ (id)imageWithData:(id)arg1;
+ (void)refreshImageScrollView:(id)arg1 minimumZoomScale:(double)arg2 zoomScale:(double)arg3;
+ (void)recoverImageScrollView:(id)arg1;
- (void).cxx_destruct;
- (void)loadImageScrollView:(id)arg1 imageURL:(id)arg2 viewId:(unsigned int)arg3 zoomScale:(double)arg4 minimumZoomScale:(double)arg5;
- (void)removeScrollImageViewWithViewId:(unsigned int)arg1;
- (void)updateScrollImageViewWithParams:(id)arg1;
- (unsigned int)insertScrollImageViewWithParams:(id)arg1;
- (void)animateCoverView:(id)arg1 param:(id)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)onTouchCancel:(id)arg1 canvas:(id)arg2;
- (void)onTouchEnd:(id)arg1 canvas:(id)arg2;
- (void)onTouchMove:(id)arg1 canvas:(id)arg2;
- (void)onTouchBegin:(id)arg1 canvas:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)removeScrollView:(unsigned int)arg1;
- (void)updateScrollView:(id)arg1;
- (unsigned int)insertScrollView:(id)arg1;
- (void)onButtonClick:(id)arg1;
- (void)removeBaseView:(unsigned int)arg1;
- (void)updateBaseView:(id)arg1;
- (unsigned int)insertBaseView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


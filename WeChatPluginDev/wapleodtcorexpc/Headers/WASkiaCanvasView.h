//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableDictionary, NSString, UIImageView;
@protocol WASkiaViewDelegate;

@interface WASkiaCanvasView : UIView
{
    long long _touchId;
    NSMutableDictionary *_touches;
    NSDictionary *_longpressParam;
    _Bool _touched;
    UIImageView *_snapshotImageView;
    _Bool _onForeground;
    int _canvasId;
    int _gestureMode;
    id <WASkiaViewDelegate> _delegate;
    NSString *_userData;
    shared_ptr_3299e206 _canvasView;
    shared_ptr_013fd618 _app;
}

+ (id)getVirsionString;
+ (Class)layerClass;
- (id).cxx_construct;
- (void).cxx_destruct;
@property _Bool onForeground; // @synthesize onForeground=_onForeground;
@property shared_ptr_013fd618 app; // @synthesize app=_app;
@property(nonatomic) int gestureMode; // @synthesize gestureMode=_gestureMode;
@property int canvasId; // @synthesize canvasId=_canvasId;
@property(retain, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(nonatomic) __weak id <WASkiaViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) shared_ptr_3299e206 canvasView; // @synthesize canvasView=_canvasView;
- (void)setSkiaCanvasViewDelegate:(id)arg1;
- (void)setSkiaCanvasTextureDelegate:(id)arg1;
- (id)getUniqueIdAppendAppTag;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)onLongPress:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (long long)getTouchID:(id)arg1 remove:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)snapshotEnd;
- (void)snapshotBegin;
- (id)getImage;
- (void)setBindingApp:(shared_ptr_013fd618)arg1 canvasId:(unsigned int)arg2;
- (void)notifyVisibilityChanged:(_Bool)arg1;
- (void)present;
- (void)initSkiaCanvas:(id)arg1;
- (void)dealloc;
- (id)initWithFrame2:(struct CGRect)arg1 bindingApp:(id)arg2 canvasId:(int)arg3;
- (id)initWithFrame:(struct CGRect)arg1 bindingApp:(shared_ptr_013fd618)arg2 canvasId:(int)arg3;

@end


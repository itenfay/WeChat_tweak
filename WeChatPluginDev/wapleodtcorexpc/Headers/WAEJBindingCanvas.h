//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIView, WAEJBindingCanvasStyle, WAEJBindingTouchInput, WAEJCanvasContext, WAEJTexture;

@interface WAEJBindingCanvas
{
    struct OpaqueJSValue *jsCanvasContext;
    int contextMode;
    short width;
    short height;
    WAEJBindingCanvasStyle *styleObject;
    int imageRendering;
    struct CGRect style;
    _Bool isOffScreen;
    _Bool isScreenCanvas;
    _Bool isCustomScreen;
    _Bool lockStyle;
    unsigned int canvasId;
    NSString *elementId;
    unsigned int bindingScreenId;
    float styleWidth;
    float styleHeight;
    float styleLeft;
    float styleTop;
    int _viewId;
    WAEJCanvasContext *renderingContext;
    WAEJBindingTouchInput *_touchInput;
    UIView *_canvasView;
    NSMutableArray *_touchableRects;
}

+ (id)_const_tagName;
+ (id)_const_nodeName;
+ (void *)_ptr_to_func_remove;
+ (void *)_ptr_to_func_toDataURL;
+ (void *)_ptr_to_func_getContext;
+ (void *)_ptr_to_func_setTouchableRects;
+ (void *)_ptr_to_get_offsetHeight;
+ (void *)_ptr_to_get_offsetWidth;
+ (void *)_ptr_to_get_offsetTop;
+ (void *)_ptr_to_get_offsetLeft;
+ (void *)_ptr_to_get_style;
+ (void *)_ptr_to_set_height;
+ (void *)_ptr_to_get_height;
+ (void *)_ptr_to_set_width;
+ (void *)_ptr_to_get_bindingScreen;
+ (void *)_ptr_to_set_bindingScreen;
+ (void *)_ptr_to_set_id;
+ (void *)_ptr_to_get_id;
+ (void *)_ptr_to_func___canvasId;
+ (void *)_ptr_to_get___id;
+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_func___lockStyle;
+ (void *)_ptr_to_func___uid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *touchableRects; // @synthesize touchableRects=_touchableRects;
@property(nonatomic) int viewId; // @synthesize viewId=_viewId;
@property(nonatomic) __weak UIView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) __weak WAEJBindingTouchInput *touchInput; // @synthesize touchInput=_touchInput;
@property(readonly, nonatomic) _Bool isCustomScreen; // @synthesize isCustomScreen;
@property(readonly, nonatomic) _Bool isScreenCanvas; // @synthesize isScreenCanvas;
@property(readonly, nonatomic) _Bool isOffScreen; // @synthesize isOffScreen;
@property(retain, nonatomic) WAEJCanvasContext *renderingContext; // @synthesize renderingContext;
- (unsigned int)getCanvasId;
- (id)getElementId;
- (struct OpaqueJSValue *)getJSObject;
- (id)getCanvasImageWithScale:(float)arg1;
- (id)getCanvasImage;
- (_Bool)isCanvasScreen;
- (_Bool)isWebGLScreen;
- (struct OpaqueJSValue *)_func_remove:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_toDataURL:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)toDataURLWithCtx:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)getGfxContext:(struct OpaqueJSValue *)arg1;
- (struct OpaqueJSValue *)getContext:(struct OpaqueJSValue *)arg1 webgl:(_Bool)arg2;
- (struct OpaqueJSValue *)_func_getContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (id)getWebGLContext:(struct OpaqueJSContext *)arg1 alpha:(_Bool)arg2 antialias:(_Bool)arg3 preserve_drawing_buffer:(_Bool)arg4 useWebGL2:(_Bool)arg5;
- (struct OpaqueJSValue *)_func_setTouchableRects:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_get_offsetHeight:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_offsetWidth:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_offsetTop:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_offsetLeft:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_style:(struct OpaqueJSContext *)arg1;
- (void)_set_height:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_height:(struct OpaqueJSContext *)arg1;
- (void)_set_width:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_bindingScreen:(struct OpaqueJSContext *)arg1;
- (void)_set_bindingScreen:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (void)_set_id:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_id:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_func___canvasId:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_get___id:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_width:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_func___lockStyle:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func___uid:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
@property(nonatomic) int imageRendering;
- (void)setStyle:(struct CGRect)arg1;
@property(nonatomic) float styleTop; // @synthesize styleTop;
@property(nonatomic) float styleLeft; // @synthesize styleLeft;
@property(nonatomic) float styleHeight; // @synthesize styleHeight;
@property(nonatomic) float styleWidth; // @synthesize styleWidth;
@property(readonly, nonatomic) WAEJTexture *texture;
- (void)dealloc;
- (void)createWithJSObject:(struct OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;

@end


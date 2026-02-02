//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol MMCanvasJsApiHandlerViewDelegate;

@interface MMCanvasJsApiHandler : NSObject
{
    NSString *_canvasId;
    double _videoTop;
    double _videoBottom;
    double _windowWidth;
    id <MMCanvasJsApiHandlerViewDelegate> _delegate;
    NSDictionary *_fontWeightMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *fontWeightMap; // @synthesize fontWeightMap=_fontWeightMap;
@property(nonatomic) __weak id <MMCanvasJsApiHandlerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double windowWidth; // @synthesize windowWidth=_windowWidth;
@property(nonatomic) double videoBottom; // @synthesize videoBottom=_videoBottom;
@property(nonatomic) double videoTop; // @synthesize videoTop=_videoTop;
@property(copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
- (void)addApi_isCanvasViewInBackground:(id)arg1;
- (void)addApi_save:(id)arg1;
- (void)addApi_restore:(id)arg1;
- (void)addApi_canVideoAutoPlay:(id)arg1;
- (void)addApi_setVideo:(id)arg1;
- (void)addApi_setHeight:(id)arg1;
- (void)addApi_getOffsetHeight:(id)arg1;
- (void)addApi_getOffsetTop:(id)arg1;
- (void)addApi_getHeight:(id)arg1;
- (void)addApi_getWidth:(id)arg1;
- (void)addApi_isOnScreen:(id)arg1;
- (void)addApi_getFps:(id)arg1;
- (void)addApi_measureText:(id)arg1;
- (void)addApi_isDarkMode:(id)arg1;
- (void)addApi_getFontSize:(id)arg1;
- (void)addApi_getCanvas:(id)arg1;
- (void)addApi_getId:(id)arg1;
- (void)dealloc;
- (void)setupApiWithJSContext:(id)arg1;
- (id)init;

@end


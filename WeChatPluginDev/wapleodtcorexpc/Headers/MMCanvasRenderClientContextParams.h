//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMCanvasRenderClientContextDelegate, MMWebJsCanvasViewPortDelegate;

@interface MMCanvasRenderClientContextParams : NSObject
{
    NSString *_canvasId;
    double _windowWidth;
    id <MMWebJsCanvasViewPortDelegate> _viewDelegate;
    id <MMCanvasRenderClientContextDelegate> _contextDelegate;
    unsigned long long _viewDelegatePtr;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long viewDelegatePtr; // @synthesize viewDelegatePtr=_viewDelegatePtr;
@property(nonatomic) __weak id <MMCanvasRenderClientContextDelegate> contextDelegate; // @synthesize contextDelegate=_contextDelegate;
@property(nonatomic) __weak id <MMWebJsCanvasViewPortDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) double windowWidth; // @synthesize windowWidth=_windowWidth;
@property(copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;

@end


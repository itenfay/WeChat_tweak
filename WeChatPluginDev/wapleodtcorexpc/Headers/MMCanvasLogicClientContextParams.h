//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebCanvasItemData;
@protocol MMWebJsCanvasViewPortDelegate;

@interface MMCanvasLogicClientContextParams : NSObject
{
    _Bool _preload;
    MMWebCanvasItemData *_canvasItemData;
    long long _pubPkgVersion;
    long long _bizPkgVersion;
    double _windowWidth;
    id <MMWebJsCanvasViewPortDelegate> _viewDelegate;
    CDUnknownBlockType _prepareCompletion;
    CDUnknownBlockType _deleteHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType deleteHandler; // @synthesize deleteHandler=_deleteHandler;
@property(copy, nonatomic) CDUnknownBlockType prepareCompletion; // @synthesize prepareCompletion=_prepareCompletion;
@property(nonatomic) __weak id <MMWebJsCanvasViewPortDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) _Bool preload; // @synthesize preload=_preload;
@property(nonatomic) double windowWidth; // @synthesize windowWidth=_windowWidth;
@property(nonatomic) long long bizPkgVersion; // @synthesize bizPkgVersion=_bizPkgVersion;
@property(nonatomic) long long pubPkgVersion; // @synthesize pubPkgVersion=_pubPkgVersion;
@property(retain, nonatomic) MMWebCanvasItemData *canvasItemData; // @synthesize canvasItemData=_canvasItemData;

@end


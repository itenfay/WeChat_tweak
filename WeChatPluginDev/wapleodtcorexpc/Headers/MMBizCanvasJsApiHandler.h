//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebCanvasItemData;
@protocol MMBizCanvasJsApiHandlerDelegate;

@interface MMBizCanvasJsApiHandler : NSObject
{
    MMWebCanvasItemData *_canvasItemData;
    id <MMBizCanvasJsApiHandlerDelegate> _delegate;
    CDUnknownBlockType _callbackBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(nonatomic) __weak id <MMBizCanvasJsApiHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMWebCanvasItemData *canvasItemData; // @synthesize canvasItemData=_canvasItemData;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callbackWithId:(id)arg1 params:(id)arg2;
- (void)onResponseCanvasRequestCgi:(id)arg1;
- (void)addApi_canvasRequest:(id)arg1;
- (void)onResponseAdRequestCgi:(id)arg1;
- (void)addApi_adRequest:(id)arg1;
- (void)addApi_preloadImage:(id)arg1;
- (void)addApi_onItemClick:(id)arg1;
- (void)addApi_deleteCanvasCard:(id)arg1;
- (void)addApi_getData:(id)arg1;
- (void)addApi_getInfo:(id)arg1;
- (void)setupApiWithJSContext:(id)arg1;
- (void)dealloc;

@end


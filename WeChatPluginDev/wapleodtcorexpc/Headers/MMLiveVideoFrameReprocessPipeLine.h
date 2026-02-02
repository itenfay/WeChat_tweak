//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CIContext, MMLiveVideoFrameWidgetManageLogic;

@interface MMLiveVideoFrameReprocessPipeLine : NSObject
{
    MMLiveVideoFrameWidgetManageLogic *_widgetManageLogic;
    CIContext *_compositingContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CIContext *compositingContext; // @synthesize compositingContext=_compositingContext;
@property(retain, nonatomic) MMLiveVideoFrameWidgetManageLogic *widgetManageLogic; // @synthesize widgetManageLogic=_widgetManageLogic;
- (struct opaqueCMSampleBuffer *)createCompositedSampleBufferWithSourceBuffer:(struct opaqueCMSampleBuffer *)arg1 widgetList:(id)arg2 flipX:(_Bool)arg3;
- (void)createCompositingContext;
- (struct opaqueCMSampleBuffer *)createCompositedSampleBufferWithVideoFrameWidgetsBeforeSend:(struct opaqueCMSampleBuffer *)arg1 flipX:(_Bool)arg2;
- (struct opaqueCMSampleBuffer *)createCompositedSampleBufferWithVideoFrameWidgetsBeforeRender:(struct opaqueCMSampleBuffer *)arg1 flipX:(_Bool)arg2;
- (void)initDefaultData;
- (id)init;

@end


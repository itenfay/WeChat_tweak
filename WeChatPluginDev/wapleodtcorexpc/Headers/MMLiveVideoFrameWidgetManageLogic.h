//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OrderedDictionary;
@protocol OS_dispatch_semaphore;

@interface MMLiveVideoFrameWidgetManageLogic : NSObject
{
    OrderedDictionary *_renderWidgetDict;
    OrderedDictionary *_transmitWidgetDict;
    NSObject<OS_dispatch_semaphore> *_renderWidgetDictLock;
    NSObject<OS_dispatch_semaphore> *_transmitWidgetDictLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *transmitWidgetDictLock; // @synthesize transmitWidgetDictLock=_transmitWidgetDictLock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *renderWidgetDictLock; // @synthesize renderWidgetDictLock=_renderWidgetDictLock;
@property(retain, nonatomic) OrderedDictionary *transmitWidgetDict; // @synthesize transmitWidgetDict=_transmitWidgetDict;
@property(retain, nonatomic) OrderedDictionary *renderWidgetDict; // @synthesize renderWidgetDict=_renderWidgetDict;
- (id)getVideoFrameWidgetListBeforeTransmit;
- (void)removeTransmitVideoFrameWidgetWithId:(id)arg1;
- (void)removeTransmitVideoFrameWidget:(id)arg1;
- (void)insertTransmitVideoFrameWidgetToBack:(id)arg1;
- (void)addTransmitVideoFrameWidget:(id)arg1;
- (id)getVideoFrameWidgetListBeforeRender;
- (void)removeRenderVideoFrameWidgetWithId:(id)arg1;
- (void)removeRenderVideoFrameWidget:(id)arg1;
- (void)insertRenderVideoFrameWidgetToBack:(id)arg1;
- (void)addRenderVideoFrameWidget:(id)arg1;
- (void)initDefaultData;
- (id)init;

@end


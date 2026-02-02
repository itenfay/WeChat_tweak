//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MBBizSystem, NSMutableDictionary;
@protocol IMBReportProxy;

@interface MagicBrushService : NSObject
{
    NSMutableDictionary *_extDict;
    MBBizSystem *_bizSystem;
    id <IMBReportProxy> _reportProxy;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IMBReportProxy> reportProxy; // @synthesize reportProxy=_reportProxy;
@property(retain, nonatomic) MBBizSystem *bizSystem; // @synthesize bizSystem=_bizSystem;
@property(retain, nonatomic) NSMutableDictionary *extDict; // @synthesize extDict=_extDict;
- (void)forceStop:(id)arg1 withAllConnectedBizes:(_Bool)arg2;
- (id)getReportExtraDictionary:(id)arg1 publicServices:(id)arg2;
- (void)runCodeInMBThreadSync:(CDUnknownBlockType)arg1;
- (void)runCodeInMBThread:(CDUnknownBlockType)arg1;
- (void)report:(int)arg1 logStr:(id)arg2;
- (id)newBiz:(id)arg1;
- (id)initWithProxy:(id)arg1 pluginProxy:(id)arg2 reportProxy:(id)arg3;
- (id)init;
- (void)onSendEventWithEventName:(id)arg1 extData:(id)arg2;
- (void)unRegisterEventWithEventName:(id)arg1 instanceName:(id)arg2;
- (void)registerEventWithEventName:(id)arg1 instanceName:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)unRegisterJsEventImplWithEventName:(id)arg1;
- (void)registerJsEventImplWithEventName:(id)arg1 impl:(id)arg2;

@end


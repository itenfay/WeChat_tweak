//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QMapNetworkStatProcessor;

@interface QMapNetworkProcessorQueue : NSObject
{
    QMapNetworkStatProcessor *_processor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QMapNetworkStatProcessor *processor; // @synthesize processor=_processor;
- (void)onResponse:(id)arg1 error:(id)arg2 request:(id)arg3 data:(id)arg4;
- (void)onRequest:(id)arg1;
- (void)unregisterRules:(id)arg1;
- (void)registerRules:(id)arg1;
- (id)init;

@end


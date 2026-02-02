//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSObject;
@protocol WAWebViewPlugin_ApiQueueProtocol;

@interface WAWebViewPlugin_APIQueue
{
    NSMutableArray *_arrEvent;
    NSObject<WAWebViewPlugin_ApiQueueProtocol> *_runningEvent;
}

- (void).cxx_destruct;
@property(retain) NSObject<WAWebViewPlugin_ApiQueueProtocol> *runningEvent; // @synthesize runningEvent=_runningEvent;
@property(retain) NSMutableArray *arrEvent; // @synthesize arrEvent=_arrEvent;
- (void)removeApiEvent:(id)arg1;
- (void)checkApiEvent;
- (void)addApiEvent:(id)arg1 param:(id)arg2;
- (id)init;

@end


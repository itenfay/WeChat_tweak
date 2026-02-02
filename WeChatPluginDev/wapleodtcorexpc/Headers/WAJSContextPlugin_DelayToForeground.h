//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSMutableArray;

@interface WAJSContextPlugin_DelayToForeground
{
    NSMutableArray *_delayPerformArr;
}

@property(retain, nonatomic) NSMutableArray *delayPerformArr; // @synthesize delayPerformArr=_delayPerformArr;
- (void)trimJSAPIInArray:(id)arg1;
- (void)execute;
- (void)addDelayJSAPIHandler:(CDUnknownBlockType)arg1 jsapiName:(id)arg2;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)init;

@end

//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, NSMutableArray, NSMutableDictionary, NSMutableSet, UILabel, UIView, WAPerformanceLabel;

@interface WAJSContextPlugin_Performance
{
    _Bool _enabled;
    double _containerWidth;
    UIView *_containerView;
    double _contentOffset;
    UILabel *_subTitle[3];
    NSMutableArray *_arrSubItems[3];
    NSMutableDictionary *_dicCustomKeys;
    NSMutableDictionary *_titleKeys;
    NSMutableArray *_fpsValues;
    _Bool _didAppear;
    NSMutableSet *_cachedInnerKeyValues;
    NSMutableSet *_cachedCustomKeyValues;
    CADisplayLink *_displayLink;
    double _lastTime;
    unsigned long long _count;
    WAPerformanceLabel *_labelFPS;
}

- (void).cxx_destruct;
- (_Bool)updateItem:(long long)arg1 type:(long long)arg2 value:(id)arg3;
- (void)innerInsertCustomData:(id)arg1 value:(id)arg2;
- (void)insertCustomData:(id)arg1 value:(id)arg2;
- (void)addCommonPerformanceEx:(long long)arg1 value:(id)arg2;
- (void)addCommonPerformance:(long long)arg1 value:(id)arg2;
- (void)insertPerformanceData:(long long)arg1 value:(id)arg2;
- (void)updateGroup;
- (int)recordFpsAndGetAvg:(int)arg1;
- (void)displayLinkTick:(id)arg1;
- (void)initPerformanceView;
- (void)clearView;
- (void)disablePerformance;
- (void)insertCachedData;
- (void)updateStorage;
- (void)didRotate:(id)arg1;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)pluginDidCreated;
- (id)init;

@end


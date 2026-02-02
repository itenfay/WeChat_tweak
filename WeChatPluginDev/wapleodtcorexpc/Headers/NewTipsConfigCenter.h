//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface NewTipsConfigCenter : NSObject
{
    NSMutableDictionary *_dictNewTipsConfig;
    NSMutableSet *_xlabNewTipsConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *xlabNewTipsConfig; // @synthesize xlabNewTipsConfig=_xlabNewTipsConfig;
@property(retain, nonatomic) NSMutableDictionary *dictNewTipsConfig; // @synthesize dictNewTipsConfig=_dictNewTipsConfig;
- (id)GetPathOfNewTipsConfig;
- (id)GetRootPathOfNewTips;
- (id)getConfigWithId:(unsigned int)arg1 Type:(unsigned long long)arg2 FilterClass:(id)arg3;
- (void)registerXLabTips:(id)arg1;
- (void)registerInteractiveTips:(unsigned int)arg1 FilterClass:(id)arg2;
- (void)registerInteractiveTips:(unsigned int)arg1;
- (void)registerDynamicTips:(unsigned int)arg1 FilterClass:(id)arg2;
- (void)registerDynamicTips:(unsigned int)arg1;
- (void)registerLocalTips:(unsigned int)arg1 UID:(id)arg2 FilterClass:(id)arg3;
- (void)registerLocalTips:(unsigned int)arg1 UID:(id)arg2;
- (id)getXLabNewTipsConfig;
- (id)getDictNewTipsConfig;
- (id)getNewTipsConfigWithTipsId:(unsigned int)arg1;
- (id)init;
- (void)deleteUselessConfigFile;
- (void)registerNewTipsCenter;

@end


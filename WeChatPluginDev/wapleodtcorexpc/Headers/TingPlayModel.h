//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMListenCategoryItem, TingFlowPlayerConfiguration, TingItem, TingListSourceContext;
@protocol TingPlayTaskService;

@interface TingPlayModel : NSObject
{
    id <TingPlayTaskService> _taskService;
    unsigned long long _index;
    TingFlowPlayerConfiguration *_configuration;
    TingListSourceContext *_listContext;
    TingItem *_initialTingItem;
    MMListenCategoryItem *_initialCategoryItem;
}

+ (id)modelWithListSource:(id)arg1 index:(unsigned long long)arg2 scene:(int)arg3;
+ (id)modelWithTaskSnapshot:(id)arg1 scene:(int)arg2;
+ (_Bool)enableDisablePresetItemsFeature;
+ (id)modelWithListenIds:(id)arg1 index:(unsigned long long)arg2 scene:(int)arg3;
+ (id)modelWithCategoryItem:(id)arg1 listContext:(id)arg2 index:(unsigned long long)arg3 scene:(int)arg4;
+ (id)modelWithCategoryItem:(id)arg1 presetItems:(id)arg2 index:(unsigned long long)arg3 scene:(int)arg4;
+ (id)modelWithTingItem:(id)arg1 scene:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMListenCategoryItem *initialCategoryItem; // @synthesize initialCategoryItem=_initialCategoryItem;
@property(retain, nonatomic) TingItem *initialTingItem; // @synthesize initialTingItem=_initialTingItem;
@property(retain, nonatomic) TingListSourceContext *listContext; // @synthesize listContext=_listContext;
@property(retain, nonatomic) TingFlowPlayerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) id <TingPlayTaskService> taskService; // @synthesize taskService=_taskService;

@end


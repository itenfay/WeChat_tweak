//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMBizFileMatchNode;

@interface MMDiskBizUsageHandler : NSObject
{
    MMBizFileMatchNode *_appRootMatchNode;
}

+ (struct MMBizMatchInfo)fileMatchedBizType:(id)arg1 inFolder:(id)arg2;
+ (void)matchBizWithChildFolder:(id)arg1 parentFolder:(id)arg2;
+ (id)ruleDescription:(const struct MMDiskUsageBizRule *)arg1;
+ (_Bool)p_isRuleValid:(const struct MMDiskUsageBizRule *)arg1;
+ (long long)p_validateStoreTimeType:(const struct MMDiskUsageBizRule *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBizFileMatchNode *appRootMatchNode; // @synthesize appRootMatchNode=_appRootMatchNode;
- (void)p_makeArrayBizFileNodeZeroAppData:(id)arg1;
- (void)p_makeArrayBizFileNodeOtherUser:(id)arg1;
- (_Bool)addPathComponent:(id)arg1 withRule:(const struct MMDiskUsageBizRule *)arg2 toRootNode:(id)arg3 supportModify:(_Bool)arg4;
- (_Bool)addPathComponent:(id)arg1 withRule:(const struct MMDiskUsageBizRule *)arg2 toRootNode:(id)arg3;
- (id)loadPathMatchRulesWithOtherUser:(_Bool)arg1;
- (id)getRootMatchNode;
- (void)patchAppendBizRule:(struct MMDiskUsageBizRule)arg1;

@end


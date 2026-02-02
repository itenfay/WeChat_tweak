//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXGRoamUtility : NSObject
{
}

+ (id)getRelatedMemoryKV;
+ (id)fullDiffStateKey;
+ (void)resetNeedFullDiff;
+ (void)setNeedFullDiff;
+ (id)getRecoverInfo;
+ (void)setRecoverTimeWithUsernames:(id)arg1 recoverTime:(unsigned long long)arg2;
+ (_Bool)shouldNeedFullDiff;
- (void)triggerLocalNetworkAlert;

@end


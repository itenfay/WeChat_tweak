//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface NewLifeAnimatorHelper : NSObject
{
    NSMapTable *_animatorMap;
}

+ (void)RemoveDetailAnimationBehaviorWithKey:(id)arg1;
+ (void)RebindDetailAnimationBehavior:(id)arg1;
+ (id)DetailAnimatorForKey:(id)arg1;
+ (id)shareData;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *animatorMap; // @synthesize animatorMap=_animatorMap;
- (id)init;

@end


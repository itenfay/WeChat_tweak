//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface WCFinderZoomAnimatorShareData : NSObject
{
    NSMapTable *_animatorMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *animatorMap; // @synthesize animatorMap=_animatorMap;
- (void)cleanAnimator:(id)arg1;
- (void)registerAnimator:(id)arg1;
- (void)rebindAnimztorWithBehavior:(id)arg1 key:(id)arg2;
- (id)zoomAnimatorForKey:(id)arg1;
- (_Bool)hasZoomAnimatorForKey:(id)arg1;
- (id)init;

@end


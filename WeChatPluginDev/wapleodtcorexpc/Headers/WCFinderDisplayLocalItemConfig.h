//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderDisplayLocalItemConfig : NSObject
{
    _Bool _hiddenFollowLocalItemWhenNormal;
    _Bool _hiddenFollowLocalItemWhenPrefetch;
    _Bool _hiddenFriendLocalItemWhenNormal;
    _Bool _hiddenFriendLocalItemWhenPrefetch;
    _Bool _hiddenMachineLocalItemWhenNormal;
    _Bool _hiddenMachineLocalItemWhenPrefetch;
}

+ (id)defaultConfig;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
@property(nonatomic) _Bool hiddenMachineLocalItemWhenPrefetch; // @synthesize hiddenMachineLocalItemWhenPrefetch=_hiddenMachineLocalItemWhenPrefetch;
@property(nonatomic) _Bool hiddenMachineLocalItemWhenNormal; // @synthesize hiddenMachineLocalItemWhenNormal=_hiddenMachineLocalItemWhenNormal;
@property(nonatomic) _Bool hiddenFriendLocalItemWhenPrefetch; // @synthesize hiddenFriendLocalItemWhenPrefetch=_hiddenFriendLocalItemWhenPrefetch;
@property(nonatomic) _Bool hiddenFriendLocalItemWhenNormal; // @synthesize hiddenFriendLocalItemWhenNormal=_hiddenFriendLocalItemWhenNormal;
@property(nonatomic) _Bool hiddenFollowLocalItemWhenPrefetch; // @synthesize hiddenFollowLocalItemWhenPrefetch=_hiddenFollowLocalItemWhenPrefetch;
@property(nonatomic) _Bool hiddenFollowLocalItemWhenNormal; // @synthesize hiddenFollowLocalItemWhenNormal=_hiddenFollowLocalItemWhenNormal;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TBPromoteIconBehaviourStat : NSObject
{
    NSMutableDictionary *_userBehaviourMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *userBehaviourMap; // @synthesize userBehaviourMap=_userBehaviourMap;
- (void)increasePromoteIconShowCount:(id)arg1;
- (id)getOrCreatePromoteIconBehaviourWithPromoteID:(id)arg1;
- (id)descriptionArray;
- (id)description;
- (id)init;

@end


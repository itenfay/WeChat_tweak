//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TBIndoorUserBehaviourStat : NSObject
{
    NSMutableDictionary *_userBehaviourMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *userBehaviourMap; // @synthesize userBehaviourMap=_userBehaviourMap;
- (void)increasePickerShowCount:(id)arg1;
- (void)increaseCallActiveLevelAPICount:(id)arg1;
- (void)increaseShowCount:(id)arg1;
- (id)getOrCreateUserBehaviourWithbuildingID:(id)arg1;
- (id)descriptionArray;
- (id)description;
- (id)init;

@end


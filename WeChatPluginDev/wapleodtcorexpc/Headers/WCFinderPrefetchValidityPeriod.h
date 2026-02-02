//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderPrefetchValidityPeriod : NSObject
{
    unsigned long long _validityPeriodOfFollowTab;
    unsigned long long _validityPeriodOfFriendTab;
    unsigned long long _validityPeriodOfMachineTab;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
@property(nonatomic) unsigned long long validityPeriodOfMachineTab; // @synthesize validityPeriodOfMachineTab=_validityPeriodOfMachineTab;
@property(nonatomic) unsigned long long validityPeriodOfFriendTab; // @synthesize validityPeriodOfFriendTab=_validityPeriodOfFriendTab;
@property(nonatomic) unsigned long long validityPeriodOfFollowTab; // @synthesize validityPeriodOfFollowTab=_validityPeriodOfFollowTab;
- (id)init;

@end


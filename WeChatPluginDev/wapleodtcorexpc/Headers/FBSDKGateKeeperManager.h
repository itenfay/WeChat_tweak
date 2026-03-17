//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FBSDKGateKeeperManager : NSObject
{
}

+ (_Bool)_gateKeeperIsValid;
+ (_Bool)_gateKeeperTimestampIsValid:(id)arg1;
+ (void)processLoadRequestResponse:(id)arg1 error:(id)arg2 appID:(id)arg3;
+ (id)requestToLoadGateKeepers:(id)arg1;
+ (void)loadGateKeepers;
+ (_Bool)boolForKey:(id)arg1 appID:(id)arg2 defaultValue:(_Bool)arg3;

@end


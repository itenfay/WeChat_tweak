//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBBeaconStrategyQueryHandler : NSObject
{
    int _retryTime;
}

+ (id)sharedInstance;
@property(nonatomic) int retryTime; // @synthesize retryTime=_retryTime;
- (_Bool)processStrategy:(id)arg1;
- (_Bool)processCommonStrategy:(id)arg1;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)failQuery:(id)arg1;
- (void)startStrategyQuery;
- (void)checkStrategyQuery:(double)arg1;
- (id)init;

@end


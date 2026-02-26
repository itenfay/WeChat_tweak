#import <Foundation/Foundation.h>

#import "WCPLLogger.h"

typedef NS_ENUM(NSInteger, WCPLHookOrigPolicy) {
    WCPLHookOrigPolicyPre = 0,
    WCPLHookOrigPolicyPost = 1,
    WCPLHookOrigPolicyConditionalShortCircuit = 2,
};

static inline NSString *wcpl_hookOrigPolicyName(WCPLHookOrigPolicy policy) {
    switch (policy) {
        case WCPLHookOrigPolicyPre:
            return @"pre";
        case WCPLHookOrigPolicyPost:
            return @"post";
        case WCPLHookOrigPolicyConditionalShortCircuit:
            return @"conditional_short_circuit";
    }
    return @"unknown";
}

static inline void wcpl_hookGovernanceLog(NSString *feature,
                                          NSString *className,
                                          NSString *selectorName,
                                          NSString *stage,
                                          NSString *decision,
                                          WCPLHookOrigPolicy policy,
                                          NSString *detail) {
    if ([WCPLLogger currentLevel] > WCPLLogLevelDebug) {
        return;
    }

    WCPLLogDebug(@"[Hook治理][%@][%@::%@] stage=%@ decision=%@ orig=%@ detail=%@",
                 feature ?: @"unknown",
                 className ?: @"unknown",
                 selectorName ?: @"unknown",
                 stage ?: @"unknown",
                 decision ?: @"unknown",
                 wcpl_hookOrigPolicyName(policy),
                 detail ?: @"-");
}

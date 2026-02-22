//
// WCPLConfigCenter.h
//

#import <Foundation/Foundation.h>

#import "WCPLAVConfig.h"
#import "WCPLGestureConfig.h"
#import "WCPLIgnoreConfig.h"
#import "WCPLLoginConfig.h"
#import "WCPLLocationConfig.h"
#import "WCPLPush2ChatConfig.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLRevokeConfig.h"
#import "WCPLTimelineConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface WCPLConfigCenter : NSObject

+ (instancetype)shared;

@property (readonly, nonatomic) WCPLRedEnvelopConfig *redEnvelop;
@property (readonly, nonatomic) WCPLGestureConfig *gesture;
@property (readonly, nonatomic) WCPLLocationConfig *location;
@property (readonly, nonatomic) WCPLIgnoreConfig *ignore;
@property (readonly, nonatomic) WCPLLoginConfig *login;
@property (readonly, nonatomic) WCPLAVConfig *av;
@property (readonly, nonatomic) WCPLRevokeConfig *revoke;
@property (readonly, nonatomic) WCPLTimelineConfig *timeline;
@property (readonly, nonatomic) WCPLPush2ChatConfig *push2Chat;
@property (assign, nonatomic) BOOL douyinParserEnable;

@end

NS_ASSUME_NONNULL_END

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

@interface WCPLConfigCenterComponents : NSObject

@property (nullable, nonatomic, strong) WCPLRedEnvelopConfig *redEnvelop;
@property (nullable, nonatomic, strong) WCPLGestureConfig *gesture;
@property (nullable, nonatomic, strong) WCPLLocationConfig *location;
@property (nullable, nonatomic, strong) WCPLIgnoreConfig *ignore;
@property (nullable, nonatomic, strong) WCPLLoginConfig *login;
@property (nullable, nonatomic, strong) WCPLAVConfig *av;
@property (nullable, nonatomic, strong) WCPLRevokeConfig *revoke;
@property (nullable, nonatomic, strong) WCPLTimelineConfig *timeline;
@property (nullable, nonatomic, strong) WCPLPush2ChatConfig *push2Chat;

@end

@interface WCPLConfigCenter : NSObject

+ (instancetype)shared;
+ (instancetype)centerWithDefaults:(NSUserDefaults *)defaults
                        components:(nullable WCPLConfigCenterComponents *)components;

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults
                      components:(nullable WCPLConfigCenterComponents *)components;

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
@property (assign, nonatomic) BOOL markAllReadTopRightMenuEnable;
@property (assign, nonatomic) BOOL safariOpenLinkEnable;

@end

NS_ASSUME_NONNULL_END

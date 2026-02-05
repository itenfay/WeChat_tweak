//
// WCPLConfigCenter.h
//

#import <Foundation/Foundation.h>

#import "WCPLAVConfig.h"
#import "WCPLGestureConfig.h"
#import "WCPLIgnoreConfig.h"
#import "WCPLLocationConfig.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLRepeatButtonConfig.h"
#import "WCPLRevokeConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface WCPLConfigCenter : NSObject

+ (instancetype)shared;

@property (readonly, nonatomic) WCPLRedEnvelopConfig *redEnvelop;
@property (readonly, nonatomic) WCPLGestureConfig *gesture;
@property (readonly, nonatomic) WCPLRepeatButtonConfig *repeatButton;
@property (readonly, nonatomic) WCPLLocationConfig *location;
@property (readonly, nonatomic) WCPLIgnoreConfig *ignore;
@property (readonly, nonatomic) WCPLAVConfig *av;
@property (readonly, nonatomic) WCPLRevokeConfig *revoke;

@end

NS_ASSUME_NONNULL_END


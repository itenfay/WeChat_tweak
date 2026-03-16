//
// WCPLConfigCenter.m
//

#import "WCPLConfigCenter.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLDouyinParserEnable = @"kWCPLDouyinParserEnable";
static NSString *const kWCPLMarkAllReadTopRightMenuEnable = @"kWCPLMarkAllReadTopRightMenuEnable";
static NSString *const kWCPLSafariOpenLinkEnable = @"kWCPLSafariOpenLinkEnable";

@implementation WCPLConfigCenterComponents
@end

@interface WCPLConfigCenter ()

@property (nonatomic, strong) NSUserDefaults *defaults;

@end

@implementation WCPLConfigCenter

+ (instancetype)shared {
    static WCPLConfigCenter *center = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        center = [WCPLConfigCenter centerWithDefaults:[NSUserDefaults standardUserDefaults]
                                          components:nil];
    });
    return center;
}

- (instancetype)init {
    return [self initWithDefaults:[NSUserDefaults standardUserDefaults] components:nil];
}

+ (instancetype)centerWithDefaults:(NSUserDefaults *)defaults
                        components:(WCPLConfigCenterComponents *)components {
    return [[self alloc] initWithDefaults:defaults components:components];
}

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults
                      components:(WCPLConfigCenterComponents *)components {
    if (self = [super init]) {
        _defaults = defaults ?: [NSUserDefaults standardUserDefaults];
        _redEnvelop = components.redEnvelop ?: [WCPLRedEnvelopConfig configWithDefaults:_defaults];
        _gesture = components.gesture ?: [WCPLGestureConfig configWithDefaults:_defaults];
        _location = components.location ?: [WCPLLocationConfig configWithDefaults:_defaults];
        _ignore = components.ignore ?: [WCPLIgnoreConfig configWithDefaults:_defaults];
        _login = components.login ?: [WCPLLoginConfig configWithDefaults:_defaults];
        _av = components.av ?: [WCPLAVConfig configWithDefaults:_defaults];
        _revoke = components.revoke ?: [WCPLRevokeConfig configWithDefaults:_defaults];
        _timeline = components.timeline ?: [WCPLTimelineConfig configWithDefaults:_defaults];
        _push2Chat = components.push2Chat ?: [WCPLPush2ChatConfig configWithDefaults:_defaults];

        NSNumber *enableObj = [_defaults objectForKey:kWCPLDouyinParserEnable];
        _douyinParserEnable = enableObj ? enableObj.boolValue : YES;
        [_defaults setBool:_douyinParserEnable forKey:kWCPLDouyinParserEnable];

        NSNumber *markAllReadObj = [_defaults objectForKey:kWCPLMarkAllReadTopRightMenuEnable];
        _markAllReadTopRightMenuEnable = markAllReadObj ? markAllReadObj.boolValue : NO;
        [_defaults setBool:_markAllReadTopRightMenuEnable forKey:kWCPLMarkAllReadTopRightMenuEnable];

        NSNumber *safariOpenObj = [_defaults objectForKey:kWCPLSafariOpenLinkEnable];
        _safariOpenLinkEnable = safariOpenObj ? safariOpenObj.boolValue : NO;
        [_defaults setBool:_safariOpenLinkEnable forKey:kWCPLSafariOpenLinkEnable];
    }
    return self;
}

- (void)setDouyinParserEnable:(BOOL)douyinParserEnable {
    _douyinParserEnable = douyinParserEnable;
    [self.defaults setBool:douyinParserEnable forKey:kWCPLDouyinParserEnable];
}

- (void)setMarkAllReadTopRightMenuEnable:(BOOL)markAllReadTopRightMenuEnable {
    _markAllReadTopRightMenuEnable = markAllReadTopRightMenuEnable;
    [self.defaults setBool:markAllReadTopRightMenuEnable forKey:kWCPLMarkAllReadTopRightMenuEnable];
}

- (void)setSafariOpenLinkEnable:(BOOL)safariOpenLinkEnable {
    _safariOpenLinkEnable = safariOpenLinkEnable;
    [self.defaults setBool:safariOpenLinkEnable forKey:kWCPLSafariOpenLinkEnable];
}

@end

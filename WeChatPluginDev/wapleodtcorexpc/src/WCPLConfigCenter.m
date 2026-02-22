//
// WCPLConfigCenter.m
//

#import "WCPLConfigCenter.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLDouyinParserEnable = @"kWCPLDouyinParserEnable";

@implementation WCPLConfigCenter

+ (instancetype)shared {
    static WCPLConfigCenter *center = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        center = [[WCPLConfigCenter alloc] init];
    });
    return center;
}

- (instancetype)init {
    if (self = [super init]) {
        _redEnvelop = [WCPLRedEnvelopConfig sharedConfig];
        _gesture = [WCPLGestureConfig sharedConfig];
        _location = [WCPLLocationConfig sharedConfig];
        _ignore = [WCPLIgnoreConfig sharedConfig];
        _login = [WCPLLoginConfig sharedConfig];
        _av = [WCPLAVConfig sharedConfig];
        _revoke = [WCPLRevokeConfig sharedConfig];
        _timeline = [WCPLTimelineConfig sharedConfig];
        _push2Chat = [WCPLPush2ChatConfig sharedConfig];

        NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
        NSNumber *enableObj = [defaults objectForKey:kWCPLDouyinParserEnable];
        _douyinParserEnable = enableObj ? enableObj.boolValue : YES;
        [defaults setBool:_douyinParserEnable forKey:kWCPLDouyinParserEnable];
    }
    return self;
}

- (void)setDouyinParserEnable:(BOOL)douyinParserEnable {
    _douyinParserEnable = douyinParserEnable;
    [[NSUserDefaults standardUserDefaults] setBool:douyinParserEnable forKey:kWCPLDouyinParserEnable];
}

@end

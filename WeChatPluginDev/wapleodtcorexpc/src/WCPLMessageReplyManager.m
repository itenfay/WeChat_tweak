//
// WCPLMessageReplyManager.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//
// Updated: Real repeat message feature (复读机功能)
// 在消息气泡旁边显示 +1 按钮，点击后复读该消息
//

#import "WCPLMessageReplyManager.h"
#import "WCPLRepeatButton.h"
#import "WCPLConfigCenter.h"
#import "WeChatRedEnvelop.h"
#import "WCPLLogger.h"
#import "WCPLCrashReporter.h"
#import <objc/runtime.h>
#import <objc/message.h>

// 调试弹窗开关 key
static NSString *const kWCPLRepeatDebugAlertEnabledKey = @"kWCPLRepeatDebugAlertEnabled";

static NSString *wcpl_mrm_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_mrm_safeUserNameFromObject(id obj) {
    if (!obj) return nil;
    if ([obj isKindOfClass:[NSString class]]) {
        return wcpl_mrm_trimString((NSString *)obj);
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [obj isKindOfClass:contactClass]) {
        @try {
            return wcpl_mrm_trimString(((CContact *)obj).m_nsUsrName);
        } @catch (__unused NSException *exception) {
        }
    }

    if ([obj respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(obj, @selector(m_nsUsrName));
            if ([value isKindOfClass:[NSString class]]) {
                return wcpl_mrm_trimString((NSString *)value);
            }
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        id value = [obj valueForKey:@"m_nsUsrName"];
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_mrm_trimString((NSString *)value);
        }
    } @catch (__unused NSException *exception) {
    }

    return nil;
}

typedef NS_ENUM(NSInteger, WCPLRepeatMessageKind) {
    WCPLRepeatMessageKindText,
    WCPLRepeatMessageKindEmoticon,
    WCPLRepeatMessageKindImage,
};

@interface WCPLRepeatSendContext : NSObject
@property (nonatomic, assign) WCPLRepeatMessageKind kind;
@property (nonatomic, strong) BaseMsgContentViewController *viewController;
@property (nonatomic, strong) CMessageWrap *msgWrap;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *toUserName;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSData *imageData;
@property (nonatomic, copy) NSString *imagePath;
@property (nonatomic, copy) NSString *emoticonMD5;
@property (nonatomic, copy) NSString *emoticonContent;
@end

@implementation WCPLRepeatSendContext
@end

typedef BOOL (^WCPLSendStrategyBlock)(void);

@interface WCPLMessageReplyManager ()
- (BOOL)wcpl_tryResendVoiceMessage:(CMessageWrap *)msgWrap
                        toUserName:(NSString *)toUserName
                           execLog:(NSMutableString *)execLog;
- (BOOL)wcpl_isEmoticonMessage:(CMessageWrap *)msgWrap;
- (UIView *)wcpl_repeatButtonHostViewForCellView:(CommonMessageCellView *)cellView
                                       bubbleView:(UIView *)bubbleView;
- (UIButton *)wcpl_findOrFixRepeatButtonInContainer:(UIView *)containerView
                                           cellView:(UIView *)cellView
                                         messageKey:(NSString *)messageKey;
- (void)wcpl_collectViewsWithTag:(NSInteger)tag
                          inView:(UIView *)view
                         results:(NSMutableArray<UIView *> *)results;
- (void)wcpl_pruneDuplicateButtonsKeeping:(UIButton *)keepButton
                                cellView:(CommonMessageCellView *)cellView;
- (NSString *)wcpl_messageKeyForMsgWrap:(CMessageWrap *)msgWrap;
@end

static WCPLSendStrategyBlock WCPLSendStrategy(WCPLSendStrategyBlock block) {
    if (!block) {
        return ^BOOL { return NO; };
    }
    return [block copy];
}

static NSDictionary<NSString *, NSArray<NSString *> *> *WCPLImageSendSelectorGroups(void) {
    static NSDictionary<NSString *, NSArray<NSString *> *> *groups = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        groups = @{
            @"image": @[
                @"sendImage:",
                @"SendImage:",
                @"sendImageWithImage:",
                @"SendImageWithImage:",
                @"sendPic:",
                @"SendPic:",
                @"sendPicture:",
                @"SendPicture:"
            ],
            @"data": @[
                @"sendImageData:",
                @"SendImageData:",
                @"sendImageWithData:",
                @"SendImageWithData:"
            ],
            @"path": @[
                @"sendImagePath:",
                @"SendImagePath:",
                @"sendImageAtPath:",
                @"SendImageAtPath:",
                @"sendImageWithPath:",
                @"SendImageWithPath:",
                @"sendPicPath:",
                @"SendPicPath:",
                @"sendPicturePath:",
                @"SendPicturePath:"
            ],
            @"imageToUser": @[
                @"sendImage:toUser:",
                @"SendImage:toUser:",
                @"sendImage:toUsr:",
                @"SendImage:toUsr:",
                @"sendPic:toUser:",
                @"SendPic:toUser:",
                @"sendPicture:toUser:",
                @"SendPicture:toUser:"
            ],
            @"dataToUser": @[
                @"sendImageData:toUser:",
                @"SendImageData:toUser:",
                @"sendImageWithData:toUser:",
                @"SendImageWithData:toUser:"
            ],
            @"pathToUser": @[
                @"sendImagePath:toUser:",
                @"SendImagePath:toUser:",
                @"sendImageAtPath:toUser:",
                @"SendImageAtPath:toUser:",
                @"sendImageWithPath:toUser:",
                @"SendImageWithPath:toUser:",
                @"sendPicPath:toUser:",
                @"SendPicPath:toUser:",
                @"sendPicturePath:toUser:",
                @"SendPicturePath:toUser:"
            ],
            @"imageDataInfo": @[
                @"SendImageMessage:withData:ImageInfo:",
                @"sendImageMessage:withData:ImageInfo:",
                @"SendImageMessage:withData:imageInfo:",
                @"sendImageMessage:withData:imageInfo:"
            ]
        };
    });
    return groups;
}

@implementation WCPLMessageReplyManager

static char kWCPLRepeatButtonMessageKey;
static char kWCPLRepeatButtonUpdatingKey;
static char kWCPLRepeatButtonBoundButtonKey;

+ (WCPLMessageReplyManager *)sharedManager {
    static WCPLMessageReplyManager *manager;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [WCPLMessageReplyManager new];
    });
    return manager;
}

#pragma mark - Safe Helpers

- (UITableViewCell *)wcpl_tableViewCellForView:(UIView *)view {
    UIView *currentView = view;
    UITableViewCell *foundCell = nil;
    while (currentView) {
        if ([currentView isKindOfClass:[UITableViewCell class]]) {
            foundCell = (UITableViewCell *)currentView;
        }
        currentView = currentView.superview;
    }
    return foundCell;
}

- (UIView *)wcpl_findFirstSubviewOfClass:(Class)targetClass inView:(UIView *)view {
    if (!targetClass || !view) return nil;

    for (UIView *subview in view.subviews) {
        if ([subview isKindOfClass:targetClass]) {
            return subview;
        }
        UIView *found = [self wcpl_findFirstSubviewOfClass:targetClass inView:subview];
        if (found) return found;
    }
    return nil;
}

- (CommonMessageCellView *)wcpl_findCellViewFromContainer:(UIView *)containerView {
    if (!containerView) return nil;

    UITableViewCell *cell = [self wcpl_tableViewCellForView:containerView];
    Class cellViewClass = objc_getClass("CommonMessageCellView");
    if (cellViewClass && [cell isKindOfClass:cellViewClass]) {
        return (CommonMessageCellView *)cell;
    }

    UIView *rootView = cell ? cell.contentView : containerView;
    UIView *found = [self wcpl_findFirstSubviewOfClass:cellViewClass inView:rootView];
    return (CommonMessageCellView *)found;
}

- (BOOL)wcpl_isVoiceMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return NO;
    BOOL isVoice = [self wcpl_safeInvokeBoolSelector:@selector(IsVoiceMsg)
                                            onObject:msgWrap
                                           arguments:nil
                                        defaultValue:NO];
    if (isVoice) return YES;
    return (msgWrap.m_uiMessageType == 34);
}

- (BOOL)wcpl_isEmoticonMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return NO;
    return (msgWrap.m_uiMessageType == 47);
}

- (BOOL)wcpl_safeInvokeVoidSelector:(SEL)selector onObject:(id)obj arguments:(NSArray<id> *)arguments {
    @try {
        if (!obj || !selector || ![obj respondsToSelector:selector]) return NO;

        NSMethodSignature *signature = [obj methodSignatureForSelector:selector];
        if (!signature) return NO;

        NSUInteger expectedCount = signature.numberOfArguments > 2 ? (signature.numberOfArguments - 2) : 0;
        if (arguments.count != expectedCount) return NO;

        NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:signature];
        [invocation setTarget:obj];
        [invocation setSelector:selector];

        for (NSUInteger idx = 0; idx < arguments.count; idx++) {
            id arg = arguments[idx];
            if (arg == (id)[NSNull null]) arg = nil;
            [invocation setArgument:&arg atIndex:idx + 2];
        }

        [invocation invoke];
        return YES;
    }
    @catch (__unused NSException *exception) {
        return NO;
    }
}

- (id)wcpl_safeInvokeObjectSelector:(SEL)selector onObject:(id)obj arguments:(NSArray<id> *)arguments {
    @try {
        if (!obj || !selector || ![obj respondsToSelector:selector]) return nil;

        NSMethodSignature *signature = [obj methodSignatureForSelector:selector];
        if (!signature) return nil;

        NSUInteger expectedCount = signature.numberOfArguments > 2 ? (signature.numberOfArguments - 2) : 0;
        if (arguments.count != expectedCount) return nil;

        NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:signature];
        [invocation setTarget:obj];
        [invocation setSelector:selector];

        for (NSUInteger idx = 0; idx < arguments.count; idx++) {
            id arg = arguments[idx];
            if (arg == (id)[NSNull null]) arg = nil;
            [invocation setArgument:&arg atIndex:idx + 2];
        }

        [invocation invoke];

        const char *returnType = signature.methodReturnType;
        if (strcmp(returnType, @encode(void)) == 0) {
            return nil;
        }
        if (returnType[0] == '@') {
            __unsafe_unretained id result = nil;
            [invocation getReturnValue:&result];
            return result;
        }
        return nil;
    }
    @catch (__unused NSException *exception) {
        return nil;
    }
}

- (BOOL)wcpl_safeInvokeBoolSelector:(SEL)selector onObject:(id)obj arguments:(NSArray<id> *)arguments defaultValue:(BOOL)defaultValue {
    @try {
        if (!obj || !selector || ![obj respondsToSelector:selector]) return defaultValue;

        NSMethodSignature *signature = [obj methodSignatureForSelector:selector];
        if (!signature) return defaultValue;

        NSUInteger expectedCount = signature.numberOfArguments > 2 ? (signature.numberOfArguments - 2) : 0;
        if (arguments.count != expectedCount) return defaultValue;

        NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:signature];
        [invocation setTarget:obj];
        [invocation setSelector:selector];

        for (NSUInteger idx = 0; idx < arguments.count; idx++) {
            id arg = arguments[idx];
            if (arg == (id)[NSNull null]) arg = nil;
            [invocation setArgument:&arg atIndex:idx + 2];
        }

        [invocation invoke];

        const char *returnType = signature.methodReturnType;
        if (returnType[0] == '@') {
            __unsafe_unretained id result = nil;
            [invocation getReturnValue:&result];
            if ([result respondsToSelector:@selector(boolValue)]) {
                return [result boolValue];
            }
            return defaultValue;
        }

        if (strcmp(returnType, @encode(BOOL)) == 0 || strcmp(returnType, "B") == 0) {
            BOOL value = defaultValue;
            [invocation getReturnValue:&value];
            return value;
        }
        if (strcmp(returnType, @encode(char)) == 0 || strcmp(returnType, @encode(unsigned char)) == 0) {
            unsigned char value = 0;
            [invocation getReturnValue:&value];
            return value != 0;
        }
        if (strcmp(returnType, @encode(int)) == 0 || strcmp(returnType, @encode(unsigned int)) == 0) {
            unsigned int value = 0;
            [invocation getReturnValue:&value];
            return value != 0;
        }

        return defaultValue;
    }
    @catch (__unused NSException *exception) {
        return defaultValue;
    }
}

- (BOOL)wcpl_tryInvokeSelectorNames:(NSArray<NSString *> *)selectors
                           onObject:(id)target
                          arguments:(NSArray<id> *)arguments
                            execLog:(NSMutableString *)execLog
                               name:(NSString *)name {
    if (!target || selectors.count == 0) return NO;

    for (NSString *selectorName in selectors) {
        SEL selector = NSSelectorFromString(selectorName);
        if ([self wcpl_safeInvokeVoidSelector:selector onObject:target arguments:arguments]) {
            if (execLog) {
                [execLog appendFormat:@"✅ %@ 调用 %@\n", name ?: @"target", selectorName];
            }
            return YES;
        }
    }

    return NO;
}

- (BOOL)wcpl_executeSendStrategies:(NSArray<WCPLSendStrategyBlock> *)strategies
                           execLog:(NSMutableString *)execLog {
    (void)execLog;
    if (strategies.count == 0) return NO;

    for (WCPLSendStrategyBlock block in strategies) {
        if (block && block()) {
            return YES;
        }
    }
    return NO;
}

- (BOOL)wcpl_sendRepeatMessageWithContext:(WCPLRepeatSendContext *)context
                                 execLog:(NSMutableString *)execLog {
    if (!context || !context.viewController) return NO;

    switch (context.kind) {
        case WCPLRepeatMessageKindText:
            return [self wcpl_sendTextWithContext:context execLog:execLog];
        case WCPLRepeatMessageKindEmoticon:
            return [self wcpl_sendEmoticonWithContext:context execLog:execLog];
        case WCPLRepeatMessageKindImage:
            return [self wcpl_sendImageWithContext:context execLog:execLog];
    }
    return NO;
}

- (BOOL)wcpl_sendTextWithContext:(WCPLRepeatSendContext *)context
                         execLog:(NSMutableString *)execLog {
    if (context.content.length == 0) return NO;
    [self sendMessageViaInputToolView:context.content
                       viewController:context.viewController
                              msgWrap:context.msgWrap];
    if (execLog) {
        [execLog appendString:@"✅ 文本发送已触发\n"];
    }
    return YES;
}

// 安全获取服务中心（兼容不同版本的单例入口）
- (id)wcpl_trySingletonFromClass:(Class)cls selectors:(NSArray<NSString *> *)selectorNames {
    if (!cls || selectorNames.count == 0) return nil;
    for (NSString *name in selectorNames) {
        SEL selector = NSSelectorFromString(name);
        id instance = [self wcpl_safeInvokeObjectSelector:selector onObject:cls arguments:nil];
        if (instance) return instance;
    }
    return nil;
}

- (id)wcpl_serviceCenterFromObject:(id)obj {
    if (!obj) return nil;
    if ([obj respondsToSelector:@selector(getService:)]) return obj;

    id center =
        [self wcpl_safeValueForObject:obj keyName:@"serviceCenter"] ?:
        [self wcpl_safeValueForObject:obj keyName:@"m_serviceCenter"] ?:
        [self wcpl_safeValueForObject:obj keyName:@"serviceCenterForApp"];
    if (center && [center respondsToSelector:@selector(getService:)]) {
        return center;
    }
    return nil;
}

- (id)wcpl_getServiceCenter {
    NSArray<NSString *> *centerSelectors = @[
        @"defaultCenter",
        @"defaultServiceCenter",
        @"sharedCenter",
        @"sharedInstance",
        @"sharedServiceCenter"
    ];

    id center = [self wcpl_trySingletonFromClass:objc_getClass("MMServiceCenter") selectors:centerSelectors];
    center = [self wcpl_serviceCenterFromObject:center];
    if (center) return center;

    center = [self wcpl_trySingletonFromClass:objc_getClass("ServiceCenter") selectors:centerSelectors];
    center = [self wcpl_serviceCenterFromObject:center];
    if (center) return center;

    NSArray<NSString *> *contextClassNames = @[
        @"MMContext",
        @"MMAppContext",
        @"MMCore",
        @"MMAppController",
        @"MicroMessengerAppDelegate"
    ];
    NSArray<NSString *> *contextSelectors = @[
        @"sharedInstance",
        @"sharedContext",
        @"defaultContext",
        @"currentContext",
        @"mainContext",
        @"defaultInstance"
    ];

    for (NSString *className in contextClassNames) {
        Class cls = objc_getClass([className UTF8String]);
        if (!cls) continue;
        id ctx = [self wcpl_trySingletonFromClass:cls selectors:contextSelectors];
        center = [self wcpl_serviceCenterFromObject:ctx];
        if (center) return center;
    }

    // 尝试从 UIApplication delegate 获取
    Class uiAppClass = objc_getClass("UIApplication");
    if (uiAppClass && [uiAppClass respondsToSelector:@selector(sharedApplication)]) {
        id application = [self wcpl_safeInvokeObjectSelector:@selector(sharedApplication) onObject:uiAppClass arguments:nil];
        if (application) {
            id delegate = [self wcpl_safeInvokeObjectSelector:@selector(delegate) onObject:application arguments:nil];
            center = [self wcpl_serviceCenterFromObject:delegate];
            if (center) return center;
        }
    }

    return nil;
}

- (id)wcpl_getService:(Class)serviceClass {
    if (!serviceClass) return nil;

    id serviceCenter = [self wcpl_getServiceCenter];
    if (serviceCenter && [serviceCenter respondsToSelector:@selector(getService:)]) {
        return [serviceCenter getService:serviceClass];
    }

    NSArray<NSString *> *serviceSelectors = @[
        @"sharedInstance",
        @"sharedManager",
        @"defaultManager",
        @"defaultInstance",
        @"manager",
        @"service",
        @"getInstance"
    ];
    return [self wcpl_trySingletonFromClass:serviceClass selectors:serviceSelectors];
}

- (NSString *)wcpl_safeStringValueForObject:(id)obj selectorName:(NSString *)selectorName {
    @try {
        if (!obj || selectorName.length == 0) return nil;

        SEL selector = NSSelectorFromString(selectorName);
        id value = [self wcpl_safeInvokeObjectSelector:selector onObject:obj arguments:nil];
        return [value isKindOfClass:[NSString class]] ? (NSString *)value : nil;
    }
    @catch (__unused NSException *exception) {
        return nil;
    }
}

- (void)wcpl_safeSetObject:(id)obj selectorName:(NSString *)selectorName value:(id)value {
    @try {
        if (!obj || selectorName.length == 0) return;

        SEL selector = NSSelectorFromString(selectorName);
        NSArray<id> *arguments = value ? @[value] : @[[NSNull null]];
        [self wcpl_safeInvokeVoidSelector:selector onObject:obj arguments:arguments];
    }
    @catch (__unused NSException *exception) {
        return;
    }
}

- (id)wcpl_safeValueForObject:(id)obj keyName:(NSString *)keyName {
    @try {
        if (!obj || keyName.length == 0) return nil;
        return [obj valueForKey:keyName];
    }
    @catch (__unused NSException *exception) {
        return nil;
    }
}

- (NSString *)wcpl_safeStringValueForObject:(id)obj keyName:(NSString *)keyName {
    NSString *value = [self wcpl_safeStringValueForObject:obj selectorName:keyName];
    if (value.length > 0) return value;

    id rawValue = [self wcpl_safeValueForObject:obj keyName:keyName];
    return [rawValue isKindOfClass:[NSString class]] ? (NSString *)rawValue : nil;
}

- (NSData *)wcpl_safeDataValueForObject:(id)obj keyName:(NSString *)keyName {
    id rawValue = [self wcpl_safeValueForObject:obj keyName:keyName];
    return [rawValue isKindOfClass:[NSData class]] ? (NSData *)rawValue : nil;
}

- (id)wcpl_inputToolViewFromViewController:(BaseMsgContentViewController *)viewController {
    if (!viewController) return nil;

    id toolView = [self wcpl_safeInvokeObjectSelector:@selector(toolView) onObject:viewController arguments:nil];

    if (!toolView) {
        @try {
            toolView = [viewController valueForKey:@"m_inputToolView"];
        }
        @catch (__unused NSException *exception) {
        }
    }

    return toolView;
}

- (NSString *)wcpl_imagePathFromMessageWrap:(CMessageWrap *)msgWrap {
    if (!msgWrap) return nil;

    NSArray<NSString *> *keys = @[
        @"m_nsImgPath",
        @"m_nsImagePath",
        @"m_nsOriginalImgPath",
        @"m_nsLocalImgPath",
        @"m_nsImgLocalPath",
        @"m_nsLocalPath",
        @"m_nsThumbImgPath",
        @"m_nsHDImgPath",
        @"m_nsBigImagePath",
        @"imagePath",
        @"imgPath"
    ];

    for (NSString *key in keys) {
        NSString *value = [self wcpl_safeStringValueForObject:msgWrap keyName:key];
        if (value.length > 0) {
            WCPLLog(@"Found image path via key '%@': %@", key, value);
            return value;
        }
    }

    // 尝试通过 m_oImgInfo 获取路径
    @try {
        id imgInfo = [msgWrap valueForKey:@"m_oImgInfo"];
        if (imgInfo) {
            NSString *path = [self wcpl_safeStringValueForObject:imgInfo keyName:@"m_nsImagePath"];
            if (path.length > 0) {
                WCPLLog(@"Found image path via m_oImgInfo: %@", path);
                return path;
            }
        }
    } @catch (NSException *e) {
        WCPLLog(@"Exception accessing m_oImgInfo: %@", e);
    }

    WCPLLog(@"No image path found in msgWrap");
    return nil;
}

- (NSData *)wcpl_imageDataFromMessageWrap:(CMessageWrap *)msgWrap {
    if (!msgWrap) return nil;

    NSArray<NSString *> *keys = @[
        @"m_dtImg",
        @"m_dtImage",
        @"m_dtImageData",
        @"m_dtThumb",
        @"m_dtThumbnail",
        @"imageData",
        @"imgData"
    ];

    for (NSString *key in keys) {
        NSData *data = [self wcpl_safeDataValueForObject:msgWrap keyName:key];
        if (data.length > 0) {
            WCPLLog(@"Found image data via key '%@': %lu bytes", key, (unsigned long)data.length);
            return data;
        }
    }

    // 尝试通过 m_oImgInfo 获取数据
    @try {
        id imgInfo = [msgWrap valueForKey:@"m_oImgInfo"];
        if (imgInfo) {
            NSData *data = [self wcpl_safeDataValueForObject:imgInfo keyName:@"m_dtImageData"];
            if (data.length > 0) {
                WCPLLog(@"Found image data via m_oImgInfo: %lu bytes", (unsigned long)data.length);
                return data;
            }
        }
    } @catch (NSException *e) {
        WCPLLog(@"Exception accessing m_oImgInfo for data: %@", e);
    }

    WCPLLog(@"No image data found in msgWrap");
    return nil;
}

- (BOOL)wcpl_trySendImageWithTarget:(id)target
                               name:(NSString *)name
                              image:(UIImage *)image
                          imageData:(NSData *)imageData
                          imagePath:(NSString *)imagePath
                             toUser:(NSString *)toUser
                            execLog:(NSMutableString *)execLog {
    if (!target) return NO;

    NSDictionary<NSString *, NSArray<NSString *> *> *groups = WCPLImageSendSelectorGroups();
    NSString *targetName = name ?: @"target";

    if (image && [self wcpl_tryInvokeSelectorNames:groups[@"image"]
                                          onObject:target
                                         arguments:@[image]
                                           execLog:execLog
                                              name:targetName]) {
        return YES;
    }

    if (imageData.length > 0 &&
        [self wcpl_tryInvokeSelectorNames:groups[@"data"]
                                 onObject:target
                                arguments:@[imageData]
                                  execLog:execLog
                                     name:targetName]) {
        return YES;
    }

    if (imagePath.length > 0 &&
        [self wcpl_tryInvokeSelectorNames:groups[@"path"]
                                 onObject:target
                                arguments:@[imagePath]
                                  execLog:execLog
                                     name:targetName]) {
        return YES;
    }

    if (toUser.length == 0) return NO;

    if (image && [self wcpl_tryInvokeSelectorNames:groups[@"imageToUser"]
                                          onObject:target
                                         arguments:@[image, toUser]
                                           execLog:execLog
                                              name:targetName]) {
        return YES;
    }

    if (imageData.length > 0 &&
        [self wcpl_tryInvokeSelectorNames:groups[@"dataToUser"]
                                 onObject:target
                                arguments:@[imageData, toUser]
                                  execLog:execLog
                                     name:targetName]) {
        return YES;
    }

    if (imagePath.length > 0 &&
        [self wcpl_tryInvokeSelectorNames:groups[@"pathToUser"]
                                 onObject:target
                                arguments:@[imagePath, toUser]
                                  execLog:execLog
                                     name:targetName]) {
        return YES;
    }

    if (!image && imageData.length == 0) return NO;

    NSData *payload = imageData;
    if (!payload && image) {
        payload = UIImageJPEGRepresentation(image, 0.8);
    }

    NSArray<id> *args = @[
        image ?: (id)[NSNull null],
        payload ?: (id)[NSNull null],
        [NSNull null]
    ];

    if ([self wcpl_tryInvokeSelectorNames:groups[@"imageDataInfo"]
                                  onObject:target
                                 arguments:args
                                   execLog:execLog
                                      name:targetName]) {
        return YES;
    }

    return NO;
}

- (NSString *)wcpl_getSelfUserName {
    @try {
        id contactMgr = [self wcpl_getService:objc_getClass("CContactMgr")];
        if (!contactMgr) return nil;

        CContact *selfContact = [self wcpl_safeInvokeObjectSelector:@selector(getSelfContact) onObject:contactMgr arguments:nil];
        NSString *selfUserName = [selfContact isKindOfClass:objc_getClass("CContact")] ? selfContact.m_nsUsrName : nil;
        return selfUserName.length > 0 ? selfUserName : nil;
    }
    @catch (__unused NSException *exception) {
        return nil;
    }
}

- (NSString *)wcpl_fixEmoticonXMLFromTo:(NSString *)xml fromUser:(NSString *)fromUser toUser:(NSString *)toUser {
    @try {
        if (xml.length == 0 || fromUser.length == 0 || toUser.length == 0) return xml;

        NSString *result = xml;

        // fromusername
        NSRegularExpression *fromRegex =
            [NSRegularExpression regularExpressionWithPattern:@"fromusername\\s*=\\s*(['\\\"])(.*?)\\1"
                                                      options:NSRegularExpressionCaseInsensitive
                                                        error:nil];
        if (fromRegex) {
            result = [fromRegex stringByReplacingMatchesInString:result
                                                         options:0
                                                           range:NSMakeRange(0, result.length)
                                                    withTemplate:[NSString stringWithFormat:@"fromusername=\"%@\"", fromUser]];
        }

        // tousername
        NSRegularExpression *toRegex =
            [NSRegularExpression regularExpressionWithPattern:@"tousername\\s*=\\s*(['\\\"])(.*?)\\1"
                                                      options:NSRegularExpressionCaseInsensitive
                                                        error:nil];
        if (toRegex) {
            result = [toRegex stringByReplacingMatchesInString:result
                                                       options:0
                                                         range:NSMakeRange(0, result.length)
                                                  withTemplate:[NSString stringWithFormat:@"tousername=\"%@\"", toUser]];
        }

        return result;
    }
    @catch (__unused NSException *exception) {
        return xml;
    }
}

#pragma mark - Public Methods

- (void)addRepeatButtonToCellView:(CommonMessageCellView *)cellView {
    if (!cellView) return;

    NSNumber *isUpdating = objc_getAssociatedObject(cellView, &kWCPLRepeatButtonUpdatingKey);
    if (isUpdating.boolValue) {
        WCPLLog(@"复读按钮跳过: 正在更新中 cell=%@", NSStringFromClass([cellView class]));
        return;
    }

    objc_setAssociatedObject(cellView, &kWCPLRepeatButtonUpdatingKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    @try {
        if (![WCPLConfigCenter shared].repeatButton.messageReplyEnable) return;

        UITableViewCell *cell = [self wcpl_tableViewCellForView:cellView];
        if (!cell || !cell.contentView) return;

        id viewModel = [self wcpl_safeInvokeObjectSelector:@selector(viewModel) onObject:cellView arguments:nil];
        CMessageWrap *msgWrap = [self wcpl_safeInvokeObjectSelector:@selector(messageWrap) onObject:viewModel arguments:nil];
        if (!msgWrap) {
            WCPLLog(@"复读按钮跳过: msgWrap=nil，保留现有按钮 cell=%@", NSStringFromClass([cellView class]));
            return;
        }

        NSString *messageKey = [self wcpl_messageKeyForMsgWrap:msgWrap];
        NSString *oldKey = objc_getAssociatedObject(cellView, @selector(wcpl_messageKeyForMsgWrap:));
        BOOL isSameMessage = (messageKey.length > 0 && [oldKey isEqualToString:messageKey]);

        // 仅在“消息已切换”时清理旧按钮，避免同一个 cell 叠加多个残留按钮
        if (oldKey.length > 0 && messageKey.length > 0 && ![oldKey isEqualToString:messageKey]) {
            WCPLLog(@"复读按钮消息切换: cell=%@ oldKey=%@ newKey=%@",
                    NSStringFromClass([cellView class]),
                    oldKey,
                    messageKey);
            [self removeRepeatButtonFromCellView:cellView];
            isSameMessage = NO;
        }

        BOOL canRepeat = [self canRepeatMessage:msgWrap];
        if (!canRepeat) {
            WCPLLog(@"复读按钮跳过: 不支持复读 msgType=%u cell=%@", msgWrap.m_uiMessageType, NSStringFromClass([cellView class]));
            [self removeRepeatButtonFromCellView:cellView];
            return;
        }

        unsigned int msgType = msgWrap.m_uiMessageType;
        BOOL isEmoticonMessage = (msgType == 47);
        BOOL isImageMessage = (msgType == 3);
        BOOL isVoiceMessage = [self wcpl_isVoiceMessage:msgWrap];
        WCPLLog(@"复读按钮检查: cell=%@ msgType=%u emoticon=%d image=%d voice=%d",
                NSStringFromClass([cellView class]),
                msgType,
                isEmoticonMessage,
                isImageMessage,
                isVoiceMessage);
        if (!isEmoticonMessage && !isImageMessage && !isVoiceMessage) {
            NSString *content = nil;
            id contentText = [self wcpl_safeInvokeObjectSelector:@selector(contentText) onObject:viewModel arguments:nil];
            if ([contentText isKindOfClass:[NSString class]]) {
                content = (NSString *)contentText;
            }
            if (!content || content.length == 0) {
                content = [self getMessageContent:msgWrap];
            }
            if (!content || content.length == 0) {
                WCPLLog(@"复读按钮跳过: 文本内容为空 msgType=%u cell=%@", msgType, NSStringFromClass([cellView class]));
                [self removeRepeatButtonFromCellView:cellView];
                return;
            }
        }

        UIView *bubbleView = [self findBubbleViewInCellView:cellView];
        if (!bubbleView || bubbleView.frame.size.width < 1.0 || bubbleView.frame.size.height < 1.0) {
            WCPLLog(@"复读按钮跳过: 气泡未就绪，保留现有按钮 cell=%@", NSStringFromClass([cellView class]));
            return;
        }

        UIView *containerView = [self wcpl_repeatButtonHostViewForCellView:cellView bubbleView:bubbleView];
        if (!containerView) {
            WCPLLog(@"复读按钮跳过: 挂载容器无效 cell=%@ bubble=%@",
                    NSStringFromClass([cellView class]),
                    NSStringFromClass([bubbleView class]));
            return;
        }
        WCPLLog(@"复读按钮挂载: cell=%@ bubble=%@ host=%@",
                NSStringFromClass([cellView class]),
                NSStringFromClass([bubbleView class]),
                NSStringFromClass([containerView class]));

        UIButton *boundButton = objc_getAssociatedObject(cellView, &kWCPLRepeatButtonBoundButtonKey);
        if (boundButton && ![boundButton isKindOfClass:[UIButton class]]) {
            boundButton = nil;
            objc_setAssociatedObject(cellView, &kWCPLRepeatButtonBoundButtonKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        if (boundButton && !boundButton.superview) {
            boundButton = nil;
            objc_setAssociatedObject(cellView, &kWCPLRepeatButtonBoundButtonKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }

        UIButton *repeatButton = [self wcpl_findOrFixRepeatButtonInContainer:containerView
                                                                    cellView:cellView
                                                                  messageKey:messageKey];
        if (!repeatButton && boundButton) {
            repeatButton = boundButton;
            if (containerView && repeatButton.superview != containerView) {
                [repeatButton removeFromSuperview];
                [containerView addSubview:repeatButton];
            }
            if (messageKey.length > 0) {
                objc_setAssociatedObject(repeatButton, &kWCPLRepeatButtonMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
            }
        }
        if (isSameMessage && repeatButton) {
            if (messageKey.length > 0) {
                objc_setAssociatedObject(repeatButton, &kWCPLRepeatButtonMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
            }
            WCPLLog(@"复读按钮复用: cell=%@ key=%@",
                    NSStringFromClass([cellView class]),
                    messageKey ?: @"");
            [self configureButtonContent:repeatButton];
            [self layoutRepeatButtonInContainer:repeatButton
                                       cellView:cellView
                                 containerView:containerView
                                       msgWrap:msgWrap];
            [self applyRepeatButtonAppearance:repeatButton msgWrap:msgWrap];
            repeatButton.hidden = NO;
            repeatButton.alpha = 1.0;
            objc_setAssociatedObject(cellView, &kWCPLRepeatButtonBoundButtonKey, repeatButton, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            [self wcpl_pruneDuplicateButtonsKeeping:repeatButton cellView:cellView];
            [containerView bringSubviewToFront:repeatButton];
            return;
        }

        // 清理历史容器中的残留按钮（旧实现把按钮挂在 cell.contentView）
        if (cell && cell.contentView && cell.contentView != cellView) {
            NSMutableArray<UIView *> *legacyButtons = [NSMutableArray array];
            [self wcpl_collectViewsWithTag:kWCPLRepeatButtonTag inView:cell.contentView results:legacyButtons];
            NSInteger cleanedCount = 0;
            for (UIView *legacyView in legacyButtons) {
                if ([legacyView isDescendantOfView:containerView]) {
                    continue;
                }
                [legacyView removeFromSuperview];
                cleanedCount++;
            }
            if (cleanedCount > 0) {
                WCPLLog(@"复读按钮迁移清理: cell=%@ 清理=%ld", NSStringFromClass([cellView class]), (long)cleanedCount);
            }
        }

        if (!repeatButton) {
            repeatButton = [self createRepeatButton];
            [containerView addSubview:repeatButton];
            WCPLLog(@"复读按钮创建: cell=%@ frame=%@", NSStringFromClass([cellView class]), NSStringFromCGRect(repeatButton.frame));
        }

        if (messageKey.length > 0) {
            objc_setAssociatedObject(cellView, @selector(wcpl_messageKeyForMsgWrap:), messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
            objc_setAssociatedObject(repeatButton, &kWCPLRepeatButtonMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
        }

        [self configureButtonContent:repeatButton];
        [self layoutRepeatButtonInContainer:repeatButton
                                   cellView:cellView
                             containerView:containerView
                                   msgWrap:msgWrap];
        [self applyRepeatButtonAppearance:repeatButton msgWrap:msgWrap];

        repeatButton.hidden = NO;
        repeatButton.alpha = 1.0;
        objc_setAssociatedObject(cellView, &kWCPLRepeatButtonBoundButtonKey, repeatButton, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [self wcpl_pruneDuplicateButtonsKeeping:repeatButton cellView:cellView];
        [containerView bringSubviewToFront:repeatButton];
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in addRepeatButtonToCellView: %@", exception);
    }
    @finally {
        objc_setAssociatedObject(cellView, &kWCPLRepeatButtonUpdatingKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
}

- (void)removeRepeatButtonFromCellView:(CommonMessageCellView *)cellView {
    if (!cellView) return;

    NSMutableArray<UIView *> *taggedViews = [NSMutableArray array];
    [self wcpl_collectViewsWithTag:kWCPLRepeatButtonTag inView:cellView results:taggedViews];

    // 同时清理可能存在于 cell.contentView 中的残留按钮
    UITableViewCell *cell = [self wcpl_tableViewCellForView:cellView];
    if (cell && cell.contentView && cell.contentView != cellView) {
        [self wcpl_collectViewsWithTag:kWCPLRepeatButtonTag inView:cell.contentView results:taggedViews];
    }

    NSInteger removedCount = 0;
    for (UIView *view in taggedViews) {
        [view removeFromSuperview];
        removedCount++;
    }

    if (removedCount > 0) {
        WCPLLog(@"复读按钮移除: 清理残留 cell=%@ count=%ld",
                NSStringFromClass([cellView class]),
                (long)removedCount);
    }

    objc_setAssociatedObject(cellView, @selector(wcpl_messageKeyForMsgWrap:), nil, OBJC_ASSOCIATION_COPY_NONATOMIC);
    objc_setAssociatedObject(cellView, &kWCPLRepeatButtonBoundButtonKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (void)handleRepeatButtonTapWithContent:(NSString *)content
                          viewController:(BaseMsgContentViewController *)viewController
                                 msgWrap:(CMessageWrap *)msgWrap {
    @try {
        if (!content || content.length == 0) {
            NSLog(@"[WCPL] No content to repeat");
            return;
        }

        if (!viewController) {
            NSLog(@"[WCPL] No view controller to send message");
            return;
        }

        NSLog(@"[WCPL] Repeating message: %@", content);

        // 发送消息
        WCPLRepeatSendContext *context = [WCPLRepeatSendContext new];
        context.kind = WCPLRepeatMessageKindText;
        context.viewController = viewController;
        context.msgWrap = msgWrap;
        context.content = content;
        [self wcpl_sendRepeatMessageWithContext:context execLog:nil];
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in handleRepeatButtonTapWithContent: %@", exception);
    }
}

- (BOOL)canRepeatMessage:(CMessageWrap *)msgWrap {
    @try {
        if (!msgWrap) return NO;

        // 获取消息类型
        // 1 = 文本消息
        // 47 = 表情包消息
        // 49 = 应用消息（包括引用回复）
        unsigned int msgType = msgWrap.m_uiMessageType;

        // 支持文本消息、表情包消息、语音消息和引用回复消息
        if (msgType != 1 && msgType != 47 && msgType != 49 && msgType != 34) {
            return NO;
        }

        // 如果是应用消息(49)，检查是否是引用回复
        if (msgType == 49) {
            if (![self isQuoteReplyMessage:msgWrap]) {
                return NO;
            }
        }

        // 表情包消息不检查文本内容，直接允许复读
        if (msgType == 47) {
            return YES;
        }

        // 语音消息不检查文本内容，直接允许复读
        if ([self wcpl_isVoiceMessage:msgWrap]) {
            return YES;
        }

        // 检查消息内容是否为空
        NSString *content = [self getMessageContent:msgWrap];
        if (!content || content.length == 0) {
            return NO;
        }

        return YES;
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in canRepeatMessage: %@", exception);
        return NO;
    }
}

// 判断是否是引用回复消息
- (BOOL)isQuoteReplyMessage:(CMessageWrap *)msgWrap {
    @try {
        if (!msgWrap) return NO;

        NSString *content = msgWrap.m_nsContent;
        if (!content || content.length == 0) return NO;

        // 引用回复消息的 XML 包含 <refermsg> 标签
        // 或者 type=57 表示引用回复
        if ([content containsString:@"<refermsg>"] ||
            [content containsString:@"<type>57</type>"]) {
            return YES;
        }

        return NO;
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in isQuoteReplyMessage: %@", exception);
        return NO;
    }
}

// 判断消息是否是对方发送的（非自己发送）
- (BOOL)isMessageFromOther:(CMessageWrap *)msgWrap {
    @try {
        if (!msgWrap) return NO;

        // 优先使用 CMessageWrap 判断是否为自己发送（更稳定，避免依赖 ServiceCenter）
        Class msgWrapClass = objc_getClass("CMessageWrap");
        if (msgWrapClass) {
            BOOL isSender = [self wcpl_safeInvokeBoolSelector:@selector(isSenderFromMsgWrap:)
                                                     onObject:msgWrapClass
                                                    arguments:@[msgWrap]
                                                 defaultValue:NO];
            return !isSender;
        }

        // 获取当前用户信息
        CContactMgr *contactMgr = [self wcpl_getService:objc_getClass("CContactMgr")];
        if (!contactMgr) return NO;

        CContact *selfContact = [contactMgr getSelfContact];
        if (!selfContact) return NO;

        NSString *selfUserName = wcpl_mrm_safeUserNameFromObject(selfContact);
        if (!selfUserName || selfUserName.length == 0) return NO;

        // 检查消息发送者
        NSString *fromUser = msgWrap.m_nsFromUsr;
        if (!fromUser || fromUser.length == 0) return NO;

        // 如果发送者是自己，返回 NO
        if ([fromUser isEqualToString:selfUserName]) {
            return NO;
        }

        // 群聊中，检查实际发送者
        if ([fromUser containsString:@"@chatroom"]) {
            // 群聊消息，检查 m_nsRealChatUsr
            NSString *realChatUser = msgWrap.m_nsRealChatUsr;
            if (realChatUser && [realChatUser isEqualToString:selfUserName]) {
                return NO;
            }
        }

        return YES;
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in isMessageFromOther: %@", exception);
        return NO;
    }
}

- (NSString *)getMessageContent:(CMessageWrap *)msgWrap {
    @try {
        if (!msgWrap) return nil;

        unsigned int msgType = msgWrap.m_uiMessageType;

        // 普通文本消息直接返回内容
        if (msgType == 1) {
            return msgWrap.m_nsContent;
        }

        // 引用回复消息需要从 XML 中提取 title
        if (msgType == 49) {
            return [self extractTitleFromQuoteReply:msgWrap.m_nsContent];
        }

        return msgWrap.m_nsContent;
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in getMessageContent: %@", exception);
        return nil;
    }
}

// 从引用回复消息的 XML 中提取 title（回复的文本内容）
- (NSString *)extractTitleFromQuoteReply:(NSString *)xmlContent {
    @try {
        if (!xmlContent || xmlContent.length == 0) return nil;

        // 使用正则表达式提取 <title> 标签内容
        // 引用回复的 XML 格式: <msg><appmsg><title>回复内容</title>...</appmsg></msg>
        NSRegularExpression *regex = [NSRegularExpression
            regularExpressionWithPattern:@"<title><!\\[CDATA\\[(.+?)\\]\\]></title>"
            options:NSRegularExpressionDotMatchesLineSeparators
            error:nil];

        NSTextCheckingResult *result = [regex firstMatchInString:xmlContent
                                                         options:0
                                                           range:NSMakeRange(0, xmlContent.length)];

        if (result && result.numberOfRanges >= 2) {
            NSString *title = [xmlContent substringWithRange:[result rangeAtIndex:1]];
            if (title && title.length > 0) {
                return title;
            }
        }

        // 尝试不带 CDATA 的格式
        regex = [NSRegularExpression
            regularExpressionWithPattern:@"<title>(.+?)</title>"
            options:NSRegularExpressionDotMatchesLineSeparators
            error:nil];

        result = [regex firstMatchInString:xmlContent
                                   options:0
                                     range:NSMakeRange(0, xmlContent.length)];

        if (result && result.numberOfRanges >= 2) {
            NSString *title = [xmlContent substringWithRange:[result rangeAtIndex:1]];
            if (title && title.length > 0) {
                return title;
            }
        }

        return nil;
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in extractTitleFromQuoteReply: %@", exception);
        return nil;
    }
}

#pragma mark - Private Methods

- (CGFloat)repeatButtonSize {
    CGFloat size = [WCPLConfigCenter shared].repeatButton.repeatButtonSize;
    if (size < 18.0) {
        size = 18.0;
    } else if (size > 36.0) {
        size = 36.0;
    }
    return size;
}

- (CGFloat)repeatButtonBackgroundAlpha {
    CGFloat alpha = [WCPLConfigCenter shared].repeatButton.repeatButtonBackgroundAlpha;
    if (alpha < 0.1) {
        alpha = 0.1;
    } else if (alpha > 1.0) {
        alpha = 1.0;
    }
    return alpha;
}

- (UIColor *)repeatButtonBackgroundColorNormal {
    return [UIColor colorWithWhite:1.0 alpha:[self repeatButtonBackgroundAlpha]];
}

- (UIColor *)repeatButtonBackgroundColorPressed {
    return [UIColor colorWithWhite:0.96 alpha:[self repeatButtonBackgroundAlpha]];
}

- (UIColor *)wcpl_colorFromHexString:(NSString *)hexString fallback:(UIColor *)fallback {
    if (![hexString isKindOfClass:[NSString class]]) {
        return fallback;
    }
    NSString *trimmed = [[hexString stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] uppercaseString];
    if (trimmed.length == 0) {
        return fallback;
    }
    if ([trimmed hasPrefix:@"#"]) {
        trimmed = [trimmed substringFromIndex:1];
    }
    if (trimmed.length != 6) {
        return fallback;
    }
    unsigned int rgbValue = 0;
    NSScanner *scanner = [NSScanner scannerWithString:trimmed];
    if (![scanner scanHexInt:&rgbValue]) {
        return fallback;
    }
    CGFloat red = ((rgbValue >> 16) & 0xFF) / 255.0;
    CGFloat green = ((rgbValue >> 8) & 0xFF) / 255.0;
    CGFloat blue = (rgbValue & 0xFF) / 255.0;
    return [UIColor colorWithRed:red green:green blue:blue alpha:1.0];
}

- (UIColor *)repeatButtonDefaultTextColor {
    UIColor *fallback = [UIColor colorWithRed:7.0/255.0 green:193.0/255.0 blue:96.0/255.0 alpha:1.0];
    NSString *hexString = [WCPLConfigCenter shared].repeatButton.repeatButtonTextColorDefault;
    return [self wcpl_colorFromHexString:hexString fallback:fallback];
}

- (UIColor *)repeatButtonTitleColorForMsgWrap:(CMessageWrap *)msgWrap {
    WCPLRepeatButtonConfig *config = [WCPLConfigCenter shared].repeatButton;
    UIColor *defaultColor = [self repeatButtonDefaultTextColor];
    if (config.repeatButtonTextColorMode != 1 || !msgWrap) {
        return defaultColor;
    }

    if (msgWrap.m_uiMessageType == 49) {
        return [self wcpl_colorFromHexString:config.repeatButtonTextColorQuote fallback:defaultColor];
    }
    if ([self wcpl_isVoiceMessage:msgWrap]) {
        return [self wcpl_colorFromHexString:config.repeatButtonTextColorVoice fallback:defaultColor];
    }
    if ([self wcpl_isEmoticonMessage:msgWrap]) {
        return [self wcpl_colorFromHexString:config.repeatButtonTextColorEmoticon fallback:defaultColor];
    }
    return [self wcpl_colorFromHexString:config.repeatButtonTextColorText fallback:defaultColor];
}

- (void)applyRepeatButtonAppearance:(UIButton *)button msgWrap:(CMessageWrap *)msgWrap {
    if (!button) return;

    CGFloat alpha = [self repeatButtonBackgroundAlpha];
    button.backgroundColor = [self repeatButtonBackgroundColorNormal];
    button.layer.borderColor = [UIColor colorWithWhite:0.0 alpha:(0.1 * alpha)].CGColor;
    button.layer.cornerRadius = CGRectGetWidth(button.bounds) * 0.5;

    if (button.currentTitle.length > 0) {
        UIColor *titleColor = [self repeatButtonTitleColorForMsgWrap:msgWrap];
        [button setTitleColor:titleColor forState:UIControlStateNormal];
    }
}

- (UIButton *)createRepeatButton {
    UIButton *button = [WCPLRepeatButton buttonWithType:UIButtonTypeCustom];
    button.tag = kWCPLRepeatButtonTag;

    // 基础布局 - 稍大的尺寸更易点击
    CGFloat buttonSize = [self repeatButtonSize];
    button.frame = CGRectMake(0, 0, buttonSize, buttonSize);

    // 确保按钮可交互
    button.userInteractionEnabled = YES;
    button.enabled = YES;

    // 现代扁平化背景 (Modern Flat Style)
    button.backgroundColor = [self repeatButtonBackgroundColorNormal];

    // 阴影与层次感 (Shadow & Depth) - 模仿 iOS 原生控件的悬浮感
    button.layer.shadowColor = [UIColor blackColor].CGColor;
    button.layer.shadowOffset = CGSizeMake(0, 1);  // 向下微小偏移
    button.layer.shadowOpacity = 0.12;             // 低透明度，保持干净
    button.layer.shadowRadius = 3.0;               // 柔和的扩散
    button.layer.masksToBounds = NO;               // 允许阴影显示在边界外

    // 边框与圆角 (Border & Corner)
    button.layer.cornerRadius = buttonSize * 0.5;  // 圆形 (对应按钮尺寸)
    // 极细的灰色描边，增强在白色背景上的可见度
    button.layer.borderWidth = 0.5;
    button.layer.borderColor = [UIColor colorWithWhite:0.0 alpha:(0.1 * [self repeatButtonBackgroundAlpha])].CGColor;

    // 根据配置设置按钮内容
    [self configureButtonContent:button];

    // 添加点击事件 - 使用 sharedManager 确保 target 不会被释放
    [button addTarget:[WCPLMessageReplyManager sharedManager]
               action:@selector(repeatButtonTapped:)
     forControlEvents:UIControlEventTouchUpInside];

    // 添加按压动画事件
    [button addTarget:[WCPLMessageReplyManager sharedManager] action:@selector(animateButtonTouchDown:) forControlEvents:UIControlEventTouchDown];
    [button addTarget:[WCPLMessageReplyManager sharedManager] action:@selector(animateButtonTouchUp:) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];

    WCPLLog(@"复读按钮创建完成: target=%@", [WCPLMessageReplyManager sharedManager]);

    return button;
}

// 根据配置设置按钮内容（文字/图标/自定义图片）
- (void)configureButtonContent:(UIButton *)button {
    WCPLRepeatButtonConfig *config = [WCPLConfigCenter shared].repeatButton;
    NSInteger style = config.repeatButtonStyle;
    CGFloat buttonSize = [self repeatButtonSize];
    CGFloat textFontSize = MAX(10.0, buttonSize * 0.45);
    CGFloat emojiFontSize = MAX(12.0, buttonSize * 0.58);
    CGFloat imageSize = MAX(12.0, buttonSize * 0.75);
    UIColor *defaultTextColor = [self repeatButtonDefaultTextColor];

    // 清除之前的内容
    [button setTitle:nil forState:UIControlStateNormal];
    [button setImage:nil forState:UIControlStateNormal];

    // 内置图标列表
    NSArray *builtInIcons = @[@"+1", @"👍", @"❤️", @"😂", @"🔥", @"👏", @"🎉"];

    if (style == 0) {
        // 文字模式 - 使用微信绿色 +1
        [button setTitle:@"+1" forState:UIControlStateNormal];
        [button setTitleColor:defaultTextColor forState:UIControlStateNormal];
        button.titleLabel.font = [UIFont systemFontOfSize:textFontSize weight:UIFontWeightMedium];
    } else if (style == 1) {
        // 内置图标模式 - 使用 emoji
        NSInteger iconIndex = config.repeatButtonIconIndex;
        if (iconIndex < 0 || iconIndex >= builtInIcons.count) {
            iconIndex = 0;
        }
        NSString *icon = builtInIcons[iconIndex];

        if ([icon isEqualToString:@"+1"]) {
            // +1 使用文字样式
            [button setTitle:icon forState:UIControlStateNormal];
            [button setTitleColor:defaultTextColor forState:UIControlStateNormal];
            button.titleLabel.font = [UIFont systemFontOfSize:textFontSize weight:UIFontWeightMedium];
        } else {
            // emoji 图标
            [button setTitle:icon forState:UIControlStateNormal];
            button.titleLabel.font = [UIFont systemFontOfSize:emojiFontSize];
        }
    } else if (style == 2) {
        // 自定义图片模式
        NSString *imagePath = config.repeatButtonCustomImagePath;
        UIImage *customImage = nil;

        if (imagePath && imagePath.length > 0) {
            // 从 Documents 目录加载图片
            NSString *documentsPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
            NSString *fullPath = [documentsPath stringByAppendingPathComponent:imagePath];
            customImage = [UIImage imageWithContentsOfFile:fullPath];
        }

        if (customImage) {
            // 缩放图片到合适大小
            CGSize targetSize = CGSizeMake(imageSize, imageSize);
            UIGraphicsBeginImageContextWithOptions(targetSize, NO, 0);
            [customImage drawInRect:CGRectMake(0, 0, targetSize.width, targetSize.height)];
            UIImage *scaledImage = UIGraphicsGetImageFromCurrentImageContext();
            UIGraphicsEndImageContext();

            [button setImage:scaledImage forState:UIControlStateNormal];
            button.imageView.contentMode = UIViewContentModeScaleAspectFit;
        } else {
            // 回退到默认 +1
            [button setTitle:@"+1" forState:UIControlStateNormal];
            [button setTitleColor:defaultTextColor forState:UIControlStateNormal];
            button.titleLabel.font = [UIFont systemFontOfSize:textFontSize weight:UIFontWeightMedium];
        }
    } else {
        // 默认 +1
        [button setTitle:@"+1" forState:UIControlStateNormal];
        [button setTitleColor:defaultTextColor forState:UIControlStateNormal];
        button.titleLabel.font = [UIFont systemFontOfSize:textFontSize weight:UIFontWeightMedium];
    }
}

#pragma mark - Animation Helpers

// 按下时的动画：缩小并变暗
- (void)animateButtonTouchDown:(UIButton *)sender {
    [UIView animateWithDuration:0.15
                          delay:0
                        options:UIViewAnimationOptionBeginFromCurrentState
                     animations:^{
        sender.transform = CGAffineTransformMakeScale(0.9, 0.9);
        sender.backgroundColor = [self repeatButtonBackgroundColorPressed];  // 稍微变灰
    } completion:nil];
}

// 松开时的动画：回弹
- (void)animateButtonTouchUp:(UIButton *)sender {
    [UIView animateWithDuration:0.25
                          delay:0
         usingSpringWithDamping:0.5    // 弹性效果
          initialSpringVelocity:10.0
                        options:UIViewAnimationOptionAllowUserInteraction
                     animations:^{
        sender.transform = CGAffineTransformIdentity;
        sender.backgroundColor = [self repeatButtonBackgroundColorNormal];
    } completion:nil];
}

- (void)layoutRepeatButtonInContainer:(UIButton *)button
                             cellView:(CommonMessageCellView *)cellView
                        containerView:(UIView *)containerView
                              msgWrap:(CMessageWrap *)msgWrap {
    @try {
        if (!button || !cellView || !containerView || !msgWrap) return;

        UIView *bubbleView = [self findBubbleViewInCellView:cellView];
        if (!bubbleView || bubbleView.frame.size.width < 1.0 || bubbleView.frame.size.height < 1.0) {
            WCPLLog(@"复读按钮隐藏: 气泡无效 cell=%@ bubble=%@ frame=%@",
                    NSStringFromClass([cellView class]),
                    bubbleView ? NSStringFromClass([bubbleView class]) : @"nil",
                    bubbleView ? NSStringFromCGRect(bubbleView.frame) : @"");
            button.hidden = YES;
            return;
        }

        CGRect bubbleFrame = CGRectZero;
        if (bubbleView.superview) {
            bubbleFrame = [bubbleView.superview convertRect:bubbleView.frame toView:containerView];
        } else {
            bubbleFrame = [bubbleView convertRect:bubbleView.bounds toView:containerView];
        }

        BOOL isFromSelf = [self isMessageFromSelf:msgWrap];
        CGFloat buttonSize = [self repeatButtonSize];
        CGFloat overlap = MIN(buttonSize * 0.42f, 12.0f);
        CGFloat buttonX = isFromSelf ? (CGRectGetMinX(bubbleFrame) - buttonSize + overlap)
                                     : (CGRectGetMaxX(bubbleFrame) - overlap);
        CGFloat buttonY = CGRectGetMidY(bubbleFrame) - buttonSize * 0.5f;
        CGFloat minY = CGRectGetMinY(bubbleFrame) - 2.0f;
        CGFloat maxY = CGRectGetMaxY(bubbleFrame) - buttonSize + 2.0f;
        if (buttonY < minY) {
            buttonY = minY;
        } else if (buttonY > maxY) {
            buttonY = maxY;
        }
        CGRect newFrame = CGRectMake(buttonX, buttonY, buttonSize, buttonSize);
        if (!CGRectEqualToRect(button.frame, newFrame)) {
            WCPLLog(@"复读按钮布局(一体化): cell=%@ bubble=%@ host=%@ bubbleFrame=%@ buttonFrame=%@ self=%d overlap=%.2f",
                    NSStringFromClass([cellView class]),
                    NSStringFromClass([bubbleView class]),
                    NSStringFromClass([containerView class]),
                    NSStringFromCGRect(bubbleFrame),
                    NSStringFromCGRect(newFrame),
                    isFromSelf,
                    overlap);
        }
        button.frame = newFrame;
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in layoutRepeatButtonInContainer: %@", exception);
        button.hidden = YES;
    }
}

- (UIView *)wcpl_repeatButtonHostViewForCellView:(CommonMessageCellView *)cellView
                                       bubbleView:(UIView *)bubbleView {
    if (!cellView || !bubbleView) {
        return nil;
    }

    UIView *hostView = bubbleView.superview;
    if (!hostView || ![hostView isDescendantOfView:cellView]) {
        hostView = cellView;
    }

    return hostView;
}

- (UIView *)findBubbleViewInCellView:(CommonMessageCellView *)cellView {
    @try {
        if (!cellView) return nil;

        UIView *bgImageView =
            [self wcpl_safeInvokeObjectSelector:@selector(getBgImageView) onObject:cellView arguments:nil];
        if (bgImageView && !bgImageView.hidden && bgImageView.frame.size.width > 20) {
            return bgImageView;
        }

        // 首先尝试通过 KVC 获取 m_bgImageView（气泡背景）
        @try {
            UIView *bgImageView = [cellView valueForKey:@"m_bgImageView"];
            if (bgImageView && !bgImageView.hidden && bgImageView.frame.size.width > 40) {
                return bgImageView;
            }
        }
        @catch (NSException *e) {
            // 忽略 KVC 异常
        }

        // 遍历子视图查找气泡
        UIView *bestView = nil;
        CGFloat maxArea = 0;

        for (UIView *subview in cellView.subviews) {
            if (subview.hidden) continue;
            if (subview.tag == kWCPLRepeatButtonTag) continue; // 跳过我们的按钮

            NSString *className = NSStringFromClass([subview class]);

            // 排除头像、标签、引用消息视图等
            if ([className containsString:@"HeadImage"] ||
                [className containsString:@"Avatar"] ||
                [className containsString:@"Label"] ||
                [className containsString:@"StateView"] ||
                [className containsString:@"MsgRefer"]) {
                continue;
            }

            CGRect frame = subview.frame;
            CGFloat area = frame.size.width * frame.size.height;

            // 气泡通常是较大的视图，宽度大于40，高度大于20
            if (frame.size.width > 40 && frame.size.height > 20 && area > maxArea) {
                maxArea = area;
                bestView = subview;
            }
        }

        return bestView;
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in findBubbleViewInCellView: %@", exception);
        return nil;
    }
}

- (void)sendMessageViaInputToolView:(NSString *)content
                     viewController:(BaseMsgContentViewController *)viewController
                            msgWrap:(CMessageWrap *)originalMsgWrap {
    @try {
        // 检查是否是引用回复消息（类型49）
        if (originalMsgWrap && originalMsgWrap.m_uiMessageType == 49) {
            // 尝试获取被引用的原始消息
            CMessageWrap *referredMsg = nil;
            @try {
                referredMsg = [originalMsgWrap valueForKey:@"referingMessageWrap"];
            }
            @catch (NSException *e) {
                NSLog(@"[WCPL] referingMessageWrap exception: %@", e.reason);
            }

            if (referredMsg) {
                NSLog(@"[WCPL] Found referred message, trying to send with quote");

                // 获取 inputToolView
                id toolView = [self wcpl_inputToolViewFromViewController:viewController];

                if (toolView) {
                    // 方法1：使用 setReplyingMessage: 设置引用，然后 sendMsgWithText: 发送
                    SEL setReplyingMsgSel = @selector(setReplyingMessage:);
                    SEL sendMsgSel = @selector(sendMsgWithText:);
                    SEL resetReplySel = @selector(resetReplyMessage);
                    SEL clearReferSel = @selector(onClearInputMsgRefer);

                    if ([toolView respondsToSelector:setReplyingMsgSel] &&
                        [toolView respondsToSelector:sendMsgSel]) {
                        NSLog(@"[WCPL] Using setReplyingMessage: + sendMsgWithText:");

                        // 设置引用消息
                        [self wcpl_safeInvokeVoidSelector:setReplyingMsgSel onObject:toolView arguments:@[referredMsg]];
                        // 发送文本
                        [self wcpl_safeInvokeVoidSelector:sendMsgSel onObject:toolView arguments:@[content]];

                        // 清除引用状态 - 尝试多种方法
                        // 方法1: 设置 nil
                        [self wcpl_safeInvokeVoidSelector:setReplyingMsgSel onObject:toolView arguments:@[[NSNull null]]];
                        // 方法2: resetReplyMessage
                        [self wcpl_safeInvokeVoidSelector:resetReplySel onObject:toolView arguments:@[]];
                        // 方法3: onClearInputMsgRefer
                        [self wcpl_safeInvokeVoidSelector:clearReferSel onObject:toolView arguments:@[]];
                        return;
                    }

                    // 方法2：使用 replyMessage:becomeFirstResponder:showDisplayName:
                    // 这个方法可能会显示引用UI，然后我们手动发送
                    SEL replyMsgSel = @selector(replyMessage:becomeFirstResponder:showDisplayName:);
                    if ([toolView respondsToSelector:replyMsgSel]) {
                        NSLog(@"[WCPL] Using replyMessage:becomeFirstResponder:showDisplayName:");

                        NSMethodSignature *sig = [toolView methodSignatureForSelector:replyMsgSel];
                        NSInvocation *inv = [NSInvocation invocationWithMethodSignature:sig];
                        [inv setTarget:toolView];
                        [inv setSelector:replyMsgSel];
                        [inv setArgument:&referredMsg atIndex:2];
                        BOOL becomeFirst = NO;
                        [inv setArgument:&becomeFirst atIndex:3];
                        BOOL showName = YES;
                        [inv setArgument:&showName atIndex:4];
                        [inv invoke];

                        // 然后发送文本
                        if ([self wcpl_safeInvokeVoidSelector:sendMsgSel onObject:toolView arguments:@[content]]) {
                            // 清除引用状态
                            [self wcpl_safeInvokeVoidSelector:setReplyingMsgSel onObject:toolView arguments:@[[NSNull null]]];
                            [self wcpl_safeInvokeVoidSelector:resetReplySel onObject:toolView arguments:@[]];
                            [self wcpl_safeInvokeVoidSelector:clearReferSel onObject:toolView arguments:@[]];
                            return;
                        }
                    }
                }
            }
        }

        // 普通文本消息或回退方案
        NSLog(@"[WCPL] Sending as plain text message");

        // 尝试 onSendTextMsg 方法
        if ([viewController respondsToSelector:@selector(onSendTextMsg:)]) {
            [viewController onSendTextMsg:content];
            return;
        }

        // 回退方案：通过输入框发送
        [self sendMessageViaInputFallback:content viewController:viewController];
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception: %@", exception);
        [self sendMessageViaInputFallback:content viewController:viewController];
    }
}

// 回退方案：通过输入框发送
- (void)sendMessageViaInputFallback:(NSString *)content
                     viewController:(BaseMsgContentViewController *)viewController {
    @try {
        // 获取输入框
        id toolView = [self wcpl_inputToolViewFromViewController:viewController];

        if (!toolView) {
            NSLog(@"[WCPL] Could not find input tool view");
            return;
        }

        // 查找文本输入框
        UITextView *textView = [self findTextViewInView:toolView];
        if (!textView) {
            NSLog(@"[WCPL] Could not find text view");
            return;
        }

        // 设置文本
        textView.text = content;

        // 通知文本变化
        [[NSNotificationCenter defaultCenter] postNotificationName:UITextViewTextDidChangeNotification
                                                            object:textView];

        // 触发发送
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            [self triggerSendInToolView:toolView];
            // 清空输入框
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                textView.text = @"";
            });
        });
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in sendMessageViaInputFallback: %@", exception);
    }
}

- (UITextView *)findTextViewInView:(UIView *)view {
    @try {
        for (UIView *subview in view.subviews) {
            if ([subview isKindOfClass:[UITextView class]]) {
                return (UITextView *)subview;
            }
            UITextView *found = [self findTextViewInView:subview];
            if (found) return found;
        }
        return nil;
    }
    @catch (NSException *exception) {
        return nil;
    }
}

- (void)triggerSendInToolView:(id)toolView {
    @try {
        // 查找并点击发送按钮
        UIButton *sendButton = [self findSendButtonInView:toolView];
        if (sendButton && sendButton.enabled) {
            [sendButton sendActionsForControlEvents:UIControlEventTouchUpInside];
        }
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in triggerSendInToolView: %@", exception);
    }
}

- (UIButton *)findSendButtonInView:(UIView *)view {
    @try {
        for (UIView *subview in view.subviews) {
            if ([subview isKindOfClass:[UIButton class]]) {
                UIButton *button = (UIButton *)subview;
                NSString *title = [button titleForState:UIControlStateNormal];
                if (title && ([title isEqualToString:@"发送"] ||
                    [title isEqualToString:@"Send"] ||
                    [title containsString:@"发送"])) {
                    return button;
                }
            }
            UIButton *found = [self findSendButtonInView:subview];
            if (found) return found;
        }
        return nil;
    }
    @catch (NSException *exception) {
        return nil;
    }
}

#pragma mark - Button Action

- (void)repeatButtonTapped:(UIButton *)sender {
    @try {
        WCPLLog(@"复读按钮点击: frame=%@ super=%@",
                NSStringFromCGRect(sender.frame),
                sender.superview ? NSStringFromClass([sender.superview class]) : @"nil");

        if ([WCPLConfigCenter shared].repeatButton.repeatButtonHapticEnable) {
            UIImpactFeedbackGenerator *generator = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
            [generator prepare];
            [generator impactOccurred];
        }

        UIView *containerView = sender.superview;
        CommonMessageCellView *cellView = [self wcpl_findCellViewFromContainer:containerView];
        if (!cellView) {
            WCPLLog(@"Repeat tapped but cannot find cellView");
            return;
        }

        id viewModel = [self wcpl_safeInvokeObjectSelector:@selector(viewModel) onObject:cellView arguments:nil];
        CMessageWrap *msgWrap = [self wcpl_safeInvokeObjectSelector:@selector(messageWrap) onObject:viewModel arguments:nil];
        if (!msgWrap) {
            WCPLLog(@"Repeat tapped but msgWrap is nil");
            WCPLCrashBreadcrumb(@"复读按钮点击: msgWrap=nil");
            return;
        }

        NSString *content = nil;
        unsigned int msgType = msgWrap.m_uiMessageType;
        BOOL isEmoticonMessage = (msgType == 47);
        BOOL isImageMessage = (msgType == 3);
        BOOL isVideoMessage = (msgType == 43 || msgType == 62);
        BOOL isVoiceMessage = [self wcpl_isVoiceMessage:msgWrap];
        WCPLLog(@"复读按钮点击: msgType=%u emoticon=%d image=%d video=%d voice=%d from=%@ to=%@",
                msgType,
                isEmoticonMessage,
                isImageMessage,
                isVideoMessage,
                isVoiceMessage,
                msgWrap.m_nsFromUsr ?: @"",
                msgWrap.m_nsToUsr ?: @"");
        WCPLCrashBreadcrumb(@"复读按钮点击: msgType=%u from=%@ to=%@", msgType, msgWrap.m_nsFromUsr ?: @"", msgWrap.m_nsToUsr ?: @"");
        if (!isEmoticonMessage && !isImageMessage && !isVoiceMessage) {
            id contentText = [self wcpl_safeInvokeObjectSelector:@selector(contentText) onObject:viewModel arguments:nil];
            if ([contentText isKindOfClass:[NSString class]]) {
                content = (NSString *)contentText;
            }
            if (!content || content.length == 0) {
                content = [self getMessageContent:msgWrap];
            }
        }

        // 关闭"调试信息弹窗"时，点击直接复读，仅保留日志输出（默认关闭弹窗）
        BOOL shouldShowDebugAlert = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLRepeatDebugAlertEnabledKey];
        if (!shouldShowDebugAlert) {
            BaseMsgContentViewController *viewController = [self findViewControllerFromView:sender];
            if (!viewController) {
                WCPLLog(@"Repeat tapped but cannot find viewController");
                return;
            }

            if (isImageMessage || isVideoMessage) {
                WCPLLog(@"Repeat not supported for image/video message");
                return;
            }

            if (isVoiceMessage) {
                NSString *execLog = [self handleRepeatVoiceMessage:msgWrap viewController:viewController];
                WCPLLog(@"Voice repeat executed:\n%@", execLog);
                return;
            }

            if (isEmoticonMessage) {
                NSString *execLog = [self handleRepeatEmoticonMessage:msgWrap viewController:viewController];
                WCPLLog(@"Emoticon repeat executed:\n%@", execLog);
                return;
            }

            if (!content || content.length == 0) {
                WCPLLog(@"Repeat tapped but content is empty");
                return;
            }

            WCPLLog(@"Repeating text message: %@", content);
            [self handleRepeatButtonTapWithContent:content viewController:viewController msgWrap:msgWrap];
            return;
        }

        NSMutableString *debugInfo = [NSMutableString stringWithString:@"=== 复读按钮调试信息 ===\n\n"];
        [debugInfo appendFormat:@"0. Build: %s %s\n\n", __DATE__, __TIME__];

        [debugInfo appendFormat:@"1. 消息对象: %@\n", msgWrap ? @"存在" : @"nil"];
        [debugInfo appendFormat:@"2. 消息类型: %u\n", msgWrap ? msgWrap.m_uiMessageType : 0];
        [debugInfo appendFormat:@"3. 文本内容: %@\n", content ? [content substringToIndex:MIN(50, content.length)] : @"nil"];

        [debugInfo appendFormat:@"4. 是否表情包: %@\n", isEmoticonMessage ? @"是" : @"否"];
        [debugInfo appendFormat:@"4.1 是否图片: %@\n", isImageMessage ? @"是" : @"否"];
        [debugInfo appendFormat:@"4.2 是否视频: %@\n", isVideoMessage ? @"是" : @"否"];
        [debugInfo appendFormat:@"4.3 是否语音: %@\n", isVoiceMessage ? @"是" : @"否"];

        if (isImageMessage || isVideoMessage) {
            [debugInfo appendString:@"\n❌ 图片/视频消息暂不支持复读"];
            [self showDebugAlert:debugInfo];
            return;
        }

        if (!isEmoticonMessage && !isVoiceMessage && (!content || content.length == 0)) {
            [debugInfo appendString:@"\n❌ 错误: 非表情包消息且无文本内容"];
            [self showDebugAlert:debugInfo];
            return;
        }

        // 检查表情包 MD5
        if (isEmoticonMessage) {
            NSString *emoticonMD5 = nil;
            emoticonMD5 = [self wcpl_safeStringValueForObject:msgWrap selectorName:@"m_nsEmoticonMD5"];
            [debugInfo appendFormat:@"5. 表情包MD5(属性): %@\n", emoticonMD5 ?: @"nil"];

            NSString *msgContent = msgWrap.m_nsContent;
            [debugInfo appendFormat:@"6. 消息Content长度: %lu\n", (unsigned long)(msgContent ? msgContent.length : 0)];

            // 尝试从 XML 解析 MD5
            NSString *parsedMD5 = [self parseEmoticonMD5FromContent:msgContent];
            [debugInfo appendFormat:@"6.1 解析的MD5: %@\n", parsedMD5 ?: @"nil"];

            NSString *msgSource = msgWrap.m_nsMsgSource;
            [debugInfo appendFormat:@"6.2 MsgSource长度: %lu\n", (unsigned long)(msgSource ? msgSource.length : 0)];
            NSString *parsedFromSource = [self parseEmoticonMD5FromContent:msgSource];
            [debugInfo appendFormat:@"6.3 MsgSource解析MD5: %@\n", parsedFromSource ?: @"nil"];

            NSString *appExtInfo = msgWrap.m_nsAppExtInfo;
            [debugInfo appendFormat:@"6.4 AppExtInfo长度: %lu\n", (unsigned long)(appExtInfo ? appExtInfo.length : 0)];
            NSString *parsedFromAppExtInfo = [self parseEmoticonMD5FromContent:appExtInfo];
            [debugInfo appendFormat:@"6.5 AppExtInfo解析MD5: %@\n", parsedFromAppExtInfo ?: @"nil"];
        }

        // 向上查找 ViewController
        BaseMsgContentViewController *viewController = [self findViewControllerFromView:sender];
        [debugInfo appendFormat:@"7. ViewController: %@\n", viewController ? NSStringFromClass([viewController class]) : @"nil"];

        if (!viewController) {
            [debugInfo appendString:@"\n❌ 错误: 找不到 ViewController"];
            [self showDebugAlert:debugInfo];
            return;
        }

        // 检查聊天对象
        NSString *toUserName = nil;
        CContact *contact = [self wcpl_safeInvokeObjectSelector:@selector(GetContact) onObject:viewController arguments:nil];
        if (contact) {
            toUserName = wcpl_mrm_safeUserNameFromObject(contact);
        }
        [debugInfo appendFormat:@"8. 聊天对象: %@\n", toUserName ?: @"nil"];

        // 检查 logicController
        id logicController = [self wcpl_safeInvokeObjectSelector:@selector(m_logicController) onObject:viewController arguments:nil];
        if (!logicController) {
            logicController = [self wcpl_safeInvokeObjectSelector:NSSelectorFromString(@"logicController")
                                                         onObject:viewController
                                                        arguments:nil];
        }
        [debugInfo appendFormat:@"9. LogicController: %@\n", logicController ? NSStringFromClass([logicController class]) : @"nil"];

        // 检查发送方法
        BOOL hasSendEmoticon = logicController && [logicController respondsToSelector:@selector(SendEmoticonMessage:)];
        [debugInfo appendFormat:@"10. 有SendEmoticonMessage方法: %@\n", hasSendEmoticon ? @"是" : @"否"];
        BOOL hasSendEmoticonToolView = [viewController respondsToSelector:@selector(SendEmoticonMesssageToolView:)];
        [debugInfo appendFormat:@"10.1 有SendEmoticonMesssageToolView方法: %@\n", hasSendEmoticonToolView ? @"是" : @"否"];

        // 检查 CEmoticonMgr
        id emoticonMgr = [self wcpl_getService:objc_getClass("CEmoticonMgr")];
        [debugInfo appendFormat:@"11. CEmoticonMgr: %@\n", emoticonMgr ? @"存在" : @"nil"];

        BOOL hasGetEmoticonWrap = emoticonMgr && [emoticonMgr respondsToSelector:@selector(getEmoticonWrapByMd5:)];
        [debugInfo appendFormat:@"12. 有getEmoticonWrapByMd5方法: %@\n", hasGetEmoticonWrap ? @"是" : @"否"];

        // 尝试获取 emoticonWrap
        if (isEmoticonMessage && hasGetEmoticonWrap) {
            NSString *bestMD5 =
                [self parseEmoticonMD5FromContent:msgWrap.m_nsContent] ?:
                [self parseEmoticonMD5FromContent:msgWrap.m_nsMsgSource] ?:
                [self parseEmoticonMD5FromContent:msgWrap.m_nsAppExtInfo];
            if (bestMD5) {
                CEmoticonWrap *emoticonWrap = [self wcpl_safeInvokeObjectSelector:@selector(getEmoticonWrapByMd5:)
                                                                           onObject:emoticonMgr
                                                                          arguments:@[bestMD5]];
                [debugInfo appendFormat:@"13. EmoticonWrap: %@\n", emoticonWrap ? @"获取成功" : @"nil"];
            }
        }

        // 检查 CMessageMgr
        id msgMgr = [self wcpl_getService:objc_getClass("CMessageMgr")];
        [debugInfo appendFormat:@"14. CMessageMgr: %@\n", msgMgr ? @"存在" : @"nil"];

        BOOL hasAddEmoticonMsg = msgMgr && [msgMgr respondsToSelector:@selector(AddEmoticonMsg:MsgWrap:)];
        [debugInfo appendFormat:@"15. 有AddEmoticonMsg方法: %@\n", hasAddEmoticonMsg ? @"是" : @"否"];

        BOOL hasAddLocalMsg = msgMgr && [msgMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:)];
        [debugInfo appendFormat:@"16. 有AddLocalMsg方法: %@\n", hasAddLocalMsg ? @"是" : @"否"];

        [debugInfo appendString:@"\n✅ 开始执行复读...\n"];

        // 执行复读并收集执行日志
        if (isEmoticonMessage) {
            NSString *execLog = [self handleRepeatEmoticonMessage:msgWrap viewController:viewController];
            [debugInfo appendString:@"\n=== 执行日志 ===\n"];
            [debugInfo appendString:execLog];
        } else if (isVoiceMessage) {
            NSString *execLog = [self handleRepeatVoiceMessage:msgWrap viewController:viewController];
            [debugInfo appendString:@"\n=== 执行日志 ===\n"];
            [debugInfo appendString:execLog];
        } else if (isImageMessage) {
            NSString *execLog = [self handleRepeatImageMessage:msgWrap viewController:viewController];
            [debugInfo appendString:@"\n=== 执行日志 ===\n"];
            [debugInfo appendString:execLog];
        } else {
            [self handleRepeatButtonTapWithContent:content viewController:viewController msgWrap:msgWrap];
        }

        // 显示完整调试信息
        [self showDebugAlert:debugInfo];
    }
    @catch (NSException *exception) {
        [self showDebugAlert:[NSString stringWithFormat:@"❌ 异常: %@", exception]];
    }
}

- (void)showDebugAlert:(NSString *)message {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"调试信息"
                                                                       message:message
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];

        // 获取当前显示的 ViewController (兼容 iOS 13+)
        UIWindow *keyWindow = nil;
        for (UIWindowScene *scene in [UIApplication sharedApplication].connectedScenes) {
            if (scene.activationState == UISceneActivationStateForegroundActive) {
                for (UIWindow *window in scene.windows) {
                    if (window.isKeyWindow) {
                        keyWindow = window;
                        break;
                    }
                }
            }
            if (keyWindow) break;
        }

        UIViewController *topVC = keyWindow.rootViewController;
        while (topVC.presentedViewController) {
            topVC = topVC.presentedViewController;
        }
        if (topVC) {
            [topVC presentViewController:alert animated:YES completion:nil];
        }
    });
}

- (BaseMsgContentViewController *)findViewControllerFromView:(UIView *)view {
    @try {
        UIResponder *responder = view;
        while (responder) {
            if ([responder isKindOfClass:[UIViewController class]]) {
                // 检查是否是 BaseMsgContentViewController 或其子类
                Class baseMsgContentVCClass = objc_getClass("BaseMsgContentViewController");
                if (baseMsgContentVCClass && [responder isKindOfClass:baseMsgContentVCClass]) {
                    return (BaseMsgContentViewController *)responder;
                }
                // 也检查 ChatRoomContentViewController 等子类
                Class chatRoomVCClass = objc_getClass("ChatRoomContentViewController");
                if (chatRoomVCClass && [responder isKindOfClass:chatRoomVCClass]) {
                    return (BaseMsgContentViewController *)responder;
                }
            }
            responder = [responder nextResponder];
        }
        return nil;
    }
    @catch (NSException *exception) {
        return nil;
    }
}

- (NSString *)wcpl_toUserNameFromViewController:(BaseMsgContentViewController *)viewController
                                        msgWrap:(CMessageWrap *)msgWrap
                                        execLog:(NSMutableString *)execLog {
    NSString *toUserName = nil;
    CContact *contact = [self wcpl_safeInvokeObjectSelector:@selector(GetContact)
                                                   onObject:viewController
                                                  arguments:nil];
    if (contact) {
        toUserName = wcpl_mrm_safeUserNameFromObject(contact);
    }

    if (toUserName.length == 0 && msgWrap) {
        BOOL isFromSelf = [self isMessageFromSelf:msgWrap];
        toUserName = isFromSelf ? msgWrap.m_nsToUsr : msgWrap.m_nsFromUsr;
        if (toUserName.length > 0 && execLog) {
            [execLog appendFormat:@"✓ 从消息推导聊天对象: %@\n", toUserName];
        }
    }

    return toUserName;
}

// 判断消息是否为自己发送的
- (BOOL)isMessageFromSelf:(CMessageWrap *)msgWrap {
    @try {
        if (!msgWrap) return NO;

        // 优先使用 CMessageWrap 判断是否为自己发送（更稳定，避免依赖 ServiceCenter）
        Class msgWrapClass = objc_getClass("CMessageWrap");
        if (msgWrapClass) {
            return [self wcpl_safeInvokeBoolSelector:@selector(isSenderFromMsgWrap:)
                                            onObject:msgWrapClass
                                           arguments:@[msgWrap]
                                        defaultValue:NO];
        }

        // 获取联系人管理器
        id contactManager = [self wcpl_getService:objc_getClass("CContactMgr")];
        if (!contactManager) return NO;

        // 获取自己的联系人信息
        id selfContact = [contactManager getSelfContact];
        NSString *selfUserName = wcpl_mrm_safeUserNameFromObject(selfContact);
        if (selfUserName.length == 0) return NO;

        // 比较消息发送者和自己的用户名
        return [msgWrap.m_nsFromUsr isEqualToString:selfUserName];
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in isMessageFromSelf: %@", exception);
        return NO;
    }
}

// 处理表情包消息复读
- (NSString *)handleRepeatEmoticonMessage:(CMessageWrap *)msgWrap viewController:(BaseMsgContentViewController *)viewController {
    NSMutableString *execLog = [NSMutableString string];

    @try {
        if (!msgWrap || !viewController) {
            [execLog appendString:@"❌ 参数无效\n"];
            return execLog;
        }

        // 获取聊天对象用户名
        NSString *toUserName = [self wcpl_toUserNameFromViewController:viewController
                                                               msgWrap:msgWrap
                                                               execLog:execLog];

        if (!toUserName || toUserName.length == 0) {
            [execLog appendString:@"❌ 无法获取聊天对象\n"];
            return execLog;
        }
        [execLog appendFormat:@"✓ 聊天对象: %@\n", toUserName];

        // 获取表情包 MD5
        NSString *emoticonMD5 =
            [self wcpl_safeStringValueForObject:msgWrap selectorName:@"m_nsEmoticonMD5"] ?:
            [self wcpl_safeStringValueForObject:msgWrap selectorName:@"m_nsEmoticonMd5"] ?:
            [self wcpl_safeStringValueForObject:msgWrap selectorName:@"emoticonMD5"] ?:
            [self wcpl_safeStringValueForObject:msgWrap selectorName:@"emoticonMd5"];

        NSString *content = msgWrap.m_nsContent;
        NSString *contentSource = @"m_nsContent";

        // 兼容：部分版本表情包 XML 不在 m_nsContent
        NSArray<NSDictionary *> *payloadCandidates = @[
            @{@"name": @"m_nsContent", @"value": msgWrap.m_nsContent ?: @""},
            @{@"name": @"m_nsMsgSource", @"value": msgWrap.m_nsMsgSource ?: @""},
            @{@"name": @"m_nsAppExtInfo", @"value": msgWrap.m_nsAppExtInfo ?: @""},
        ];

        NSString *parsedMD5 = nil;
        NSString *parsedFrom = nil;
        for (NSDictionary *item in payloadCandidates) {
            NSString *value = item[@"value"];
            if (!value || value.length == 0) continue;

            NSString *md5 = [self parseEmoticonMD5FromContent:value];
            if (md5 && md5.length > 0) {
                parsedMD5 = md5;
                parsedFrom = item[@"name"];
                // 优先使用能解析出 MD5 的内容作为发送 payload
                content = value;
                contentSource = item[@"name"];
                break;
            }
        }

        if ((!emoticonMD5 || emoticonMD5.length == 0) && parsedMD5 && parsedMD5.length > 0) {
            emoticonMD5 = parsedMD5;
            [execLog appendFormat:@"✓ 从%@解析MD5: %@\n", parsedFrom ?: @"XML", emoticonMD5];
        } else if (emoticonMD5 && emoticonMD5.length > 0) {
            [execLog appendFormat:@"✓ 消息自带MD5: %@\n", emoticonMD5];
        }

        if (!content || content.length == 0) {
            // 兜底：找一个非空的 payload 作为内容（可能仅用于某些发送 API）
            for (NSDictionary *item in payloadCandidates) {
                NSString *value = item[@"value"];
                if (value && value.length > 0) {
                    content = value;
                    contentSource = item[@"name"];
                    break;
                }
            }
        }

        if (content && content.length > 0) {
            [execLog appendFormat:@"✓ 表情包内容来源: %@ (len=%lu)\n", contentSource ?: @"unknown", (unsigned long)content.length];
        }

        // 某些版本发送接口会直接使用 XML 字段（收到的内容包含对方/自己反向信息），这里尽量修正
        NSString *selfUserName = [self wcpl_getSelfUserName];
        if (selfUserName.length > 0) {
            NSString *fixedContent = [self wcpl_fixEmoticonXMLFromTo:content fromUser:selfUserName toUser:toUserName];
            if (fixedContent.length > 0 && ![fixedContent isEqualToString:content]) {
                content = fixedContent;
                [execLog appendString:@"✓ 已修正XML中的from/tousername\n"];
            }
        }

        WCPLRepeatSendContext *context = [WCPLRepeatSendContext new];
        context.kind = WCPLRepeatMessageKindEmoticon;
        context.viewController = viewController;
        context.msgWrap = msgWrap;
        context.toUserName = toUserName;
        context.emoticonMD5 = emoticonMD5;
        context.emoticonContent = content;
        context.content = content;

        if ([self wcpl_sendRepeatMessageWithContext:context execLog:execLog]) {
            return execLog;
        }

        [execLog appendString:@"\n❌ 方法1/1.5/2均失败，表情包复读不可用\n"];
        [execLog appendString:@"提示: 该表情包可能未下载或已过期\n"];

        return execLog;
    }
    @catch (NSException *exception) {
        [execLog appendFormat:@"❌ 异常: %@\n", exception];
        return execLog;
    }
}

- (BOOL)wcpl_sendEmoticonWithContext:(WCPLRepeatSendContext *)context
                             execLog:(NSMutableString *)execLog {
    if (!context || !context.viewController || !context.msgWrap) return NO;

    NSString *toUserName = context.toUserName;
    NSString *content = context.emoticonContent ?: context.content;
    NSString *emoticonMD5 = context.emoticonMD5;

    if (toUserName.length == 0) {
        [execLog appendString:@"❌ 无法获取聊天对象\n"];
        return NO;
    }

    __block BOOL shouldTryManualWrap = NO;

    NSArray<WCPLSendStrategyBlock> *strategies = @[
        WCPLSendStrategy(^BOOL{
            if (emoticonMD5.length == 0) return NO;
            [execLog appendString:@"\n尝试方法1: EmoticonWrap\n"];

            id emoticonMgr = [self wcpl_getService:objc_getClass("CEmoticonMgr")];
            if (!emoticonMgr || ![emoticonMgr respondsToSelector:@selector(getEmoticonWrapByMd5:)]) {
                [execLog appendString:@"✗ CEmoticonMgr不可用或不支持getEmoticonWrapByMd5\n"];
                return NO;
            }

            CEmoticonWrap *emoticonWrap = [self wcpl_safeInvokeObjectSelector:@selector(getEmoticonWrapByMd5:)
                                                                       onObject:emoticonMgr
                                                                      arguments:@[emoticonMD5]];

            if (!emoticonWrap) {
                SEL byMsgWrapSel = NSSelectorFromString(@"getEmoticonWrapByMessageWrap:");
                if ([emoticonMgr respondsToSelector:byMsgWrapSel]) {
                    [execLog appendString:@"- 通过getEmoticonWrapByMessageWrap尝试\n"];
                    emoticonWrap = [self wcpl_safeInvokeObjectSelector:byMsgWrapSel
                                                               onObject:emoticonMgr
                                                              arguments:@[context.msgWrap]];
                }
            }

            if (!emoticonWrap) {
                SEL byContentSel = NSSelectorFromString(@"getEmoticonWrapByContent:");
                if (content.length > 0 && [emoticonMgr respondsToSelector:byContentSel]) {
                    [execLog appendString:@"- 通过getEmoticonWrapByContent尝试\n"];
                    emoticonWrap = [self wcpl_safeInvokeObjectSelector:byContentSel
                                                               onObject:emoticonMgr
                                                              arguments:@[content]];
                }
            }

            if (!emoticonWrap) {
                [execLog appendString:@"✗ EmoticonWrap为nil\n"];
                shouldTryManualWrap = YES;
                return NO;
            }

            [execLog appendString:@"✓ 获取到EmoticonWrap\n"];

            id logicController = [self wcpl_safeInvokeObjectSelector:@selector(m_logicController)
                                                             onObject:context.viewController
                                                            arguments:nil];
            if (logicController &&
                [self wcpl_safeInvokeVoidSelector:@selector(SendEmoticonMessage:)
                                         onObject:logicController
                                        arguments:@[emoticonWrap]]) {
                [execLog appendString:@"✅ 通过logicController发送成功\n"];
                return YES;
            }

            if ([self wcpl_safeInvokeVoidSelector:@selector(SendEmoticonMesssageToolView:)
                                         onObject:context.viewController
                                        arguments:@[emoticonWrap]]) {
                [execLog appendString:@"✅ 通过ViewController发送成功\n"];
                return YES;
            }

            return NO;
        }),
        WCPLSendStrategy(^BOOL{
            if (!shouldTryManualWrap) return NO;
            [execLog appendString:@"\n尝试方法1.5: 手工构造EmoticonWrap\n"];

            NSDictionary *emoticonInfo = [self parseEmoticonInfoFromContent:content];
            if (!(emoticonInfo && emoticonInfo[@"encryptUrl"] && emoticonInfo[@"aesKey"])) {
                [execLog appendFormat:@"✗ XML中缺少必要字段(encryptUrl/aesKey)\n"];
                return NO;
            }

            [execLog appendFormat:@"✓ 解析到encryptUrl和aesKey\n"];

            EmojiInfoObj *emojiInfo = [[objc_getClass("EmojiInfoObj") alloc] init];
            if (!emojiInfo) {
                [execLog appendString:@"✗ 手工构造失败\n"];
                return NO;
            }

            emojiInfo.md5 = emoticonInfo[@"md5"] ?: emoticonMD5;
            emojiInfo.encryptUrl = emoticonInfo[@"encryptUrl"];
            emojiInfo.aesKey = emoticonInfo[@"aesKey"];
            emojiInfo.thumbUrl = emoticonInfo[@"thumbUrl"];
            emojiInfo.productId = emoticonInfo[@"productId"];

            CEmoticonWrap *manualWrap = [[objc_getClass("CEmoticonWrap") alloc] init];
            if (!manualWrap) {
                [execLog appendString:@"✗ 手工构造失败\n"];
                return NO;
            }

            manualWrap.m_emojiInfo = emojiInfo;
            NSNumber *typeNum = emoticonInfo[@"type"];
            manualWrap.m_uiType = typeNum ? [typeNum unsignedIntValue] : 1;

            [execLog appendString:@"✓ 手工构造EmoticonWrap成功\n"];

            id lc = [self wcpl_safeInvokeObjectSelector:@selector(m_logicController)
                                               onObject:context.viewController
                                              arguments:nil];
            if (lc &&
                [self wcpl_safeInvokeVoidSelector:@selector(SendEmoticonMessage:)
                                         onObject:lc
                                        arguments:@[manualWrap]]) {
                [execLog appendString:@"✅ 通过logicController发送成功(手工构造)\n"];
                return YES;
            }

            if ([self wcpl_safeInvokeVoidSelector:@selector(SendEmoticonMesssageToolView:)
                                         onObject:context.viewController
                                        arguments:@[manualWrap]]) {
                [execLog appendString:@"✅ 通过ViewController发送成功(手工构造)\n"];
                return YES;
            }

            return NO;
        }),
        WCPLSendStrategy(^BOOL{
            if (content.length == 0 && emoticonMD5.length == 0) return NO;
            [execLog appendString:@"\n尝试方法2: CMessageMgr\n"];

            id msgMgr = [self wcpl_getService:objc_getClass("CMessageMgr")];
            if (!msgMgr) {
                [execLog appendString:@"❌ 无法获取CMessageMgr\n"];
                return NO;
            }

            [execLog appendString:@"✓ 获取到CMessageMgr\n"];
            CMessageWrap *newMsgWrap = [[objc_getClass("CMessageWrap") alloc] init];
            if (!newMsgWrap) {
                [execLog appendString:@"❌ 创建CMessageWrap失败\n"];
                return NO;
            }

            newMsgWrap.m_uiMessageType = 47;
            newMsgWrap.m_nsToUsr = toUserName;
            if (content.length > 0) {
                newMsgWrap.m_nsContent = content;
            }
            if (emoticonMD5.length > 0) {
                [self wcpl_safeSetObject:newMsgWrap selectorName:@"setM_nsEmoticonMD5:" value:emoticonMD5];
                [self wcpl_safeSetObject:newMsgWrap selectorName:@"setM_nsEmoticonMd5:" value:emoticonMD5];
            }

            if ([msgMgr respondsToSelector:@selector(AddEmoticonMsg:MsgWrap:)]) {
                [execLog appendString:@"✓ 调用AddEmoticonMsg\n"];
                [msgMgr AddEmoticonMsg:toUserName MsgWrap:newMsgWrap];
                [execLog appendString:@"✅ AddEmoticonMsg执行完成\n"];
                return YES;
            }

            if ([msgMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:)]) {
                [execLog appendString:@"✓ 调用AddLocalMsg\n"];
                [msgMgr AddLocalMsg:toUserName MsgWrap:newMsgWrap fixTime:YES NewMsgArriveNotify:YES];
                [execLog appendString:@"✅ AddLocalMsg执行完成\n"];
                return YES;
            }

            [execLog appendString:@"❌ 没有可用的发送方法\n"];
            return NO;
        }),
    ];

    return [self wcpl_executeSendStrategies:strategies execLog:execLog];
}

- (NSString *)handleRepeatVoiceMessage:(CMessageWrap *)msgWrap viewController:(BaseMsgContentViewController *)viewController {
    NSMutableString *execLog = [NSMutableString string];

    @try {
        if (!msgWrap || !viewController) {
            [execLog appendString:@"❌ 参数无效\n"];
            return execLog;
        }

        NSString *toUserName = [self wcpl_toUserNameFromViewController:viewController
                                                               msgWrap:msgWrap
                                                               execLog:execLog];
        if (toUserName.length == 0) {
            [execLog appendString:@"❌ 无法获取聊天对象\n"];
            return execLog;
        }
        [execLog appendFormat:@"✓ 聊天对象: %@\n", toUserName];

        id msgMgr = [self wcpl_getService:objc_getClass("CMessageMgr")];
        if (!msgMgr) {
            [execLog appendString:@"❌ 无法获取CMessageMgr\n"];
            return execLog;
        }

        BOOL didSend = NO;
        BOOL preferVoiceResend = [self isMessageFromOther:msgWrap];

        if (preferVoiceResend) {
            didSend = [self wcpl_tryResendVoiceMessage:msgWrap
                                            toUserName:toUserName
                                               execLog:execLog];
        }

        if (!didSend && [msgMgr respondsToSelector:@selector(ReSendMessage:MsgWrap:)]) {
            BOOL invoked = [self wcpl_safeInvokeVoidSelector:@selector(ReSendMessage:MsgWrap:)
                                                    onObject:msgMgr
                                                   arguments:@[toUserName, msgWrap]];
            if (invoked) {
                [execLog appendString:@"✅ 已调用 ReSendMessage\n"];
                didSend = YES;
            }
        }

        if (!didSend && [msgMgr respondsToSelector:@selector(ResendMsg:MsgWrap:)]) {
            BOOL invoked = [self wcpl_safeInvokeVoidSelector:@selector(ResendMsg:MsgWrap:)
                                                    onObject:msgMgr
                                                   arguments:@[toUserName, msgWrap]];
            if (invoked) {
                [execLog appendString:@"✅ 已调用 ResendMsg\n"];
                didSend = YES;
            }
        }

        if (!didSend && !preferVoiceResend) {
            didSend = [self wcpl_tryResendVoiceMessage:msgWrap
                                            toUserName:toUserName
                                               execLog:execLog];
        }

        if (!didSend) {
            [execLog appendString:@"❌ 没有可用的语音重发方法\n"];
        }
        return execLog;
    }
    @catch (NSException *exception) {
        [execLog appendFormat:@"❌ 异常: %@\n", exception];
        return execLog;
    }
}

- (BOOL)wcpl_tryResendVoiceMessage:(CMessageWrap *)msgWrap
                        toUserName:(NSString *)toUserName
                           execLog:(NSMutableString *)execLog {
    if (!msgWrap) return NO;

    NSArray<NSString *> *resendClasses = @[
        @"AudioSender",
        @"MMNewUploadVoiceMgr",
        @"UploadVoiceCDNMgr",
        @"BaseUploadVoiceMgr"
    ];

    for (NSString *className in resendClasses) {
        Class cls = objc_getClass([className UTF8String]);
        if (!cls) continue;

        id sender = [self wcpl_getService:cls];
        if (!sender) continue;

        if ([sender respondsToSelector:@selector(ResendVoiceMsg:MsgWrap:)]) {
            BOOL invoked = [self wcpl_safeInvokeVoidSelector:@selector(ResendVoiceMsg:MsgWrap:)
                                                    onObject:sender
                                                   arguments:@[toUserName ?: @"", msgWrap]];
            if (invoked) {
                if (execLog) {
                    [execLog appendFormat:@"✅ 已调用 %@.ResendVoiceMsg\n", className];
                }
                return YES;
            }
        }
    }

    return NO;
}

- (UIButton *)wcpl_findOrFixRepeatButtonInContainer:(UIView *)containerView
                                           cellView:(UIView *)cellView
                                         messageKey:(NSString *)messageKey {
    if (!containerView && !cellView) return nil;

    NSMutableArray<UIView *> *taggedViews = [NSMutableArray array];
    if (containerView) {
        [self wcpl_collectViewsWithTag:kWCPLRepeatButtonTag inView:containerView results:taggedViews];
    }
    if (cellView && cellView != containerView) {
        [self wcpl_collectViewsWithTag:kWCPLRepeatButtonTag inView:cellView results:taggedViews];
    }

    UITableViewCell *tableViewCell = [self wcpl_tableViewCellForView:cellView ?: containerView];
    if (tableViewCell.contentView && tableViewCell.contentView != containerView && tableViewCell.contentView != cellView) {
        [self wcpl_collectViewsWithTag:kWCPLRepeatButtonTag inView:tableViewCell.contentView results:taggedViews];
    }

    NSMutableArray<UIButton *> *buttonCandidates = [NSMutableArray array];
    NSMutableSet<NSString *> *seenPointers = [NSMutableSet set];
    NSInteger removedCount = 0;
    NSInteger movedCount = 0;

    for (UIView *view in taggedViews) {
        NSString *pointerKey = [NSString stringWithFormat:@"%p", view];
        if ([seenPointers containsObject:pointerKey]) {
            continue;
        }
        [seenPointers addObject:pointerKey];

        if (![view isKindOfClass:[UIButton class]]) {
            [view removeFromSuperview];
            removedCount++;
            continue;
        }

        [buttonCandidates addObject:(UIButton *)view];
    }

    UIButton *repeatButton = nil;
    NSInteger bestScore = NSIntegerMin;
    for (UIButton *candidate in buttonCandidates) {
        NSString *storedKey = objc_getAssociatedObject(candidate, &kWCPLRepeatButtonMessageKey);
        BOOL hasTargetKey = (messageKey.length > 0);
        BOOL hasStoredKey = (storedKey.length > 0);
        BOOL keyMatches = (hasTargetKey && hasStoredKey && [storedKey isEqualToString:messageKey]);

        NSInteger score = 0;
        if (keyMatches) {
            score += 100;
        } else if (hasTargetKey && hasStoredKey) {
            score -= 1000;
        } else {
            score += 5;
        }

        if (containerView && candidate.superview == containerView) {
            score += 10;
        }

        if (!repeatButton || score > bestScore) {
            repeatButton = candidate;
            bestScore = score;
        }
    }

    if (bestScore < 0) {
        repeatButton = nil;
    }

    for (UIButton *candidate in buttonCandidates) {
        if (candidate == repeatButton) {
            continue;
        }
        [candidate removeFromSuperview];
        removedCount++;
    }

    if (repeatButton && containerView && repeatButton.superview != containerView) {
        [repeatButton removeFromSuperview];
        [containerView addSubview:repeatButton];
        movedCount++;
    }

    if (repeatButton && messageKey.length > 0) {
        objc_setAssociatedObject(repeatButton, &kWCPLRepeatButtonMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
    }

    if (repeatButton && !repeatButton.superview) {
        repeatButton = nil;
    }

    if (removedCount > 0 || movedCount > 0) {
        WCPLLog(@"复读按钮去重: 移除=%ld 挪动=%ld cell=%@",
                (long)removedCount,
                (long)movedCount,
                NSStringFromClass([cellView class]));
    }

    WCPLLog(@"复读按钮扫描: candidates=%ld key=%@ container=%@ cell=%@",
            (long)buttonCandidates.count,
            messageKey ?: @"",
            containerView ? NSStringFromClass([containerView class]) : @"nil",
            cellView ? NSStringFromClass([cellView class]) : @"nil");

    return repeatButton;
}

- (void)wcpl_collectViewsWithTag:(NSInteger)tag
                          inView:(UIView *)view
                         results:(NSMutableArray<UIView *> *)results {
    if (!view) return;
    if (view.tag == tag) {
        [results addObject:view];
    }
    for (UIView *subview in view.subviews) {
        [self wcpl_collectViewsWithTag:tag inView:subview results:results];
    }
}

- (void)wcpl_pruneDuplicateButtonsKeeping:(UIButton *)keepButton
                                cellView:(CommonMessageCellView *)cellView {
    if (!cellView) return;

    NSMutableArray<UIView *> *taggedViews = [NSMutableArray array];
    [self wcpl_collectViewsWithTag:kWCPLRepeatButtonTag inView:cellView results:taggedViews];

    UITableViewCell *cell = [self wcpl_tableViewCellForView:cellView];
    if (cell.contentView && cell.contentView != cellView) {
        [self wcpl_collectViewsWithTag:kWCPLRepeatButtonTag inView:cell.contentView results:taggedViews];
    }

    NSMutableSet<NSString *> *seenPointers = [NSMutableSet set];
    NSInteger removedCount = 0;
    for (UIView *view in taggedViews) {
        NSString *pointerKey = [NSString stringWithFormat:@"%p", view];
        if ([seenPointers containsObject:pointerKey]) {
            continue;
        }
        [seenPointers addObject:pointerKey];

        if (keepButton && view == keepButton) {
            continue;
        }
        [view removeFromSuperview];
        removedCount++;
    }

    if (removedCount > 0) {
        WCPLLog(@"复读按钮裁剪: cell=%@ removed=%ld keep=%@",
                NSStringFromClass([cellView class]),
                (long)removedCount,
                keepButton ? NSStringFromCGRect(keepButton.frame) : @"nil");
    }
}

- (NSString *)wcpl_messageKeyForMsgWrap:(CMessageWrap *)msgWrap {
    if (!msgWrap) return nil;

    if (msgWrap.m_uiMesLocalID != 0 || msgWrap.m_n64MesSvrID != 0) {
        return [NSString stringWithFormat:@"%u_%lld_%u",
                msgWrap.m_uiMesLocalID,
                msgWrap.m_n64MesSvrID,
                msgWrap.m_uiMessageType];
    }

    NSString *fromUser = msgWrap.m_nsFromUsr ?: @"";
    NSString *toUser = msgWrap.m_nsToUsr ?: @"";
    return [NSString stringWithFormat:@"ptr_%p_%u_%@_%@",
            msgWrap,
            msgWrap.m_uiMessageType,
            fromUser,
            toUser];
}

- (NSString *)handleRepeatImageMessage:(CMessageWrap *)msgWrap viewController:(BaseMsgContentViewController *)viewController {
    NSMutableString *execLog = [NSMutableString string];

    @try {
        if (!msgWrap || !viewController) {
            [execLog appendString:@"❌ 参数无效\n"];
            return execLog;
        }

        NSString *toUserName = [self wcpl_toUserNameFromViewController:viewController
                                                               msgWrap:msgWrap
                                                               execLog:execLog];

        if (!toUserName || toUserName.length == 0) {
            [execLog appendString:@"❌ 无法获取聊天对象\n"];
            return execLog;
        }
        [execLog appendFormat:@"✓ 聊天对象: %@\n", toUserName];

        // 尝试通过 CMessageMgr 的 ReSendMessage 直接重发
        @try {
            id msgMgr = [self wcpl_getService:objc_getClass("CMessageMgr")];
            if (msgMgr && [msgMgr respondsToSelector:@selector(ReSendMessage:MsgWrap:)]) {
                [execLog appendString:@"✓ 尝试使用 CMessageMgr.ReSendMessage 重发图片\n"];
                BOOL result = [self wcpl_safeInvokeBoolSelector:@selector(ReSendMessage:MsgWrap:)
                                                       onObject:msgMgr
                                                      arguments:@[toUserName, msgWrap]
                                                   defaultValue:NO];
                if (result) {
                    [execLog appendString:@"✅ 通过 ReSendMessage 发送成功\n"];
                    return execLog;
                } else {
                    [execLog appendString:@"⚠️ ReSendMessage 返回 NO，尝试其他方法\n"];
                }
            }
        } @catch (NSException *e) {
            [execLog appendFormat:@"⚠️ ReSendMessage 异常: %@，尝试其他方法\n", e];
        }

        NSString *imagePath = [self wcpl_imagePathFromMessageWrap:msgWrap];
        NSData *imageData = [self wcpl_imageDataFromMessageWrap:msgWrap];

        NSString *expandedPath = imagePath.length > 0 ? [imagePath stringByExpandingTildeInPath] : nil;
        if (expandedPath.length > 0) {
            BOOL exists = [[NSFileManager defaultManager] fileExistsAtPath:expandedPath];
            [execLog appendFormat:@"✓ 图片路径: %@ (exists=%@)\n", expandedPath, exists ? @"YES" : @"NO"];
        }

        if (imageData.length > 0) {
            [execLog appendFormat:@"✓ 图片数据长度: %lu\n", (unsigned long)imageData.length];
        }

        // 如果找不到图片数据/路径,输出完整的 msgWrap 属性诊断
        if (expandedPath.length == 0 && imageData.length == 0) {
            [execLog appendString:@"\n=== 开始 msgWrap 对象完整诊断 ===\n"];

            // 获取所有属性
            unsigned int propertyCount = 0;
            objc_property_t *properties = class_copyPropertyList([msgWrap class], &propertyCount);

            [execLog appendFormat:@"msgWrap 类名: %@\n", NSStringFromClass([msgWrap class])];
            [execLog appendFormat:@"属性总数: %u\n\n", propertyCount];

            // 列出所有包含 "img", "image", "path", "data" 的属性
            NSMutableArray *relevantProps = [NSMutableArray array];
            for (unsigned int i = 0; i < propertyCount; i++) {
                const char *propName = property_getName(properties[i]);
                NSString *propNameStr = [NSString stringWithUTF8String:propName];
                NSString *lowerProp = [propNameStr lowercaseString];

                if ([lowerProp containsString:@"img"] ||
                    [lowerProp containsString:@"image"] ||
                    [lowerProp containsString:@"path"] ||
                    [lowerProp containsString:@"data"] ||
                    [lowerProp containsString:@"pic"] ||
                    [lowerProp containsString:@"photo"]) {

                    @try {
                        id value = [msgWrap valueForKey:propNameStr];
                        NSString *valueDesc = @"nil";
                        if ([value isKindOfClass:[NSString class]]) {
                            NSString *strVal = (NSString *)value;
                            valueDesc = strVal.length > 100 ?
                                [NSString stringWithFormat:@"String(len=%lu)", (unsigned long)strVal.length] :
                                strVal;
                        } else if ([value isKindOfClass:[NSData class]]) {
                            valueDesc = [NSString stringWithFormat:@"Data(%lu bytes)", (unsigned long)[(NSData *)value length]];
                        } else if (value) {
                            valueDesc = [NSString stringWithFormat:@"%@ (%@)", value, NSStringFromClass([value class])];
                        }
                        [relevantProps addObject:[NSString stringWithFormat:@"  %@: %@", propNameStr, valueDesc]];
                    } @catch (NSException *e) {
                        [relevantProps addObject:[NSString stringWithFormat:@"  %@: [访问异常]", propNameStr]];
                    }
                }
            }
            free(properties);

            [execLog appendString:@"相关属性:\n"];
            if (relevantProps.count > 0) {
                [execLog appendString:[relevantProps componentsJoinedByString:@"\n"]];
                [execLog appendString:@"\n"];
            } else {
                [execLog appendString:@"  (未找到相关属性)\n"];
            }

            // 检查 m_oImgInfo
            @try {
                id imgInfo = [msgWrap valueForKey:@"m_oImgInfo"];
                if (imgInfo) {
                    [execLog appendFormat:@"\nm_oImgInfo 类型: %@\n", NSStringFromClass([imgInfo class])];

                    unsigned int imgInfoPropCount = 0;
                    objc_property_t *imgInfoProps = class_copyPropertyList([imgInfo class], &imgInfoPropCount);
                    [execLog appendFormat:@"m_oImgInfo 属性数: %u\n", imgInfoPropCount];

                    for (unsigned int i = 0; i < imgInfoPropCount; i++) {
                        const char *propName = property_getName(imgInfoProps[i]);
                        NSString *propNameStr = [NSString stringWithUTF8String:propName];
                        @try {
                            id val = [imgInfo valueForKey:propNameStr];
                            if ([val isKindOfClass:[NSString class]]) {
                                [execLog appendFormat:@"  %@: %@\n", propNameStr, val];
                            } else if ([val isKindOfClass:[NSData class]]) {
                                [execLog appendFormat:@"  %@: Data(%lu bytes)\n", propNameStr, (unsigned long)[(NSData *)val length]];
                            } else if (val) {
                                [execLog appendFormat:@"  %@: %@\n", propNameStr, NSStringFromClass([val class])];
                            }
                        } @catch (NSException *e) {
                            // 忽略
                        }
                    }
                    free(imgInfoProps);
                }
            } @catch (NSException *e) {
                [execLog appendFormat:@"\nm_oImgInfo 访问异常: %@\n", e];
            }

            [execLog appendString:@"\n=== msgWrap 诊断结束 ===\n\n"];
        }

        UIImage *image = nil;
        if (expandedPath.length > 0) {
            image = [UIImage imageWithContentsOfFile:expandedPath];
        }
        if (!image && imageData.length > 0) {
            image = [UIImage imageWithData:imageData];
        }

        if (!image && expandedPath.length == 0 && imageData.length == 0) {
            [execLog appendString:@"⚠️ msgWrap 中无图片数据,尝试从界面获取\n"];

            // 方案1: 尝试从消息 cell 的 ImageView 获取已显示的图片
            @try {
                // 查找消息对应的 cell
                UIView *currentCell = nil;
                UIResponder *responder = viewController.view;
                while (responder) {
                    if ([responder isKindOfClass:[UITableViewCell class]]) {
                        currentCell = (UIView *)responder;
                        break;
                    }
                    responder = [responder nextResponder];
                }

                if (!currentCell && viewController.view) {
                    // 尝试遍历 tableView 的 cells
                    for (UIView *subview in viewController.view.subviews) {
                        if ([subview isKindOfClass:[UITableView class]]) {
                            UITableView *tableView = (UITableView *)subview;
                            for (UITableViewCell *cell in tableView.visibleCells) {
                                // 检查 cell 是否包含此 msgWrap
                                @try {
                                    id cellMsgWrap = [cell valueForKey:@"m_msgWrap"];
                                    if (cellMsgWrap && [cellMsgWrap isEqual:msgWrap]) {
                                        currentCell = cell;
                                        break;
                                    }
                                } @catch (NSException *e) {
                                    // 继续查找
                                }
                            }
                            if (currentCell) break;
                        }
                    }
                }

                // 在 cell 中查找 UIImageView
                if (currentCell) {
                    [execLog appendString:@"✓ 找到消息 cell,查找 ImageView\n"];
                    UIImageView *foundImageView = nil;
                    NSMutableArray *viewsToCheck = [NSMutableArray arrayWithObject:currentCell];

                    while (viewsToCheck.count > 0) {
                        UIView *view = viewsToCheck.firstObject;
                        [viewsToCheck removeObjectAtIndex:0];

                        if ([view isKindOfClass:[UIImageView class]]) {
                            UIImageView *imgView = (UIImageView *)view;
                            if (imgView.image && imgView.image.size.width > 50 && imgView.image.size.height > 50) {
                                foundImageView = imgView;
                                break;
                            }
                        }

                        [viewsToCheck addObjectsFromArray:view.subviews];
                    }

                    if (foundImageView && foundImageView.image) {
                        image = foundImageView.image;
                        [execLog appendFormat:@"✅ 从 ImageView 获取图片成功 (%.0fx%.0f)\n",
                         image.size.width, image.size.height];
                    } else {
                        [execLog appendString:@"❌ 未在 cell 中找到有效的 ImageView\n"];
                    }
                }
            } @catch (NSException *e) {
                [execLog appendFormat:@"⚠️ 从界面获取图片异常: %@\n", e];
            }

            // 方案2: 如果仍然没有图片,尝试触发图片下载
            if (!image) {
                [execLog appendFormat:@"⚠️ 图片状态: %@\n", [msgWrap valueForKey:@"m_uiImgStatus"]];
                [execLog appendString:@"提示: 图片可能未下载或已过期,请先点击查看大图后再复读\n"];
                return execLog;
            }
        }

        WCPLRepeatSendContext *context = [WCPLRepeatSendContext new];
        context.kind = WCPLRepeatMessageKindImage;
        context.viewController = viewController;
        context.msgWrap = msgWrap;
        context.toUserName = toUserName;
        context.image = image;
        context.imageData = imageData;
        context.imagePath = expandedPath;

        if (![self wcpl_sendRepeatMessageWithContext:context execLog:execLog]) {
            [execLog appendString:@"❌ 未找到可用的图片发送方法\n"];
        }

        return execLog;
    }
    @catch (NSException *exception) {
        [execLog appendFormat:@"❌ 异常: %@\n", exception];
        return execLog;
    }
}

- (BOOL)wcpl_sendImageWithContext:(WCPLRepeatSendContext *)context
                          execLog:(NSMutableString *)execLog {
    if (!context || !context.viewController) return NO;
    if (context.toUserName.length == 0) return NO;

    id toolView = [self wcpl_inputToolViewFromViewController:context.viewController];
    id logicController = [self wcpl_safeInvokeObjectSelector:@selector(m_logicController)
                                                     onObject:context.viewController
                                                    arguments:nil];
    if (!logicController) {
        logicController = [self wcpl_safeValueForObject:context.viewController keyName:@"m_logicController"];
    }

    id msgMgr = [self wcpl_getService:objc_getClass("CMessageMgr")];

    NSArray<WCPLSendStrategyBlock> *strategies = @[
        WCPLSendStrategy(^BOOL{
            return [self wcpl_trySendImageWithTarget:logicController
                                               name:@"LogicController"
                                              image:context.image
                                          imageData:context.imageData
                                          imagePath:context.imagePath
                                             toUser:context.toUserName
                                            execLog:execLog];
        }),
        WCPLSendStrategy(^BOOL{
            return [self wcpl_trySendImageWithTarget:toolView
                                               name:@"InputToolView"
                                              image:context.image
                                          imageData:context.imageData
                                          imagePath:context.imagePath
                                             toUser:context.toUserName
                                            execLog:execLog];
        }),
        WCPLSendStrategy(^BOOL{
            return [self wcpl_trySendImageWithTarget:context.viewController
                                               name:@"ViewController"
                                              image:context.image
                                          imageData:context.imageData
                                          imagePath:context.imagePath
                                             toUser:context.toUserName
                                            execLog:execLog];
        }),
        WCPLSendStrategy(^BOOL{
            return [self wcpl_trySendImageWithTarget:msgMgr
                                               name:@"CMessageMgr"
                                              image:context.image
                                          imageData:context.imageData
                                          imagePath:context.imagePath
                                             toUser:context.toUserName
                                            execLog:execLog];
        }),
    ];

    return [self wcpl_executeSendStrategies:strategies execLog:execLog];
}

// 从消息内容 XML 中解析表情包 MD5
// 从表情包 XML 解析完整信息（用于手工构造 CEmoticonWrap）
- (NSDictionary *)parseEmoticonInfoFromContent:(NSString *)content {
    if (!content || content.length == 0) return nil;

    NSMutableDictionary *info = [NSMutableDictionary dictionary];

    // 解析 md5
    NSRegularExpression *md5Regex = [NSRegularExpression regularExpressionWithPattern:@"md5\\s*=\\s*['\"]?([a-fA-F0-9]{32})" options:NSRegularExpressionCaseInsensitive error:nil];
    NSTextCheckingResult *md5Match = [md5Regex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (md5Match && md5Match.numberOfRanges > 1) {
        info[@"md5"] = [content substringWithRange:[md5Match rangeAtIndex:1]];
    }

    // 解析 cdnurl（映射到 encryptUrl）
    NSRegularExpression *cdnurlRegex = [NSRegularExpression regularExpressionWithPattern:@"cdnurl\\s*=\\s*['\"]([^'\"]+)['\"]" options:0 error:nil];
    NSTextCheckingResult *cdnurlMatch = [cdnurlRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (cdnurlMatch && cdnurlMatch.numberOfRanges > 1) {
        info[@"encryptUrl"] = [content substringWithRange:[cdnurlMatch rangeAtIndex:1]];
    }

    // 解析 aeskey
    NSRegularExpression *aeskeyRegex = [NSRegularExpression regularExpressionWithPattern:@"aeskey\\s*=\\s*['\"]([^'\"]+)['\"]" options:0 error:nil];
    NSTextCheckingResult *aeskeyMatch = [aeskeyRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (aeskeyMatch && aeskeyMatch.numberOfRanges > 1) {
        info[@"aesKey"] = [content substringWithRange:[aeskeyMatch rangeAtIndex:1]];
    }

    // 解析 type（表情类型，1=自定义, 2=商店表情等）
    NSRegularExpression *typeRegex = [NSRegularExpression regularExpressionWithPattern:@"type\\s*=\\s*['\"]?(\\d+)" options:0 error:nil];
    NSTextCheckingResult *typeMatch = [typeRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (typeMatch && typeMatch.numberOfRanges > 1) {
        info[@"type"] = @([[content substringWithRange:[typeMatch rangeAtIndex:1]] integerValue]);
    }

    // 解析 thumburl（缩略图）
    NSRegularExpression *thumbRegex = [NSRegularExpression regularExpressionWithPattern:@"thumburl\\s*=\\s*['\"]([^'\"]+)['\"]" options:0 error:nil];
    NSTextCheckingResult *thumbMatch = [thumbRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (thumbMatch && thumbMatch.numberOfRanges > 1) {
        info[@"thumbUrl"] = [content substringWithRange:[thumbMatch rangeAtIndex:1]];
    }

    // 解析 productid（商品ID，商店表情使用）
    NSRegularExpression *productRegex = [NSRegularExpression regularExpressionWithPattern:@"productid\\s*=\\s*['\"]([^'\"]+)['\"]" options:0 error:nil];
    NSTextCheckingResult *productMatch = [productRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (productMatch && productMatch.numberOfRanges > 1) {
        info[@"productId"] = [content substringWithRange:[productMatch rangeAtIndex:1]];
    }

    return info.count > 0 ? info : nil;
}

- (NSString *)parseEmoticonMD5FromContent:(NSString *)content {
    if (!content || content.length == 0) return nil;

    // 尝试匹配 md5="xxx" / md5='xxx' / md5=xxx 格式（兼容空格）
    NSRegularExpression *regex1 =
        [NSRegularExpression regularExpressionWithPattern:@"md5\\s*=\\s*['\\\"]?([a-fA-F0-9]{32})"
                                                  options:NSRegularExpressionCaseInsensitive
                                                    error:nil];
    NSTextCheckingResult *match1 = [regex1 firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (match1 && match1.numberOfRanges > 1) {
        return [content substringWithRange:[match1 rangeAtIndex:1]];
    }

    // 尝试匹配 <md5>xxx</md5> 格式
    NSRegularExpression *regex2 =
        [NSRegularExpression regularExpressionWithPattern:@"<md5>\\s*([a-fA-F0-9]{32})\\s*</md5>"
                                                  options:NSRegularExpressionCaseInsensitive
                                                    error:nil];
    NSTextCheckingResult *match2 = [regex2 firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (match2 && match2.numberOfRanges > 1) {
        return [content substringWithRange:[match2 rangeAtIndex:1]];
    }

    // 尝试匹配 cdnurl 中的 MD5
    NSRegularExpression *regex3 = [NSRegularExpression regularExpressionWithPattern:@"cdnurl=\"[^\"]*?([a-fA-F0-9]{32})" options:0 error:nil];
    NSTextCheckingResult *match3 = [regex3 firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (match3 && match3.numberOfRanges > 1) {
        return [content substringWithRange:[match3 rangeAtIndex:1]];
    }

    return nil;
}

@end

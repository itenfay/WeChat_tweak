//
// WCPLMessageReplyManager.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//
// Updated: Real repeat message feature (复读机功能)
// 在别人发送的消息气泡旁边显示 +1 按钮，点击后复读该消息
//

#import "WCPLMessageReplyManager.h"
#import "WCPLRepeatButton.h"
#import "WCPLRedEnvelopConfig.h"
#import "WeChatRedEnvelop.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>

// 关联对象的 key
static char kRepeatContentKey;
static char kRepeatMsgWrapKey;
static char kRepeatButtonForCellViewKey;
static NSString *const kWCPLRepeatDebugAlertEnabledKey = @"kWCPLRepeatDebugAlertEnabled";

// 日志宏定义 - 同时输出到系统日志和本地文件
#define WCPLLog(fmt, ...) [[WCPLLogger sharedLogger] logFormat:fmt, ##__VA_ARGS__]

@implementation WCPLMessageReplyManager

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

- (UIView *)wcpl_repeatButtonContainerViewForCellView:(UIView *)cellView {
    UITableViewCell *cell = [self wcpl_tableViewCellForView:cellView];
    if (cell && cell.contentView) {
        return cell.contentView;
    }
    return cellView;
}

- (BOOL)wcpl_isRepeatButtonView:(UIView *)view {
    if (!view) return NO;
    if (view.tag != kWCPLRepeatButtonTag) return NO;
    if (![view isKindOfClass:[UIButton class]]) return NO;
    return YES;
}

- (void)wcpl_removeRepeatButtonsInView:(UIView *)view excludingButton:(UIButton *)excludingButton {
    if (!view) return;

    NSMutableArray<UIView *> *buttonsToRemove = [NSMutableArray array];
    NSMutableArray<UIView *> *stack = [NSMutableArray arrayWithObject:view];

    while (stack.count > 0) {
        UIView *current = stack.lastObject;
        [stack removeLastObject];

        for (UIView *subview in current.subviews) {
            if ([self wcpl_isRepeatButtonView:subview]) {
                if (excludingButton && subview == excludingButton) {
                    continue;
                }
                [buttonsToRemove addObject:subview];
                continue;
            }

            if (subview.subviews.count > 0) {
                [stack addObject:subview];
            }
        }
    }

    for (UIView *buttonView in buttonsToRemove) {
        [buttonView removeFromSuperview];
    }
}

- (NSString *)wcpl_safeStringValueForObject:(id)obj selectorName:(NSString *)selectorName {
    @try {
        if (!obj || selectorName.length == 0) return nil;

        SEL selector = NSSelectorFromString(selectorName);
        if (!selector || ![obj respondsToSelector:selector]) return nil;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
        id value = [obj performSelector:selector];
#pragma clang diagnostic pop

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
        if (!selector || ![obj respondsToSelector:selector]) return;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
        [obj performSelector:selector withObject:value];
#pragma clang diagnostic pop
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

    id toolView = nil;
    @try {
        if ([viewController respondsToSelector:@selector(toolView)]) {
            toolView = [viewController performSelector:@selector(toolView)];
        }
    }
    @catch (__unused NSException *exception) {
    }

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

- (BOOL)wcpl_tryInvokeSelector:(SEL)selector onObject:(id)obj argument:(id)argument {
    @try {
        if (!obj || !selector || ![obj respondsToSelector:selector]) return NO;

        NSMethodSignature *signature = [obj methodSignatureForSelector:selector];
        if (!signature) return NO;

        NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:signature];
        [invocation setTarget:obj];
        [invocation setSelector:selector];
        if (signature.numberOfArguments > 2) {
            id arg = argument;
            [invocation setArgument:&arg atIndex:2];
        }
        [invocation invoke];
        return YES;
    }
    @catch (__unused NSException *exception) {
        return NO;
    }
}

- (BOOL)wcpl_tryInvokeSelector:(SEL)selector onObject:(id)obj argument:(id)argument argument2:(id)argument2 {
    @try {
        if (!obj || !selector || ![obj respondsToSelector:selector]) return NO;

        NSMethodSignature *signature = [obj methodSignatureForSelector:selector];
        if (!signature) return NO;

        NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:signature];
        [invocation setTarget:obj];
        [invocation setSelector:selector];
        if (signature.numberOfArguments > 2) {
            id arg = argument;
            [invocation setArgument:&arg atIndex:2];
        }
        if (signature.numberOfArguments > 3) {
            id arg2 = argument2;
            [invocation setArgument:&arg2 atIndex:3];
        }
        [invocation invoke];
        return YES;
    }
    @catch (__unused NSException *exception) {
        return NO;
    }
}

- (BOOL)wcpl_trySendImageWithTarget:(id)target
                               name:(NSString *)name
                              image:(UIImage *)image
                          imageData:(NSData *)imageData
                          imagePath:(NSString *)imagePath
                             toUser:(NSString *)toUser
                            execLog:(NSMutableString *)execLog {
    if (!target) return NO;

    NSArray<NSString *> *imageSelectors = @[
        @"sendImage:",
        @"SendImage:",
        @"sendImageWithImage:",
        @"SendImageWithImage:",
        @"sendPic:",
        @"SendPic:",
        @"sendPicture:",
        @"SendPicture:"
    ];

    NSArray<NSString *> *dataSelectors = @[
        @"sendImageData:",
        @"SendImageData:",
        @"sendImageWithData:",
        @"SendImageWithData:"
    ];

    NSArray<NSString *> *pathSelectors = @[
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
    ];

    NSArray<NSString *> *imageToUserSelectors = @[
        @"sendImage:toUser:",
        @"SendImage:toUser:",
        @"sendImage:toUsr:",
        @"SendImage:toUsr:",
        @"sendPic:toUser:",
        @"SendPic:toUser:",
        @"sendPicture:toUser:",
        @"SendPicture:toUser:"
    ];

    NSArray<NSString *> *dataToUserSelectors = @[
        @"sendImageData:toUser:",
        @"SendImageData:toUser:",
        @"sendImageWithData:toUser:",
        @"SendImageWithData:toUser:"
    ];

    NSArray<NSString *> *pathToUserSelectors = @[
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
    ];

    // 微信官方 API: SendImageMessage:withData:ImageInfo:
    NSArray<NSString *> *imageDataInfoSelectors = @[
        @"SendImageMessage:withData:ImageInfo:",
        @"sendImageMessage:withData:ImageInfo:",
        @"SendImageMessage:withData:imageInfo:",
        @"sendImageMessage:withData:imageInfo:"
    ];

    for (NSString *selectorName in imageSelectors) {
        if (!image) break;
        SEL selector = NSSelectorFromString(selectorName);
        if ([self wcpl_tryInvokeSelector:selector onObject:target argument:image]) {
            [execLog appendFormat:@"✅ %@ 调用 %@\n", name ?: @"target", selectorName];
            return YES;
        }
    }

    for (NSString *selectorName in dataSelectors) {
        if (!imageData || imageData.length == 0) break;
        SEL selector = NSSelectorFromString(selectorName);
        if ([self wcpl_tryInvokeSelector:selector onObject:target argument:imageData]) {
            [execLog appendFormat:@"✅ %@ 调用 %@\n", name ?: @"target", selectorName];
            return YES;
        }
    }

    for (NSString *selectorName in pathSelectors) {
        if (imagePath.length == 0) break;
        SEL selector = NSSelectorFromString(selectorName);
        if ([self wcpl_tryInvokeSelector:selector onObject:target argument:imagePath]) {
            [execLog appendFormat:@"✅ %@ 调用 %@\n", name ?: @"target", selectorName];
            return YES;
        }
    }

    if (toUser.length == 0) return NO;

    for (NSString *selectorName in imageToUserSelectors) {
        if (!image) break;
        SEL selector = NSSelectorFromString(selectorName);
        if ([self wcpl_tryInvokeSelector:selector onObject:target argument:image argument2:toUser]) {
            [execLog appendFormat:@"✅ %@ 调用 %@\n", name ?: @"target", selectorName];
            return YES;
        }
    }

    for (NSString *selectorName in dataToUserSelectors) {
        if (!imageData || imageData.length == 0) break;
        SEL selector = NSSelectorFromString(selectorName);
        if ([self wcpl_tryInvokeSelector:selector onObject:target argument:imageData argument2:toUser]) {
            [execLog appendFormat:@"✅ %@ 调用 %@\n", name ?: @"target", selectorName];
            return YES;
        }
    }

    for (NSString *selectorName in pathToUserSelectors) {
        if (imagePath.length == 0) break;
        SEL selector = NSSelectorFromString(selectorName);
        if ([self wcpl_tryInvokeSelector:selector onObject:target argument:imagePath argument2:toUser]) {
            [execLog appendFormat:@"✅ %@ 调用 %@\n", name ?: @"target", selectorName];
            return YES;
        }
    }

    // 尝试微信官方 API: SendImageMessage:withData:ImageInfo:
    for (NSString *selectorName in imageDataInfoSelectors) {
        if (!image && !imageData) break;
        SEL selector = NSSelectorFromString(selectorName);
        if (![target respondsToSelector:selector]) continue;

        @try {
            NSMethodSignature *signature = [target methodSignatureForSelector:selector];
            if (!signature || signature.numberOfArguments < 5) continue;

            NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:signature];
            [invocation setTarget:target];
            [invocation setSelector:selector];

            // 参数1: UIImage
            id arg1 = image;
            [invocation setArgument:&arg1 atIndex:2];

            // 参数2: NSData
            id arg2 = imageData ?: UIImageJPEGRepresentation(image, 0.8);
            [invocation setArgument:&arg2 atIndex:3];

            // 参数3: ImageInfo (可以传 nil)
            id arg3 = nil;
            [invocation setArgument:&arg3 atIndex:4];

            [invocation invoke];
            [execLog appendFormat:@"✅ %@ 调用 %@\n", name ?: @"target", selectorName];
            return YES;
        }
        @catch (NSException *exception) {
            [execLog appendFormat:@"✗ %@ 调用 %@ 异常: %@\n", name ?: @"target", selectorName, exception.reason];
        }
    }

    return NO;
}

- (NSString *)wcpl_getSelfUserName {
    @try {
        id contactMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CContactMgr")];
        if (!contactMgr) return nil;

        if (![contactMgr respondsToSelector:@selector(getSelfContact)]) return nil;

        CContact *selfContact = [contactMgr performSelector:@selector(getSelfContact)];
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
    @try {
        if (!cellView) return;

        UIView *containerView = [self wcpl_repeatButtonContainerViewForCellView:cellView];
        UIButton *associatedButton = objc_getAssociatedObject(cellView, &kRepeatButtonForCellViewKey);

        // 检查功能是否启用
        if (![WCPLRedEnvelopConfig sharedConfig].messageReplyEnable) {
            if (associatedButton) {
                [associatedButton removeFromSuperview];
                objc_setAssociatedObject(cellView, &kRepeatButtonForCellViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
            [self wcpl_removeRepeatButtonsInView:containerView excludingButton:nil];
            return;
        }

        // 安全获取 ViewModel
        id viewModel = nil;
        if ([cellView respondsToSelector:@selector(viewModel)]) {
            viewModel = [cellView performSelector:@selector(viewModel)];
        }
        if (!viewModel) {
            if (associatedButton) {
                [associatedButton removeFromSuperview];
                objc_setAssociatedObject(cellView, &kRepeatButtonForCellViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
            [self wcpl_removeRepeatButtonsInView:containerView excludingButton:nil];
            return;
        }

        // 安全获取 MessageWrap
        CMessageWrap *msgWrap = nil;
        if ([viewModel respondsToSelector:@selector(messageWrap)]) {
            msgWrap = [viewModel performSelector:@selector(messageWrap)];
        }
        if (!msgWrap) {
            if (associatedButton) {
                [associatedButton removeFromSuperview];
                objc_setAssociatedObject(cellView, &kRepeatButtonForCellViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
            [self wcpl_removeRepeatButtonsInView:containerView excludingButton:nil];
            return;
        }

        // 检查是否可以复读
        if (![self canRepeatMessage:msgWrap]) {
            if (associatedButton) {
                [associatedButton removeFromSuperview];
                objc_setAssociatedObject(cellView, &kRepeatButtonForCellViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
            [self wcpl_removeRepeatButtonsInView:containerView excludingButton:nil];
            return;
        }

        // 获取消息唯一标识（用于防止重复添加按钮）
        unsigned int msgLocalID = msgWrap.m_uiMesLocalID;

        // 计算内容（用于更新现有按钮的关联对象）
        NSString *content = nil;
        unsigned int msgType = msgWrap.m_uiMessageType;
        BOOL isEmoticonMessage = (msgType == 47);
        BOOL isImageMessage = (msgType == 3);
        if (!isEmoticonMessage && !isImageMessage) {
            // 获取消息内容 - 优先从 ViewModel 的 contentText 获取（用于引用回复消息）
            if ([viewModel respondsToSelector:@selector(contentText)]) {
                content = [viewModel performSelector:@selector(contentText)];
            }
            // 如果 contentText 为空，回退到 msgWrap.m_nsContent
            if (!content || content.length == 0) {
                content = [self getMessageContent:msgWrap];
            }
            if (!content || content.length == 0) {
                if (associatedButton) {
                    [associatedButton removeFromSuperview];
                    objc_setAssociatedObject(cellView, &kRepeatButtonForCellViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                }
                [self wcpl_removeRepeatButtonsInView:containerView excludingButton:nil];
                return;
            }
        }

        // 优先复用已关联的按钮，避免长文本/多次布局导致重复按钮残留
        UIButton *existingButton = nil;
        if (associatedButton && [self wcpl_isRepeatButtonView:associatedButton]) {
            CMessageWrap *associatedMsgWrap = objc_getAssociatedObject(associatedButton, &kRepeatMsgWrapKey);
            BOOL isSameMessage = (associatedMsgWrap && associatedMsgWrap.m_uiMesLocalID == msgLocalID);
            if (isSameMessage) {
                existingButton = associatedButton;
                if (existingButton.superview != containerView) {
                    [existingButton removeFromSuperview];
                    [containerView addSubview:existingButton];
                }
            } else if (associatedMsgWrap) {
                [associatedButton removeFromSuperview];
                objc_setAssociatedObject(cellView, &kRepeatButtonForCellViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
        }

        // 检查是否已经存在相同消息的按钮
        NSMutableArray<UIButton *> *repeatButtons = [NSMutableArray array];
        if (containerView) {
            NSMutableArray<UIView *> *stack = [NSMutableArray arrayWithObject:containerView];
            while (stack.count > 0) {
                UIView *current = stack.lastObject;
                [stack removeLastObject];

                for (UIView *subview in current.subviews) {
                    if ([self wcpl_isRepeatButtonView:subview]) {
                        [repeatButtons addObject:(UIButton *)subview];
                        continue;
                    }

                    if (subview.subviews.count > 0) {
                        [stack addObject:subview];
                    }
                }
            }
        }

        NSMutableArray<UIButton *> *buttonsToRemove = [NSMutableArray array];
        for (UIButton *button in repeatButtons) {
            if (existingButton && button == existingButton) {
                continue;
            }
            CMessageWrap *existingMsgWrap = objc_getAssociatedObject(button, &kRepeatMsgWrapKey);
            BOOL isSameMessage = (existingMsgWrap && existingMsgWrap.m_uiMesLocalID == msgLocalID);

            if (!existingButton && isSameMessage) {
                existingButton = button;
            } else {
                [buttonsToRemove addObject:button];
            }
        }

        for (UIButton *button in buttonsToRemove) {
            [button removeFromSuperview];
        }

        if (existingButton) {
            if (existingButton.superview != containerView) {
                [existingButton removeFromSuperview];
                [containerView addSubview:existingButton];
            }

            objc_setAssociatedObject(cellView, &kRepeatButtonForCellViewKey, existingButton, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

            // 更新关联对象，避免引用回复/渲染更新导致内容不同步
            objc_setAssociatedObject(existingButton, &kRepeatContentKey, content, OBJC_ASSOCIATION_COPY_NONATOMIC);
            objc_setAssociatedObject(existingButton, &kRepeatMsgWrapKey, msgWrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

            [self layoutRepeatButton:existingButton inCellView:cellView];
            existingButton.hidden = NO;
            existingButton.alpha = 1.0;
            return;
        }

        // 先移除所有旧按钮，确保只有一个
        [self wcpl_removeRepeatButtonsInView:containerView excludingButton:nil];

        // 创建新按钮
        UIButton *repeatButton = [self createRepeatButton];
        [containerView addSubview:repeatButton];

        objc_setAssociatedObject(cellView, &kRepeatButtonForCellViewKey, repeatButton, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

        // 关联消息内容和 msgWrap
        objc_setAssociatedObject(repeatButton, &kRepeatContentKey, content, OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(repeatButton, &kRepeatMsgWrapKey, msgWrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

        // 定位按钮到消息气泡旁边
        [self layoutRepeatButton:repeatButton inCellView:cellView];

        repeatButton.hidden = NO;
        repeatButton.alpha = 1.0;
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in addRepeatButtonToCellView: %@", exception);
    }
}

- (void)removeRepeatButtonFromCellView:(CommonMessageCellView *)cellView {
    @try {
        if (!cellView) return;

        UIButton *associatedButton = objc_getAssociatedObject(cellView, &kRepeatButtonForCellViewKey);
        if (associatedButton) {
            [associatedButton removeFromSuperview];
            objc_setAssociatedObject(cellView, &kRepeatButtonForCellViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }

        UIView *containerView = [self wcpl_repeatButtonContainerViewForCellView:cellView];
        [self wcpl_removeRepeatButtonsInView:containerView excludingButton:nil];
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in removeRepeatButtonFromCellView: %@", exception);
    }
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
        [self sendMessageViaInputToolView:content viewController:viewController msgWrap:msgWrap];
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
        // 3 = 图片消息
        // 47 = 表情包消息
        // 49 = 应用消息（包括引用回复）
        unsigned int msgType = msgWrap.m_uiMessageType;

        // 支持文本消息、图片消息、表情包消息和引用回复消息
        if (msgType != 1 && msgType != 3 && msgType != 47 && msgType != 49) {
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

        // 图片消息直接允许显示按钮（图片数据可能还在加载中）
        if (msgType == 3) {
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

        // 获取当前用户信息
        CContactMgr *contactMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CContactMgr")];
        if (!contactMgr) return NO;

        CContact *selfContact = [contactMgr getSelfContact];
        if (!selfContact) return NO;

        NSString *selfUserName = selfContact.m_nsUsrName;
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

- (UIButton *)createRepeatButton {
    UIButton *button = [WCPLRepeatButton buttonWithType:UIButtonTypeCustom];
    button.tag = kWCPLRepeatButtonTag;

    // 基础布局 - 稍大的尺寸更易点击
    button.frame = CGRectMake(0, 0, 24, 24);

    // 确保按钮可交互
    button.userInteractionEnabled = YES;
    button.enabled = YES;

    // 现代扁平化背景 (Modern Flat Style)
    button.backgroundColor = [UIColor whiteColor];

    // 阴影与层次感 (Shadow & Depth) - 模仿 iOS 原生控件的悬浮感
    button.layer.shadowColor = [UIColor blackColor].CGColor;
    button.layer.shadowOffset = CGSizeMake(0, 1);  // 向下微小偏移
    button.layer.shadowOpacity = 0.12;             // 低透明度，保持干净
    button.layer.shadowRadius = 3.0;               // 柔和的扩散
    button.layer.masksToBounds = NO;               // 允许阴影显示在边界外

    // 边框与圆角 (Border & Corner)
    button.layer.cornerRadius = 12;  // 圆形 (对应 24x24 尺寸)
    // 极细的灰色描边，增强在白色背景上的可见度
    button.layer.borderWidth = 0.5;
    button.layer.borderColor = [UIColor colorWithWhite:0.0 alpha:0.1].CGColor;

    // 根据配置设置按钮内容
    [self configureButtonContent:button];

    // 添加点击事件 - 使用 sharedManager 确保 target 不会被释放
    [button addTarget:[WCPLMessageReplyManager sharedManager]
               action:@selector(repeatButtonTapped:)
     forControlEvents:UIControlEventTouchUpInside];

    // 添加按压动画事件
    [button addTarget:[WCPLMessageReplyManager sharedManager] action:@selector(animateButtonTouchDown:) forControlEvents:UIControlEventTouchDown];
    [button addTarget:[WCPLMessageReplyManager sharedManager] action:@selector(animateButtonTouchUp:) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];

    NSLog(@"[WCPL] Created repeat button with target: %@", [WCPLMessageReplyManager sharedManager]);

    return button;
}

// 根据配置设置按钮内容（文字/图标/自定义图片）
- (void)configureButtonContent:(UIButton *)button {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSInteger style = config.repeatButtonStyle;

    // 清除之前的内容
    [button setTitle:nil forState:UIControlStateNormal];
    [button setImage:nil forState:UIControlStateNormal];

    // 内置图标列表
    NSArray *builtInIcons = @[@"+1", @"👍", @"❤️", @"😂", @"🔥", @"👏", @"🎉"];

    if (style == 0) {
        // 文字模式 - 使用微信绿色 +1
        UIColor *weChatGreen = [UIColor colorWithRed:7.0/255.0 green:193.0/255.0 blue:96.0/255.0 alpha:1.0];
        [button setTitle:@"+1" forState:UIControlStateNormal];
        [button setTitleColor:weChatGreen forState:UIControlStateNormal];
        button.titleLabel.font = [UIFont systemFontOfSize:11 weight:UIFontWeightMedium];
    } else if (style == 1) {
        // 内置图标模式 - 使用 emoji
        NSInteger iconIndex = config.repeatButtonIconIndex;
        if (iconIndex < 0 || iconIndex >= builtInIcons.count) {
            iconIndex = 0;
        }
        NSString *icon = builtInIcons[iconIndex];

        if ([icon isEqualToString:@"+1"]) {
            // +1 使用文字样式
            UIColor *weChatGreen = [UIColor colorWithRed:7.0/255.0 green:193.0/255.0 blue:96.0/255.0 alpha:1.0];
            [button setTitle:icon forState:UIControlStateNormal];
            [button setTitleColor:weChatGreen forState:UIControlStateNormal];
            button.titleLabel.font = [UIFont systemFontOfSize:11 weight:UIFontWeightMedium];
        } else {
            // emoji 图标
            [button setTitle:icon forState:UIControlStateNormal];
            button.titleLabel.font = [UIFont systemFontOfSize:14];
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
            CGSize targetSize = CGSizeMake(18, 18);
            UIGraphicsBeginImageContextWithOptions(targetSize, NO, 0);
            [customImage drawInRect:CGRectMake(0, 0, targetSize.width, targetSize.height)];
            UIImage *scaledImage = UIGraphicsGetImageFromCurrentImageContext();
            UIGraphicsEndImageContext();

            [button setImage:scaledImage forState:UIControlStateNormal];
            button.imageView.contentMode = UIViewContentModeScaleAspectFit;
        } else {
            // 回退到默认 +1
            UIColor *weChatGreen = [UIColor colorWithRed:7.0/255.0 green:193.0/255.0 blue:96.0/255.0 alpha:1.0];
            [button setTitle:@"+1" forState:UIControlStateNormal];
            [button setTitleColor:weChatGreen forState:UIControlStateNormal];
            button.titleLabel.font = [UIFont systemFontOfSize:11 weight:UIFontWeightMedium];
        }
    } else {
        // 默认 +1
        UIColor *weChatGreen = [UIColor colorWithRed:7.0/255.0 green:193.0/255.0 blue:96.0/255.0 alpha:1.0];
        [button setTitle:@"+1" forState:UIControlStateNormal];
        [button setTitleColor:weChatGreen forState:UIControlStateNormal];
        button.titleLabel.font = [UIFont systemFontOfSize:11 weight:UIFontWeightMedium];
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
        sender.backgroundColor = [UIColor colorWithWhite:0.96 alpha:1.0];  // 稍微变灰
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
        sender.backgroundColor = [UIColor whiteColor];
    } completion:nil];
}

- (void)layoutRepeatButton:(UIButton *)button inCellView:(CommonMessageCellView *)cellView {
    @try {
        UIView *containerView = button.superview ?: cellView;

        // 获取 ViewModel 和 MessageWrap 来判断消息方向
        id viewModel = nil;
        if ([cellView respondsToSelector:@selector(viewModel)]) {
            viewModel = [cellView performSelector:@selector(viewModel)];
        }

        CMessageWrap *msgWrap = nil;
        if (viewModel && [viewModel respondsToSelector:@selector(messageWrap)]) {
            msgWrap = [viewModel performSelector:@selector(messageWrap)];
        }

        if (!msgWrap) {
            button.hidden = YES;
            return;
        }

        // 获取气泡视图
        UIView *bubbleView = [self findBubbleViewInCellView:cellView];

        if (!bubbleView) {
            button.hidden = YES;
            return;
        }

        // 通过判断消息发送者来确定消息方向（更可靠）
        BOOL isFromSelf = [self isMessageFromSelf:msgWrap];

        // 移除旧的约束
        [button removeFromSuperview];
        [containerView addSubview:button];
        button.translatesAutoresizingMaskIntoConstraints = NO;

        // 按钮固定尺寸
        CGFloat buttonSize = 24;

        // 添加尺寸约束
        [button.widthAnchor constraintEqualToConstant:buttonSize].active = YES;
        [button.heightAnchor constraintEqualToConstant:buttonSize].active = YES;

        // 垂直位置：底部与气泡底部对齐
        [button.bottomAnchor constraintEqualToAnchor:bubbleView.bottomAnchor].active = YES;

        if (isFromSelf) {
            // 自己的消息 - 按钮放在气泡左侧外面，紧贴气泡边缘
            [button.trailingAnchor constraintEqualToAnchor:bubbleView.leadingAnchor constant:-2].active = YES;
        } else {
            // 别人的消息 - 按钮放在气泡右侧外面，紧贴气泡边缘
            [button.leadingAnchor constraintEqualToAnchor:bubbleView.trailingAnchor constant:2].active = YES;
        }

        [containerView bringSubviewToFront:button];
        button.hidden = NO;

        // 强制立即更新布局
        [button setNeedsLayout];
        [button layoutIfNeeded];
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in layoutRepeatButton: %@", exception);
        button.hidden = YES;
    }
}

// 查找 m_richTextView（回复文本视图）
- (UIView *)findRichTextViewInCellView:(CommonMessageCellView *)cellView {
    @try {
        // 尝试通过 KVC 获取 m_richTextView
        @try {
            UIView *richTextView = [cellView valueForKey:@"m_richTextView"];
            if (richTextView && !richTextView.hidden && richTextView.frame.size.width > 0) {
                return richTextView;
            }
        }
        @catch (NSException *e) {
            // 忽略 KVC 异常
        }

        // 遍历子视图查找 RichTextView（不是 MMInputMsgReferView 里的）
        return [self findMainRichTextViewInView:cellView excludeReferView:YES];
    }
    @catch (NSException *exception) {
        return nil;
    }
}

// 递归查找主要的 RichTextView（排除引用视图内的）
- (UIView *)findMainRichTextViewInView:(UIView *)view excludeReferView:(BOOL)exclude {
    @try {
        for (UIView *subview in view.subviews) {
            if (subview.hidden) continue;
            if (subview.tag == kWCPLRepeatButtonTag) continue;

            NSString *className = NSStringFromClass([subview class]);

            // 跳过引用消息视图
            if (exclude && [className containsString:@"MsgRefer"]) {
                continue;
            }

            // 找到 RichTextView
            if ([className isEqualToString:@"RichTextView"]) {
                return subview;
            }

            // 递归查找（但不进入引用视图）
            if (exclude && [className containsString:@"MsgRefer"]) {
                continue;
            }

            UIView *found = [self findMainRichTextViewInView:subview excludeReferView:exclude];
            if (found) return found;
        }
        return nil;
    }
    @catch (NSException *exception) {
        return nil;
    }
}

- (UIView *)findBubbleViewInCellView:(CommonMessageCellView *)cellView {
    @try {
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

- (BOOL)isSelfMessage:(CMessageWrap *)msgWrap {
    @try {
        // 获取当前用户信息
        id serviceCenter = [objc_getClass("MMServiceCenter") defaultCenter];
        if (!serviceCenter) return NO;

        id contactMgr = [serviceCenter getService:objc_getClass("CContactMgr")];
        if (!contactMgr) return NO;

        CContact *selfContact = [contactMgr performSelector:@selector(getSelfContact)];
        if (!selfContact) return NO;

        NSString *selfUserName = selfContact.m_nsUsrName;
        NSString *fromUser = msgWrap.m_nsFromUsr;

        // 直接比较发送者
        if ([fromUser isEqualToString:selfUserName]) {
            return YES;
        }

        // 群聊中检查实际发送者
        NSString *realChatUser = msgWrap.m_nsRealChatUsr;
        if (realChatUser && [realChatUser isEqualToString:selfUserName]) {
            return YES;
        }

        return NO;
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in isSelfMessage: %@", exception);
        return NO;
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
                id toolView = nil;
                @try {
                    if ([viewController respondsToSelector:@selector(toolView)]) {
                        toolView = [viewController performSelector:@selector(toolView)];
                    }
                }
                @catch (NSException *e) {}

                if (!toolView) {
                    @try {
                        toolView = [viewController valueForKey:@"m_inputToolView"];
                    }
                    @catch (NSException *e) {}
                }

                if (toolView) {
                    // 方法1：使用 setReplyingMessage: 设置引用，然后 sendMsgWithText: 发送
                    SEL setReplyingMsgSel = @selector(setReplyingMessage:);
                    SEL sendMsgSel = @selector(sendMsgWithText:);
                    SEL resetReplySel = @selector(resetReplyMessage);
                    SEL clearReferSel = @selector(onClearInputMsgRefer);

                    if ([toolView respondsToSelector:setReplyingMsgSel] &&
                        [toolView respondsToSelector:sendMsgSel]) {
                        NSLog(@"[WCPL] Using setReplyingMessage: + sendMsgWithText:");

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
                        // 设置引用消息
                        [toolView performSelector:setReplyingMsgSel withObject:referredMsg];
                        // 发送文本
                        [toolView performSelector:sendMsgSel withObject:content];

                        // 清除引用状态 - 尝试多种方法
                        // 方法1: 设置 nil
                        [toolView performSelector:setReplyingMsgSel withObject:nil];
                        // 方法2: resetReplyMessage
                        if ([toolView respondsToSelector:resetReplySel]) {
                            [toolView performSelector:resetReplySel];
                        }
                        // 方法3: onClearInputMsgRefer
                        if ([toolView respondsToSelector:clearReferSel]) {
                            [toolView performSelector:clearReferSel];
                        }
#pragma clang diagnostic pop
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
                        if ([toolView respondsToSelector:sendMsgSel]) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
                            [toolView performSelector:sendMsgSel withObject:content];
                            // 清除引用状态
                            [toolView performSelector:setReplyingMsgSel withObject:nil];
                            if ([toolView respondsToSelector:resetReplySel]) {
                                [toolView performSelector:resetReplySel];
                            }
                            if ([toolView respondsToSelector:clearReferSel]) {
                                [toolView performSelector:clearReferSel];
                            }
#pragma clang diagnostic pop
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
        id toolView = nil;
        if ([viewController respondsToSelector:@selector(toolView)]) {
            toolView = [viewController performSelector:@selector(toolView)];
        }

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
        if ([WCPLRedEnvelopConfig sharedConfig].repeatButtonHapticEnable) {
            UIImpactFeedbackGenerator *generator = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
            [generator prepare];
            [generator impactOccurred];
        }

        NSString *content = objc_getAssociatedObject(sender, &kRepeatContentKey);
        CMessageWrap *msgWrap = objc_getAssociatedObject(sender, &kRepeatMsgWrapKey);

        // 关闭"调试信息弹窗"时，点击直接复读，仅保留日志输出（默认关闭弹窗）
        BOOL shouldShowDebugAlert = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLRepeatDebugAlertEnabledKey];
        if (!shouldShowDebugAlert) {
            if (!msgWrap) {
                WCPLLog(@"Repeat tapped but msgWrap is nil");
                return;
            }

            BaseMsgContentViewController *viewController = [self findViewControllerFromView:sender];
            if (!viewController) {
                WCPLLog(@"Repeat tapped but cannot find viewController");
                return;
            }

            BOOL isEmoticonMessage = (msgWrap.m_uiMessageType == 47);
            if (isEmoticonMessage) {
                NSString *execLog = [self handleRepeatEmoticonMessage:msgWrap viewController:viewController];
                WCPLLog(@"Emoticon repeat executed:\n%@", execLog);
                return;
            }

            BOOL isImageMessage = (msgWrap.m_uiMessageType == 3);
            if (isImageMessage) {
                NSString *execLog = [self handleRepeatImageMessage:msgWrap viewController:viewController];
                WCPLLog(@"Image repeat executed:\n%@", execLog);
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

        // 检查是否是表情包/图片消息
        BOOL isEmoticonMessage = (msgWrap && msgWrap.m_uiMessageType == 47);
        BOOL isImageMessage = (msgWrap && msgWrap.m_uiMessageType == 3);
        [debugInfo appendFormat:@"4. 是否表情包: %@\n", isEmoticonMessage ? @"是" : @"否"];
        [debugInfo appendFormat:@"4.1 是否图片: %@\n", isImageMessage ? @"是" : @"否"];

        if (!isEmoticonMessage && !isImageMessage && (!content || content.length == 0)) {
            [debugInfo appendString:@"\n❌ 错误: 非表情包/图片消息且无文本内容"];
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
        if ([viewController respondsToSelector:@selector(GetContact)]) {
            CContact *contact = [viewController performSelector:@selector(GetContact)];
            if (contact) {
                toUserName = contact.m_nsUsrName;
            }
        }
        [debugInfo appendFormat:@"8. 聊天对象: %@\n", toUserName ?: @"nil"];

        // 检查 logicController
        id logicController = nil;
        if ([viewController respondsToSelector:@selector(m_logicController)]) {
            logicController = [viewController performSelector:@selector(m_logicController)];
        }
        if (!logicController && [viewController respondsToSelector:NSSelectorFromString(@"logicController")]) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
            logicController = [viewController performSelector:NSSelectorFromString(@"logicController")];
#pragma clang diagnostic pop
        }
        [debugInfo appendFormat:@"9. LogicController: %@\n", logicController ? NSStringFromClass([logicController class]) : @"nil"];

        // 检查发送方法
        BOOL hasSendEmoticon = logicController && [logicController respondsToSelector:@selector(SendEmoticonMessage:)];
        [debugInfo appendFormat:@"10. 有SendEmoticonMessage方法: %@\n", hasSendEmoticon ? @"是" : @"否"];
        BOOL hasSendEmoticonToolView = [viewController respondsToSelector:@selector(SendEmoticonMesssageToolView:)];
        [debugInfo appendFormat:@"10.1 有SendEmoticonMesssageToolView方法: %@\n", hasSendEmoticonToolView ? @"是" : @"否"];

        // 检查 CEmoticonMgr
        id emoticonMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CEmoticonMgr")];
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
                CEmoticonWrap *emoticonWrap = [emoticonMgr performSelector:@selector(getEmoticonWrapByMd5:) withObject:bestMD5];
                [debugInfo appendFormat:@"13. EmoticonWrap: %@\n", emoticonWrap ? @"获取成功" : @"nil"];
            }
        }

        // 检查 CMessageMgr
        id msgMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CMessageMgr")];
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

// 判断消息是否为自己发送的
- (BOOL)isMessageFromSelf:(CMessageWrap *)msgWrap {
    @try {
        if (!msgWrap) return NO;

        // 获取联系人管理器
        id contactManager = [[objc_getClass("MMServiceCenter") defaultCenter]
                            getService:objc_getClass("CContactMgr")];
        if (!contactManager) return NO;

        // 获取自己的联系人信息
        CContact *selfContact = [contactManager getSelfContact];
        if (!selfContact || !selfContact.m_nsUsrName) return NO;

        // 比较消息发送者和自己的用户名
        return [msgWrap.m_nsFromUsr isEqualToString:selfContact.m_nsUsrName];
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
        NSString *toUserName = nil;
        if ([viewController respondsToSelector:@selector(GetContact)]) {
            CContact *contact = [viewController performSelector:@selector(GetContact)];
            if (contact) {
                toUserName = contact.m_nsUsrName;
            }
        }

        if (!toUserName || toUserName.length == 0) {
            // 回退：从 msgWrap 推导聊天对象
            BOOL isFromSelf = [self isMessageFromSelf:msgWrap];
            toUserName = isFromSelf ? msgWrap.m_nsToUsr : msgWrap.m_nsFromUsr;
            if (toUserName && toUserName.length > 0) {
                [execLog appendFormat:@"✓ 从消息推导聊天对象: %@\n", toUserName];
            }
        }

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

        // 方法1: 通过 EmoticonWrap 发送
        if (emoticonMD5 && emoticonMD5.length > 0) {
            [execLog appendString:@"\n尝试方法1: EmoticonWrap\n"];
            id emoticonMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CEmoticonMgr")];
            if (emoticonMgr && [emoticonMgr respondsToSelector:@selector(getEmoticonWrapByMd5:)]) {
                CEmoticonWrap *emoticonWrap = nil;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
                emoticonWrap = [emoticonMgr performSelector:@selector(getEmoticonWrapByMd5:) withObject:emoticonMD5];
#pragma clang diagnostic pop

                // 兼容：尝试通过 msgWrap / content 获取 EmoticonWrap（不同版本可能存在）
                if (!emoticonWrap) {
                    SEL byMsgWrapSel = NSSelectorFromString(@"getEmoticonWrapByMessageWrap:");
                    if ([emoticonMgr respondsToSelector:byMsgWrapSel]) {
                        [execLog appendString:@"- 通过getEmoticonWrapByMessageWrap尝试\n"];
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
                        emoticonWrap = [emoticonMgr performSelector:byMsgWrapSel withObject:msgWrap];
#pragma clang diagnostic pop
                    }
                }
                if (!emoticonWrap) {
                    SEL byContentSel = NSSelectorFromString(@"getEmoticonWrapByContent:");
                    if (content && content.length > 0 && [emoticonMgr respondsToSelector:byContentSel]) {
                        [execLog appendString:@"- 通过getEmoticonWrapByContent尝试\n"];
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
                        emoticonWrap = [emoticonMgr performSelector:byContentSel withObject:content];
#pragma clang diagnostic pop
                    }
                }

                if (emoticonWrap) {
                    [execLog appendString:@"✓ 获取到EmoticonWrap\n"];

                    if ([viewController respondsToSelector:@selector(m_logicController)]) {
                        id logicController = [viewController performSelector:@selector(m_logicController)];
                        if (logicController && [logicController respondsToSelector:@selector(SendEmoticonMessage:)]) {
                            [logicController performSelector:@selector(SendEmoticonMessage:) withObject:emoticonWrap];
                            [execLog appendString:@"✅ 通过logicController发送成功\n"];
                            return execLog;
                        }
                    }

                    if ([viewController respondsToSelector:@selector(SendEmoticonMesssageToolView:)]) {
                        [viewController performSelector:@selector(SendEmoticonMesssageToolView:) withObject:emoticonWrap];
                        [execLog appendString:@"✅ 通过ViewController发送成功\n"];
                        return execLog;
                    }
                } else {
                    [execLog appendString:@"✗ EmoticonWrap为nil\n"];
                }
            }
        }

        // 方法2: 通过 InputToolView 发送文本形式（表情包发送失败的回退方案已禁用，避免发送 XML）
        [execLog appendString:@"\n❌ 方法1失败，表情包复读不可用\n"];
        [execLog appendString:@"提示: 该表情包可能未下载或已过期\n"];

        return execLog;
    }
    @catch (NSException *exception) {
        [execLog appendFormat:@"❌ 异常: %@\n", exception];
        return execLog;
    }
}

- (NSString *)handleRepeatImageMessage:(CMessageWrap *)msgWrap viewController:(BaseMsgContentViewController *)viewController {
    NSMutableString *execLog = [NSMutableString string];

    @try {
        if (!msgWrap || !viewController) {
            [execLog appendString:@"❌ 参数无效\n"];
            return execLog;
        }

        NSString *toUserName = nil;
        if ([viewController respondsToSelector:@selector(GetContact)]) {
            CContact *contact = [viewController performSelector:@selector(GetContact)];
            if (contact) {
                toUserName = contact.m_nsUsrName;
            }
        }

        if (!toUserName || toUserName.length == 0) {
            BOOL isFromSelf = [self isMessageFromSelf:msgWrap];
            toUserName = isFromSelf ? msgWrap.m_nsToUsr : msgWrap.m_nsFromUsr;
            if (toUserName.length > 0) {
                [execLog appendFormat:@"✓ 从消息推导聊天对象: %@\n", toUserName];
            }
        }

        if (!toUserName || toUserName.length == 0) {
            [execLog appendString:@"❌ 无法获取聊天对象\n"];
            return execLog;
        }
        [execLog appendFormat:@"✓ 聊天对象: %@\n", toUserName];

        // 尝试通过 CMessageMgr 的 ReSendMessage 直接重发
        @try {
            id msgMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CMessageMgr")];
            if (msgMgr && [msgMgr respondsToSelector:@selector(ReSendMessage:MsgWrap:)]) {
                [execLog appendString:@"✓ 尝试使用 CMessageMgr.ReSendMessage 重发图片\n"];
                BOOL result = NO;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
                result = [[msgMgr performSelector:@selector(ReSendMessage:MsgWrap:)
                                       withObject:toUserName
                                       withObject:msgWrap] boolValue];
#pragma clang diagnostic pop
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

        id toolView = [self wcpl_inputToolViewFromViewController:viewController];
        id logicController = nil;
        if ([viewController respondsToSelector:@selector(m_logicController)]) {
            logicController = [viewController performSelector:@selector(m_logicController)];
        }
        if (!logicController) {
            @try {
                logicController = [viewController valueForKey:@"m_logicController"];
            }
            @catch (__unused NSException *exception) {
            }
        }

        id msgMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CMessageMgr")];

        BOOL sent = NO;
        // 优先尝试 LogicController (最可能有 SendImageMessage:withData:ImageInfo:)
        sent = [self wcpl_trySendImageWithTarget:logicController
                                           name:@"LogicController"
                                          image:image
                                      imageData:imageData
                                      imagePath:expandedPath
                                         toUser:toUserName
                                        execLog:execLog];
        if (!sent) {
            sent = [self wcpl_trySendImageWithTarget:toolView
                                               name:@"InputToolView"
                                              image:image
                                          imageData:imageData
                                          imagePath:expandedPath
                                             toUser:toUserName
                                            execLog:execLog];
        }
        if (!sent) {
            sent = [self wcpl_trySendImageWithTarget:viewController
                                               name:@"ViewController"
                                              image:image
                                          imageData:imageData
                                          imagePath:expandedPath
                                             toUser:toUserName
                                            execLog:execLog];
        }
        if (!sent) {
            sent = [self wcpl_trySendImageWithTarget:msgMgr
                                               name:@"CMessageMgr"
                                              image:image
                                          imageData:imageData
                                          imagePath:expandedPath
                                             toUser:toUserName
                                            execLog:execLog];
        }

        if (!sent) {
            [execLog appendString:@"❌ 未找到可用的图片发送方法\n"];
        }

        return execLog;
    }
    @catch (NSException *exception) {
        [execLog appendFormat:@"❌ 异常: %@\n", exception];
        return execLog;
    }
}

// 从消息内容 XML 中解析表情包 MD5
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

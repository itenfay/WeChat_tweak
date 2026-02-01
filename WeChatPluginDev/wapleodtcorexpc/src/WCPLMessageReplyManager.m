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
#import "WCPLRedEnvelopConfig.h"
#import "WeChatRedEnvelop.h"
#import <objc/runtime.h>

// 关联对象的 key
static char kRepeatContentKey;
static char kRepeatViewControllerKey;

@implementation WCPLMessageReplyManager

+ (WCPLMessageReplyManager *)sharedManager {
    static WCPLMessageReplyManager *manager;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [WCPLMessageReplyManager new];
    });
    return manager;
}

#pragma mark - Public Methods

- (void)addRepeatButtonToCellView:(CommonMessageCellView *)cellView {
    if (!cellView) return;

    // 检查功能是否启用
    if (![WCPLRedEnvelopConfig sharedConfig].messageReplyEnable) {
        [self removeRepeatButtonFromCellView:cellView];
        return;
    }

    // 获取 ViewModel 和 MessageWrap
    id viewModel = [cellView valueForKey:@"viewModel"];
    if (!viewModel) {
        [self removeRepeatButtonFromCellView:cellView];
        return;
    }

    CMessageWrap *msgWrap = [viewModel valueForKey:@"messageWrap"];
    if (!msgWrap) {
        // 尝试其他属性名
        msgWrap = [viewModel valueForKey:@"m_msgWrap"];
    }
    if (!msgWrap) {
        [self removeRepeatButtonFromCellView:cellView];
        return;
    }

    // 检查是否可以复读
    if (![self canRepeatMessage:msgWrap]) {
        [self removeRepeatButtonFromCellView:cellView];
        return;
    }

    // 获取消息内容
    NSString *content = [self getMessageContent:msgWrap];
    if (!content || content.length == 0) {
        [self removeRepeatButtonFromCellView:cellView];
        return;
    }

    // 查找或创建复读按钮
    UIButton *repeatButton = [cellView viewWithTag:kWCPLRepeatButtonTag];
    if (!repeatButton) {
        repeatButton = [self createRepeatButton];
        [cellView addSubview:repeatButton];
    }

    // 关联消息内容
    objc_setAssociatedObject(repeatButton, &kRepeatContentKey, content, OBJC_ASSOCIATION_COPY_NONATOMIC);

    // 定位按钮到消息气泡旁边
    [self layoutRepeatButton:repeatButton inCellView:cellView];

    repeatButton.hidden = NO;
    repeatButton.alpha = 1.0;

    NSLog(@"[WCPL] Repeat button added for message: %@", [content substringToIndex:MIN(20, content.length)]);
}

- (void)removeRepeatButtonFromCellView:(CommonMessageCellView *)cellView {
    if (!cellView) return;

    UIButton *repeatButton = [cellView viewWithTag:kWCPLRepeatButtonTag];
    if (repeatButton) {
        repeatButton.hidden = YES;
    }
}

- (void)handleRepeatButtonTapWithContent:(NSString *)content
                          viewController:(BaseMsgContentViewController *)viewController {
    if (!content || content.length == 0) {
        NSLog(@"[WCPL] No content to repeat");
        return;
    }

    if (!viewController) {
        NSLog(@"[WCPL] No view controller to send message");
        return;
    }

    NSLog(@"[WCPL] Repeating message: %@", content);

    // 获取 LogicController
    id delegate = [viewController valueForKey:@"m_delegate"];
    if (!delegate) {
        delegate = [viewController valueForKey:@"delegate"];
    }

    // 尝试通过 LogicController 发送消息
    if (delegate && [delegate respondsToSelector:@selector(SendTextMessage:)]) {
        [delegate performSelector:@selector(SendTextMessage:) withObject:content];
        NSLog(@"[WCPL] Message sent via delegate");
        return;
    }

    // 尝试直接调用 ViewController 的方法
    SEL sendSelector = NSSelectorFromString(@"SendTextMessageToolView:");
    if ([viewController respondsToSelector:sendSelector]) {
        #pragma clang diagnostic push
        #pragma clang diagnostic ignored "-Warc-performSelector-leaks"
        [viewController performSelector:sendSelector withObject:content];
        #pragma clang diagnostic pop
        NSLog(@"[WCPL] Message sent via SendTextMessageToolView");
        return;
    }

    // 尝试通过输入框发送
    [self sendMessageViaInputToolView:content viewController:viewController];
}

- (BOOL)canRepeatMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return NO;

    // 获取消息类型 (1 = 文本消息)
    unsigned int msgType = msgWrap.m_uiMessageType;
    if (msgType != 1) {
        return NO;
    }

    // 检查是否是自己发送的消息
    if ([self isSelfMessage:msgWrap]) {
        return NO;
    }

    return YES;
}

- (NSString *)getMessageContent:(CMessageWrap *)msgWrap {
    if (!msgWrap) return nil;

    NSString *content = msgWrap.m_nsContent;

    // 如果内容为空，尝试其他属性
    if (!content || content.length == 0) {
        content = [msgWrap valueForKey:@"m_nsContent"];
    }

    return content;
}

#pragma mark - Private Methods

- (UIButton *)createRepeatButton {
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.tag = kWCPLRepeatButtonTag;
    button.frame = CGRectMake(0, 0, 28, 28);

    // 设置样式 - 圆形蓝色按钮
    button.backgroundColor = [UIColor colorWithRed:0.0 green:0.48 blue:1.0 alpha:0.9];
    button.layer.cornerRadius = 14.0;
    button.layer.masksToBounds = YES;

    // 设置标题
    button.titleLabel.font = [UIFont boldSystemFontOfSize:12];
    [button setTitle:@"+1" forState:UIControlStateNormal];
    [button setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];

    // 添加点击事件
    [button addTarget:self
               action:@selector(repeatButtonTapped:)
     forControlEvents:UIControlEventTouchUpInside];

    // 添加阴影效果
    button.layer.shadowColor = [UIColor blackColor].CGColor;
    button.layer.shadowOffset = CGSizeMake(0, 1);
    button.layer.shadowOpacity = 0.2;
    button.layer.shadowRadius = 2;
    button.layer.masksToBounds = NO;

    return button;
}

- (void)layoutRepeatButton:(UIButton *)button inCellView:(CommonMessageCellView *)cellView {
    // 获取气泡视图的 frame
    CGRect bubbleFrame = [self getBubbleFrameFromCellView:cellView];

    if (CGRectIsEmpty(bubbleFrame)) {
        // 如果找不到气泡，使用默认位置
        button.frame = CGRectMake(cellView.bounds.size.width - 40,
                                  cellView.bounds.size.height / 2 - 14,
                                  28, 28);
        return;
    }

    // 判断消息方向（左边是别人的消息）
    BOOL isLeftMessage = bubbleFrame.origin.x < cellView.bounds.size.width / 2;

    CGFloat buttonX;
    CGFloat buttonY = CGRectGetMidY(bubbleFrame) - 14;

    if (isLeftMessage) {
        // 别人的消息 - 按钮放在气泡右侧
        buttonX = CGRectGetMaxX(bubbleFrame) + 8;
    } else {
        // 自己的消息 - 按钮放在气泡左侧（但通常不会显示）
        buttonX = bubbleFrame.origin.x - 36;
    }

    // 确保按钮不超出边界
    buttonX = MAX(8, MIN(buttonX, cellView.bounds.size.width - 36));
    buttonY = MAX(8, MIN(buttonY, cellView.bounds.size.height - 36));

    button.frame = CGRectMake(buttonX, buttonY, 28, 28);
}

- (CGRect)getBubbleFrameFromCellView:(CommonMessageCellView *)cellView {
    // 尝试获取气泡视图
    UIView *bgImageView = [cellView valueForKey:@"m_bgImageView"];
    if (bgImageView && !bgImageView.hidden) {
        return bgImageView.frame;
    }

    // 尝试获取 bubbleBorderFrame
    NSValue *frameValue = [cellView valueForKey:@"m_bubbleBorderFrame"];
    if (frameValue) {
        return [frameValue CGRectValue];
    }

    // 遍历子视图查找气泡
    for (UIView *subview in cellView.subviews) {
        NSString *className = NSStringFromClass([subview class]);
        if ([className containsString:@"Bubble"] ||
            [className containsString:@"BgImage"] ||
            [className containsString:@"RichText"]) {
            if (subview.frame.size.width > 50 && subview.frame.size.height > 20) {
                return subview.frame;
            }
        }
    }

    // 查找 YYAsyncImageView (气泡背景)
    for (UIView *subview in cellView.subviews) {
        if ([subview isKindOfClass:NSClassFromString(@"YYAsyncImageView")]) {
            if (subview.frame.size.width > 50 && subview.frame.size.height > 20) {
                return subview.frame;
            }
        }
    }

    return CGRectZero;
}

- (BOOL)isSelfMessage:(CMessageWrap *)msgWrap {
    // 获取当前用户信息
    CContactMgr *contactMgr = [[objc_getClass("MMServiceCenter") defaultCenter]
                               getService:[objc_getClass("CContactMgr") class]];
    CContact *selfContact = [contactMgr getSelfContact];

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

    // 使用微信的方法判断
    if ([objc_getClass("CMessageWrap") respondsToSelector:@selector(isSenderFromMsgWrap:)]) {
        return [objc_getClass("CMessageWrap") isSenderFromMsgWrap:msgWrap];
    }

    return NO;
}

- (void)sendMessageViaInputToolView:(NSString *)content
                     viewController:(BaseMsgContentViewController *)viewController {
    // 获取输入框
    id toolView = [viewController valueForKey:@"_inputToolView"];
    if (!toolView) {
        toolView = [viewController valueForKey:@"toolView"];
    }
    if (!toolView) {
        toolView = [viewController valueForKey:@"m_inputToolView"];
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
        [self triggerSendInToolView:toolView viewController:viewController];
    });
}

- (UITextView *)findTextViewInView:(UIView *)view {
    for (UIView *subview in view.subviews) {
        if ([subview isKindOfClass:[UITextView class]]) {
            return (UITextView *)subview;
        }
        UITextView *found = [self findTextViewInView:subview];
        if (found) return found;
    }
    return nil;
}

- (void)triggerSendInToolView:(id)toolView viewController:(BaseMsgContentViewController *)viewController {
    // 尝试调用发送方法
    SEL sendSelector = NSSelectorFromString(@"onSendTextMsg:");
    if ([viewController respondsToSelector:sendSelector]) {
        id textView = [self findTextViewInView:toolView];
        NSString *text = [textView text];
        #pragma clang diagnostic push
        #pragma clang diagnostic ignored "-Warc-performSelector-leaks"
        [viewController performSelector:sendSelector withObject:text];
        #pragma clang diagnostic pop
        return;
    }

    // 查找并点击发送按钮
    UIButton *sendButton = [self findSendButtonInView:toolView];
    if (sendButton && sendButton.enabled) {
        [sendButton sendActionsForControlEvents:UIControlEventTouchUpInside];
    }
}

- (UIButton *)findSendButtonInView:(UIView *)view {
    for (UIView *subview in view.subviews) {
        if ([subview isKindOfClass:[UIButton class]]) {
            UIButton *button = (UIButton *)subview;
            NSString *title = [button titleForState:UIControlStateNormal];
            if ([title isEqualToString:@"发送"] ||
                [title isEqualToString:@"Send"] ||
                [title containsString:@"发送"]) {
                return button;
            }
        }
        UIButton *found = [self findSendButtonInView:subview];
        if (found) return found;
    }
    return nil;
}

#pragma mark - Button Action

- (void)repeatButtonTapped:(UIButton *)sender {
    NSString *content = objc_getAssociatedObject(sender, &kRepeatContentKey);

    if (!content || content.length == 0) {
        NSLog(@"[WCPL] No content associated with repeat button");
        return;
    }

    // 向上查找 ViewController
    BaseMsgContentViewController *viewController = [self findViewControllerFromView:sender];

    if (viewController) {
        [self handleRepeatButtonTapWithContent:content viewController:viewController];
    } else {
        NSLog(@"[WCPL] Could not find view controller for repeat action");
    }
}

- (BaseMsgContentViewController *)findViewControllerFromView:(UIView *)view {
    UIResponder *responder = view;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            if ([responder isKindOfClass:objc_getClass("BaseMsgContentViewController")]) {
                return (BaseMsgContentViewController *)responder;
            }
        }
        responder = [responder nextResponder];
    }
    return nil;
}

@end

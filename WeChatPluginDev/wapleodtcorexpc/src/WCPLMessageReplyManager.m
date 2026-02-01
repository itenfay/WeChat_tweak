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
    @try {
        if (!cellView) return;

        // 检查功能是否启用
        if (![WCPLRedEnvelopConfig sharedConfig].messageReplyEnable) {
            [self removeRepeatButtonFromCellView:cellView];
            return;
        }

        // 安全获取 ViewModel
        id viewModel = nil;
        if ([cellView respondsToSelector:@selector(viewModel)]) {
            viewModel = [cellView performSelector:@selector(viewModel)];
        }
        if (!viewModel) {
            [self removeRepeatButtonFromCellView:cellView];
            return;
        }

        // 安全获取 MessageWrap
        CMessageWrap *msgWrap = nil;
        if ([viewModel respondsToSelector:@selector(messageWrap)]) {
            msgWrap = [viewModel performSelector:@selector(messageWrap)];
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
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in addRepeatButtonToCellView: %@", exception);
    }
}

- (void)removeRepeatButtonFromCellView:(CommonMessageCellView *)cellView {
    @try {
        if (!cellView) return;

        UIButton *repeatButton = [cellView viewWithTag:kWCPLRepeatButtonTag];
        if (repeatButton) {
            repeatButton.hidden = YES;
        }
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in removeRepeatButtonFromCellView: %@", exception);
    }
}

- (void)handleRepeatButtonTapWithContent:(NSString *)content
                          viewController:(BaseMsgContentViewController *)viewController {
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

        // 尝试通过输入框发送
        [self sendMessageViaInputToolView:content viewController:viewController];
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in handleRepeatButtonTapWithContent: %@", exception);
    }
}

- (BOOL)canRepeatMessage:(CMessageWrap *)msgWrap {
    @try {
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
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in canRepeatMessage: %@", exception);
        return NO;
    }
}

- (NSString *)getMessageContent:(CMessageWrap *)msgWrap {
    @try {
        if (!msgWrap) return nil;
        return msgWrap.m_nsContent;
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in getMessageContent: %@", exception);
        return nil;
    }
}

#pragma mark - Private Methods

- (UIButton *)createRepeatButton {
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.tag = kWCPLRepeatButtonTag;
    button.frame = CGRectMake(0, 0, 28, 18);

    // 设置样式 - 透明背景
    button.backgroundColor = [UIColor clearColor];

    // 设置标题 - 灰色文字
    button.titleLabel.font = [UIFont systemFontOfSize:11];
    [button setTitle:@"+1" forState:UIControlStateNormal];
    [button setTitleColor:[UIColor grayColor] forState:UIControlStateNormal];

    // 添加点击事件
    [button addTarget:self
               action:@selector(repeatButtonTapped:)
     forControlEvents:UIControlEventTouchUpInside];

    return button;
}

- (void)layoutRepeatButton:(UIButton *)button inCellView:(CommonMessageCellView *)cellView {
    @try {
        // 获取气泡视图
        UIView *bubbleView = [self findBubbleViewInCellView:cellView];

        if (!bubbleView) {
            button.hidden = YES;
            return;
        }

        CGRect bubbleFrame = bubbleView.frame;

        // 判断消息方向（左边是别人的消息）
        // 别人的消息气泡通常在左侧，x 坐标较小
        BOOL isLeftMessage = bubbleFrame.origin.x < 100;

        if (!isLeftMessage) {
            // 自己的消息 - 不显示
            button.hidden = YES;
            return;
        }

        // 别人的消息 - 按钮放在气泡右侧
        CGFloat buttonX = CGRectGetMaxX(bubbleFrame) + 2;
        CGFloat buttonY = CGRectGetMaxY(bubbleFrame) - 18;

        button.frame = CGRectMake(buttonX, buttonY, 28, 18);
        button.hidden = NO;
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in layoutRepeatButton: %@", exception);
        button.hidden = YES;
    }
}

- (UIView *)findBubbleViewInCellView:(CommonMessageCellView *)cellView {
    @try {
        // 遍历子视图查找气泡
        UIView *bestView = nil;
        CGFloat maxArea = 0;

        for (UIView *subview in cellView.subviews) {
            if (subview.hidden) continue;
            if (subview.tag == kWCPLRepeatButtonTag) continue; // 跳过我们的按钮

            CGFloat area = subview.frame.size.width * subview.frame.size.height;

            // 气泡通常是较大的视图
            if (area > 1000 && area > maxArea) {
                NSString *className = NSStringFromClass([subview class]);

                // 排除头像等小视图
                if (![className containsString:@"HeadImage"] &&
                    ![className containsString:@"Avatar"] &&
                    subview.frame.size.width > 40 &&
                    subview.frame.size.height > 20) {

                    maxArea = area;
                    bestView = subview;
                }
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
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            [self triggerSendInToolView:toolView];
        });
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in sendMessageViaInputToolView: %@", exception);
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
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in repeatButtonTapped: %@", exception);
    }
}

- (BaseMsgContentViewController *)findViewControllerFromView:(UIView *)view {
    @try {
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
    @catch (NSException *exception) {
        return nil;
    }
}

@end

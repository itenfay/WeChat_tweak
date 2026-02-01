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
static char kRepeatMsgWrapKey;

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

        // 获取消息内容 - 优先从 ViewModel 的 contentText 获取（用于引用回复消息）
        NSString *content = nil;
        if ([viewModel respondsToSelector:@selector(contentText)]) {
            content = [viewModel performSelector:@selector(contentText)];
        }
        // 如果 contentText 为空，回退到 msgWrap.m_nsContent
        if (!content || content.length == 0) {
            content = [self getMessageContent:msgWrap];
        }
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

        // 关联消息内容和 msgWrap
        objc_setAssociatedObject(repeatButton, &kRepeatContentKey, content, OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(repeatButton, &kRepeatMsgWrapKey, msgWrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

        // 定位按钮到消息气泡旁边（对于引用回复消息，定位到回复文本旁边）
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
        // 49 = 应用消息（包括引用回复）
        unsigned int msgType = msgWrap.m_uiMessageType;

        // 支持文本消息和引用回复消息
        if (msgType != 1 && msgType != 49) {
            return NO;
        }

        // 如果是应用消息(49)，检查是否是引用回复
        if (msgType == 49) {
            if (![self isQuoteReplyMessage:msgWrap]) {
                return NO;
            }
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
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.tag = kWCPLRepeatButtonTag;
    button.frame = CGRectMake(0, 0, 20, 20);

    // 透明背景
    button.backgroundColor = [UIColor clearColor];

    // 黑色圆圈边框 - 刚好包围+1
    button.layer.borderColor = [UIColor blackColor].CGColor;
    button.layer.borderWidth = 1.0;
    button.layer.cornerRadius = 10;  // 圆形

    // 设置标题 - 黑色文字
    button.titleLabel.font = [UIFont boldSystemFontOfSize:10];
    [button setTitle:@"+1" forState:UIControlStateNormal];
    [button setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];

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

        // 将气泡坐标转换到 cellView 坐标系
        CGRect bubbleFrame = bubbleView.frame;
        if (bubbleView.superview != cellView) {
            bubbleFrame = [bubbleView.superview convertRect:bubbleView.frame toView:cellView];
        }

        // 判断消息方向（左边是别人的消息，右边是自己的消息）
        BOOL isLeftMessage = bubbleFrame.origin.x < 100;

        // 按钮固定尺寸
        CGFloat buttonSize = 20;

        CGFloat buttonX;
        CGFloat buttonY = CGRectGetMaxY(bubbleFrame) - buttonSize;  // 底部与气泡底部对齐

        if (isLeftMessage) {
            // 别人的消息 - 按钮放在气泡右侧外面，紧贴气泡边缘
            buttonX = CGRectGetMaxX(bubbleFrame) + 2;
        } else {
            // 自己的消息 - 按钮放在气泡左侧外面，紧贴气泡边缘
            buttonX = bubbleFrame.origin.x - buttonSize - 2;
        }

        button.frame = CGRectMake(buttonX, buttonY, buttonSize, buttonSize);
        button.hidden = NO;
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
        // 尝试获取 logicController 直接发送消息
        id logicController = nil;
        if ([viewController respondsToSelector:@selector(m_logicController)]) {
            logicController = [viewController valueForKey:@"m_logicController"];
        }

        if (logicController && [logicController respondsToSelector:@selector(SendTextMessage:)]) {
            // 检查原消息是否有引用（referingMessageWrap）
            CMessageWrap *referMsg = nil;
            if (originalMsgWrap) {
                @try {
                    referMsg = [originalMsgWrap valueForKey:@"referingMessageWrap"];
                }
                @catch (NSException *e) {
                    // 忽略
                }
            }

            if (referMsg && [logicController respondsToSelector:@selector(SendTextMessage:replyingMessage:isPasted:)]) {
                // 带引用发送 - 使用原消息的引用
                NSLog(@"[WCPL] Sending with same reference as original message");
                [logicController SendTextMessage:content replyingMessage:referMsg isPasted:NO];
            } else {
                // 普通发送
                NSLog(@"[WCPL] Sending plain text");
                [logicController SendTextMessage:content];
            }
            return;
        }

        // 回退方案：通过输入框发送
        NSLog(@"[WCPL] Fallback to input method");
        [self sendMessageViaInputFallback:content viewController:viewController];
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in sendMessageViaInputToolView: %@", exception);
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
        NSString *content = objc_getAssociatedObject(sender, &kRepeatContentKey);
        CMessageWrap *msgWrap = objc_getAssociatedObject(sender, &kRepeatMsgWrapKey);

        if (!content || content.length == 0) {
            NSLog(@"[WCPL] No content associated with repeat button");
            return;
        }

        // 向上查找 ViewController
        BaseMsgContentViewController *viewController = [self findViewControllerFromView:sender];

        if (viewController) {
            [self handleRepeatButtonTapWithContent:content viewController:viewController msgWrap:msgWrap];
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

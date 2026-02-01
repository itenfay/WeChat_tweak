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

        // 获取消息唯一标识（用于防止重复添加按钮）
        unsigned int msgLocalID = msgWrap.m_uiMesLocalID;

        // 检查是否已经存在相同消息的按钮
        for (UIView *subview in cellView.subviews) {
            if (subview.tag == kWCPLRepeatButtonTag) {
                // 检查按钮关联的消息 ID 是否相同
                CMessageWrap *existingMsgWrap = objc_getAssociatedObject(subview, &kRepeatMsgWrapKey);
                if (existingMsgWrap && existingMsgWrap.m_uiMesLocalID == msgLocalID) {
                    // 已存在相同消息的按钮，只需更新位置
                    [self layoutRepeatButton:(UIButton *)subview inCellView:cellView];
                    return;
                }
            }
        }

        // 先移除所有旧按钮，确保只有一个
        [self removeRepeatButtonFromCellView:cellView];

        // 表情包消息不需要检查文本内容
        NSString *content = nil;
        BOOL isEmoticonMessage = (msgWrap.m_uiMessageType == 47);

        if (!isEmoticonMessage) {
            // 获取消息内容 - 优先从 ViewModel 的 contentText 获取（用于引用回复消息）
            if ([viewModel respondsToSelector:@selector(contentText)]) {
                content = [viewModel performSelector:@selector(contentText)];
            }
            // 如果 contentText 为空，回退到 msgWrap.m_nsContent
            if (!content || content.length == 0) {
                content = [self getMessageContent:msgWrap];
            }
            if (!content || content.length == 0) {
                return;
            }
        }

        // 创建新按钮
        UIButton *repeatButton = [self createRepeatButton];
        [cellView addSubview:repeatButton];

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

        // 移除所有带有指定 tag 的按钮（避免重复）
        NSMutableArray *buttonsToRemove = [NSMutableArray array];
        for (UIView *subview in cellView.subviews) {
            if (subview.tag == kWCPLRepeatButtonTag) {
                [buttonsToRemove addObject:subview];
            }
        }
        for (UIView *button in buttonsToRemove) {
            [button removeFromSuperview];
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
        // 47 = 表情包消息
        // 49 = 应用消息（包括引用回复）
        unsigned int msgType = msgWrap.m_uiMessageType;

        // 支持文本消息、表情包消息和引用回复消息
        if (msgType != 1 && msgType != 47 && msgType != 49) {
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
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
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

        // 将气泡坐标转换到 cellView 坐标系
        CGRect bubbleFrame = bubbleView.frame;
        if (bubbleView.superview != cellView) {
            bubbleFrame = [bubbleView.superview convertRect:bubbleView.frame toView:cellView];
        }

        // 通过判断消息发送者来确定消息方向（更可靠）
        BOOL isFromSelf = [self isMessageFromSelf:msgWrap];

        // 按钮固定尺寸
        CGFloat buttonSize = 24;

        CGFloat buttonX;
        CGFloat buttonY = CGRectGetMaxY(bubbleFrame) - buttonSize;  // 底部与气泡底部对齐

        if (isFromSelf) {
            // 自己的消息 - 按钮放在气泡左侧外面，紧贴气泡边缘
            buttonX = bubbleFrame.origin.x - buttonSize - 2;
        } else {
            // 别人的消息 - 按钮放在气泡右侧外面，紧贴气泡边缘
            buttonX = CGRectGetMaxX(bubbleFrame) + 2;
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
        NSMutableString *debugInfo = [NSMutableString stringWithString:@"=== 复读按钮调试信息 ===\n\n"];

        NSString *content = objc_getAssociatedObject(sender, &kRepeatContentKey);
        CMessageWrap *msgWrap = objc_getAssociatedObject(sender, &kRepeatMsgWrapKey);

        [debugInfo appendFormat:@"1. 消息对象: %@\n", msgWrap ? @"存在" : @"nil"];
        [debugInfo appendFormat:@"2. 消息类型: %u\n", msgWrap ? msgWrap.m_uiMessageType : 0];
        [debugInfo appendFormat:@"3. 文本内容: %@\n", content ? [content substringToIndex:MIN(50, content.length)] : @"nil"];

        // 检查是否是表情包消息
        BOOL isEmoticonMessage = (msgWrap && msgWrap.m_uiMessageType == 47);
        [debugInfo appendFormat:@"4. 是否表情包: %@\n", isEmoticonMessage ? @"是" : @"否"];

        if (!isEmoticonMessage && (!content || content.length == 0)) {
            [debugInfo appendString:@"\n❌ 错误: 非表情包消息且无文本内容"];
            [self showDebugAlert:debugInfo];
            return;
        }

        // 检查表情包 MD5
        if (isEmoticonMessage) {
            NSString *emoticonMD5 = nil;
            if ([msgWrap respondsToSelector:@selector(m_nsEmoticonMD5)]) {
                emoticonMD5 = [msgWrap performSelector:@selector(m_nsEmoticonMD5)];
            }
            [debugInfo appendFormat:@"5. 表情包MD5(属性): %@\n", emoticonMD5 ?: @"nil"];

            NSString *msgContent = msgWrap.m_nsContent;
            [debugInfo appendFormat:@"6. 消息Content长度: %lu\n", (unsigned long)(msgContent ? msgContent.length : 0)];

            // 尝试从 XML 解析 MD5
            NSString *parsedMD5 = [self parseEmoticonMD5FromContent:msgContent];
            [debugInfo appendFormat:@"6.1 解析的MD5: %@\n", parsedMD5 ?: @"nil"];
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
        [debugInfo appendFormat:@"9. LogicController: %@\n", logicController ? NSStringFromClass([logicController class]) : @"nil"];

        // 检查发送方法
        BOOL hasSendEmoticon = logicController && [logicController respondsToSelector:@selector(SendEmoticonMessage:)];
        [debugInfo appendFormat:@"10. 有SendEmoticonMessage方法: %@\n", hasSendEmoticon ? @"是" : @"否"];

        // 检查 CEmoticonMgr
        id emoticonMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CEmoticonMgr")];
        [debugInfo appendFormat:@"11. CEmoticonMgr: %@\n", emoticonMgr ? @"存在" : @"nil"];

        BOOL hasGetEmoticonWrap = emoticonMgr && [emoticonMgr respondsToSelector:@selector(getEmoticonWrapByMd5:)];
        [debugInfo appendFormat:@"12. 有getEmoticonWrapByMd5方法: %@\n", hasGetEmoticonWrap ? @"是" : @"否"];

        // 尝试获取 emoticonWrap
        if (isEmoticonMessage && hasGetEmoticonWrap) {
            NSString *msgContent = msgWrap.m_nsContent;
            NSString *parsedMD5 = [self parseEmoticonMD5FromContent:msgContent];
            if (parsedMD5) {
                CEmoticonWrap *emoticonWrap = [emoticonMgr performSelector:@selector(getEmoticonWrapByMd5:) withObject:parsedMD5];
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

        [debugInfo appendString:@"\n✅ 开始执行复读..."];

        // 显示调试信息
        [self showDebugAlert:debugInfo];

        // 执行复读
        if (isEmoticonMessage) {
            [self handleRepeatEmoticonMessage:msgWrap viewController:viewController];
        } else {
            [self handleRepeatButtonTapWithContent:content viewController:viewController msgWrap:msgWrap];
        }
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
- (void)handleRepeatEmoticonMessage:(CMessageWrap *)msgWrap viewController:(BaseMsgContentViewController *)viewController {
    @try {
        if (!msgWrap || !viewController) {
            return;
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
            return;
        }

        // 获取表情包 MD5 - 优先从属性获取，否则从 XML 解析
        NSString *emoticonMD5 = nil;
        if ([msgWrap respondsToSelector:@selector(m_nsEmoticonMD5)]) {
            emoticonMD5 = [msgWrap performSelector:@selector(m_nsEmoticonMD5)];
        }

        // 如果属性为空，从消息内容 XML 中解析 MD5
        NSString *content = msgWrap.m_nsContent;
        if ((!emoticonMD5 || emoticonMD5.length == 0) && content && content.length > 0) {
            emoticonMD5 = [self parseEmoticonMD5FromContent:content];
        }

        // 方法1: 通过 CEmoticonMgr 获取表情包并发送
        if (emoticonMD5 && emoticonMD5.length > 0) {
            id emoticonMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CEmoticonMgr")];
            if (emoticonMgr && [emoticonMgr respondsToSelector:@selector(getEmoticonWrapByMd5:)]) {
                CEmoticonWrap *emoticonWrap = [emoticonMgr performSelector:@selector(getEmoticonWrapByMd5:) withObject:emoticonMD5];

                if (emoticonWrap) {
                    // 通过 logicController 发送
                    if ([viewController respondsToSelector:@selector(m_logicController)]) {
                        id logicController = [viewController performSelector:@selector(m_logicController)];
                        if (logicController && [logicController respondsToSelector:@selector(SendEmoticonMessage:)]) {
                            [logicController performSelector:@selector(SendEmoticonMessage:) withObject:emoticonWrap];
                            return;
                        }
                    }

                    // 通过 ViewController 发送
                    if ([viewController respondsToSelector:@selector(SendEmoticonMesssageToolView:)]) {
                        [viewController performSelector:@selector(SendEmoticonMesssageToolView:) withObject:emoticonWrap];
                        return;
                    }
                }
            }
        }

        // 方法2: 直接通过 CMessageMgr 发送（使用原始消息内容）
        if (content && content.length > 0) {
            id msgMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CMessageMgr")];
            if (msgMgr) {
                // 创建新的消息 Wrap
                CMessageWrap *newMsgWrap = [[objc_getClass("CMessageWrap") alloc] initWithMsgType:47];
                newMsgWrap.m_nsToUsr = toUserName;
                newMsgWrap.m_nsContent = content;

                if (emoticonMD5) {
                    if ([newMsgWrap respondsToSelector:@selector(setM_nsEmoticonMD5:)]) {
                        [newMsgWrap performSelector:@selector(setM_nsEmoticonMD5:) withObject:emoticonMD5];
                    }
                }

                // 尝试 AddEmoticonMsg
                if ([msgMgr respondsToSelector:@selector(AddEmoticonMsg:MsgWrap:)]) {
                    [msgMgr AddEmoticonMsg:toUserName MsgWrap:newMsgWrap];
                    return;
                }

                // 尝试 AddLocalMsg
                if ([msgMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:)]) {
                    [msgMgr AddLocalMsg:toUserName MsgWrap:newMsgWrap fixTime:YES NewMsgArriveNotify:YES];
                    return;
                }
            }
        }
    }
    @catch (NSException *exception) {
        // 静默失败
    }
}

// 从消息内容 XML 中解析表情包 MD5
- (NSString *)parseEmoticonMD5FromContent:(NSString *)content {
    if (!content || content.length == 0) return nil;

    // 尝试匹配 md5="xxx" 格式
    NSRegularExpression *regex1 = [NSRegularExpression regularExpressionWithPattern:@"md5=\"([a-fA-F0-9]+)\"" options:0 error:nil];
    NSTextCheckingResult *match1 = [regex1 firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (match1 && match1.numberOfRanges > 1) {
        return [content substringWithRange:[match1 rangeAtIndex:1]];
    }

    // 尝试匹配 <md5>xxx</md5> 格式
    NSRegularExpression *regex2 = [NSRegularExpression regularExpressionWithPattern:@"<md5>([a-fA-F0-9]+)</md5>" options:0 error:nil];
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

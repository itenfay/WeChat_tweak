//
// WCPLMessageReplyManager.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLMessageReplyManager.h"
#import "WCPLRedEnvelopConfig.h"
#import "WeChatRedEnvelop.h"
#import <objc/objc-runtime.h>

static const NSInteger kWCPLReplyButtonTag = 10086;

@interface WCPLMessageReplyManager ()

@end

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

- (void)addReplyButtonToChatViewController:(BaseMsgContentViewController *)viewController {
    if (![WCPLRedEnvelopConfig sharedConfig].messageReplyEnable) {
        return;
    }
    
    UIView *chatInputView = [self getChatInputViewFromViewController:viewController];
    if (!chatInputView) {
        NSLog(@"[WCPL] Chat input view not found");
        return;
    }
    
    // Check if button already exists
    UIButton *existingButton = [chatInputView viewWithTag:kWCPLReplyButtonTag];
    if (existingButton) {
        existingButton.hidden = NO;
        return;
    }
    
    // Create +1 button
    UIButton *replyButton = [UIButton buttonWithType:UIButtonTypeCustom];
    replyButton.tag = kWCPLReplyButtonTag;
    replyButton.frame = CGRectMake(chatInputView.frame.size.width - 50, 8, 44, 28);
    replyButton.backgroundColor = [UIColor colorWithRed:0.0 green:0.48 blue:1.0 alpha:1.0];
    replyButton.layer.cornerRadius = 4.0;
    replyButton.layer.masksToBounds = YES;
    replyButton.titleLabel.font = [UIFont systemFontOfSize:13];
    [replyButton setTitle:@"+1" forState:UIControlStateNormal];
    [replyButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [replyButton addTarget:self action:@selector(replyButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
    
    // Store reference to view controller
    objc_setAssociatedObject(replyButton, "viewController", viewController, OBJC_ASSOCIATION_ASSIGN);
    
    [chatInputView addSubview:replyButton];
    
    NSLog(@"[WCPL] Message reply button added to chat view");
}

- (void)removeReplyButtonFromChatViewController:(BaseMsgContentViewController *)viewController {
    UIView *chatInputView = [self getChatInputViewFromViewController:viewController];
    if (!chatInputView) {
        return;
    }
    
    UIButton *replyButton = [chatInputView viewWithTag:kWCPLReplyButtonTag];
    if (replyButton) {
        replyButton.hidden = YES;
    }
}

- (void)handleReplyButtonTap:(BaseMsgContentViewController *)viewController {
    if (![WCPLRedEnvelopConfig sharedConfig].messageReplyEnable) {
        NSLog(@"[WCPL] Message reply is disabled");
        return;
    }
    
    // Get text input view
    UIView *chatInputView = [self getChatInputViewFromViewController:viewController];
    if (!chatInputView) {
        NSLog(@"[WCPL] Chat input view not found for reply");
        return;
    }
    
    // Find text field in input view
    UITextView *textView = [self findTextViewInView:chatInputView];
    if (!textView) {
        NSLog(@"[WCPL] Text view not found in chat input");
        return;
    }
    
    // Insert +1 into text view
    NSString *currentText = textView.text ?: @"";
    if (currentText.length > 0) {
        textView.text = [currentText stringByAppendingString:@"+1"];
    } else {
        textView.text = @"+1";
    }
    
    // Notify text changed
    [[NSNotificationCenter defaultCenter] postNotificationName:UITextViewTextDidChangeNotification object:textView];
    
    // Trigger send
    [self triggerSendMessageInViewController:viewController];
    
    NSLog(@"[WCPL] Message reply (+1) sent");
}

#pragma mark - Private Methods

- (UIView *)getChatInputViewFromViewController:(BaseMsgContentViewController *)viewController {
    // Try to get chat input view using ivar names
    UIView *chatInputView = nil;
    
    // Common ivar names for chat input container
    NSArray *possibleIvars = @[@"m_inputView", @"m_chatInputView", @"inputView", @"chatInputView", @"_inputView"];
    
    for (NSString *ivarName in possibleIvars) {
        @try {
            chatInputView = MSHookIvar<UIView *>(viewController, [ivarName UTF8String]);
            if (chatInputView) {
                break;
            }
        } @catch (NSException *exception) {
            // Continue to next ivar
        }
    }
    
    // If not found via ivar, try to find in view hierarchy
    if (!chatInputView) {
        chatInputView = [self findInputViewInView:viewController.view];
    }
    
    return chatInputView;
}

- (UIView *)findInputViewInView:(UIView *)view {
    // Look for input view in the view hierarchy
    for (UIView *subview in view.subviews) {
        // Check if this looks like a chat input container
        NSString *className = NSStringFromClass([subview class]);
        if ([className rangeOfString:@"Input" options:NSCaseInsensitiveSearch].location != NSNotFound ||
            [className rangeOfString:@"Text" options:NSCaseInsensitiveSearch].location != NSNotFound ||
            [className rangeOfString:@"Tool" options:NSCaseInsensitiveSearch].location != NSNotFound) {
            return subview;
        }
        
        // Recursively search
        UIView *found = [self findInputViewInView:subview];
        if (found) {
            return found;
        }
    }
    
    // Check if this view itself has text input
    if ([self findTextViewInView:view]) {
        return view;
    }
    
    return nil;
}

- (UITextView *)findTextViewInView:(UIView *)view {
    // Look for UITextView in the view hierarchy
    for (UIView *subview in view.subviews) {
        if ([subview isKindOfClass:[UITextView class]]) {
            return (UITextView *)subview;
        }
        
        UITextView *found = [self findTextViewInView:subview];
        if (found) {
            return found;
        }
    }
    return nil;
}

- (void)triggerSendMessageInViewController:(BaseMsgContentViewController *)viewController {
    // Try to find and invoke the send method
    SEL sendSelector = @selector(onSendMsg:);
    if ([viewController respondsToSelector:sendSelector]) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
        [viewController performSelector:sendSelector withObject:nil];
#pragma clang diagnostic pop
        return;
    }
    
    // Alternative send method
    sendSelector = @selector(DidSendMsg:);
    if ([viewController respondsToSelector:sendSelector]) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
        [viewController performSelector:sendSelector withObject:nil];
#pragma clang diagnostic pop
        return;
    }
    
    // Try to find send button and tap it
    UIView *chatInputView = [self getChatInputViewFromViewController:viewController];
    if (chatInputView) {
        UIButton *sendButton = [self findSendButtonInView:chatInputView];
        if (sendButton) {
            [sendButton sendActionsForControlEvents:UIControlEventTouchUpInside];
            return;
        }
    }
    
    NSLog(@"[WCPL] Could not find send method or button");
}

- (UIButton *)findSendButtonInView:(UIView *)view {
    for (UIView *subview in view.subviews) {
        if ([subview isKindOfClass:[UIButton class]]) {
            UIButton *button = (UIButton *)subview;
            NSString *title = [button titleForState:UIControlStateNormal];
            if ([title isEqualToString:@"发送"] || [title isEqualToString:@"Send"] || 
                [title rangeOfString:@"发送"].location != NSNotFound) {
                return button;
            }
        }
        
        UIButton *found = [self findSendButtonInView:subview];
        if (found) {
            return found;
        }
    }
    return nil;
}

#pragma mark - Button Action

- (void)replyButtonTapped:(UIButton *)sender {
    BaseMsgContentViewController *viewController = objc_getAssociatedObject(sender, "viewController");
    if (viewController) {
        [self handleReplyButtonTap:viewController];
    }
}

@end

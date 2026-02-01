//
// WCPLMessageReplyManager.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BaseMsgContentViewController;

@interface WCPLMessageReplyManager : NSObject

+ (WCPLMessageReplyManager *)sharedManager;

- (void)addReplyButtonToChatViewController:(BaseMsgContentViewController *)viewController;
- (void)removeReplyButtonFromChatViewController:(BaseMsgContentViewController *)viewController;

- (void)handleReplyButtonTap:(BaseMsgContentViewController *)viewController;

@end

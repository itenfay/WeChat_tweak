//
// WCPLMessageReplyManager.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//
// Updated: Real repeat message feature (复读机功能)
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BaseMsgContentViewController;
@class CommonMessageCellView;
@class CMessageWrap;

// 复读按钮的 tag
static const NSInteger kWCPLRepeatButtonTag = 10087;

@interface WCPLMessageReplyManager : NSObject

+ (WCPLMessageReplyManager *)sharedManager;

// 在消息 Cell 上添加复读按钮
- (void)addRepeatButtonToCellView:(CommonMessageCellView *)cellView;

// 从消息 Cell 上移除复读按钮
- (void)removeRepeatButtonFromCellView:(CommonMessageCellView *)cellView;

// 处理复读按钮点击 - 发送复读消息
- (void)handleRepeatButtonTapWithContent:(NSString *)content
                          viewController:(BaseMsgContentViewController *)viewController
                                 msgWrap:(CMessageWrap *)msgWrap;

// 判断消息是否可以复读（文本消息且非自己发送）
- (BOOL)canRepeatMessage:(CMessageWrap *)msgWrap;

// 判断消息是否是对方发送的（非自己发送）
- (BOOL)isMessageFromOther:(CMessageWrap *)msgWrap;

// 获取消息内容
- (NSString *)getMessageContent:(CMessageWrap *)msgWrap;

// 处理表情包消息复读
- (void)handleRepeatEmoticonMessage:(CMessageWrap *)msgWrap viewController:(BaseMsgContentViewController *)viewController;

@end

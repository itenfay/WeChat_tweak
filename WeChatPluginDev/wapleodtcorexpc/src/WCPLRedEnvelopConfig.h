//
// WCPLRedEnvelopConfig.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CContact;

@interface WCPLRedEnvelopConfig : NSObject

+ (instancetype)sharedConfig;

@property (assign, nonatomic) BOOL autoReceiveEnable;
@property (assign, nonatomic) NSInteger delaySeconds;
@property (assign, nonatomic) BOOL receiveSelfRedEnvelop;
@property (assign, nonatomic) BOOL serialReceive;
@property (strong, nonatomic) NSArray *blackList;

// Advanced sections.
@property (assign, nonatomic) BOOL revokeEnable;

// Step count.
@property (assign, nonatomic) NSInteger stepCount;
@property (strong, nonatomic) NSDate *lastChangeStepCountDate;

- (void)saveLastChangeStepCountDateToLocalFile;

// Filt Messages.
@property ( copy , nonatomic) NSString *curUsrName;
@property (strong, nonatomic) NSMutableDictionary<NSString *,NSNumber *> *chatIgnoreInfo;

- (void)saveChatIgnoreNameListToLocalFile;

// 屏蔽联系人消息（总开关 + 名单）
@property (assign, nonatomic) BOOL userIgnoreEnable;
@property (strong, nonatomic) NSMutableDictionary<NSString *,NSNumber *> *userIgnoreInfo;

- (void)saveUserIgnoreNameListToLocalFile;

// Fake Location.
@property (assign, nonatomic) double lat;
@property (assign, nonatomic) double lng;
@property (assign, nonatomic) BOOL fakeLocEnable;

// TP.
@property (assign, nonatomic) BOOL TPOn;

// Message Reply.
@property (assign, nonatomic) BOOL messageReplyEnable;

// 复读按钮震动反馈
@property (assign, nonatomic) BOOL repeatButtonHapticEnable;

// Message Reply Button Style.
// 0 = 文字模式 (+1), 1 = 内置图标, 2 = 自定义图片
@property (assign, nonatomic) NSInteger repeatButtonStyle;
// 内置图标索引: 0=+1, 1=👍, 2=❤️, 3=😂, 4=🔥, 5=👏, 6=🎉
@property (assign, nonatomic) NSInteger repeatButtonIconIndex;
// 自定义图片路径 (存储在 Documents 目录)
@property (copy, nonatomic) NSString *repeatButtonCustomImagePath;

// 消息手势总开关
@property (assign, nonatomic) BOOL swipeGestureEnable;
// 左滑引用功能
@property (assign, nonatomic) BOOL swipeQuoteEnable;
// 引用消息点击跳转
@property (assign, nonatomic) BOOL tapReferJumpEnable;

// 消息手势操作类型
// 0=引用, 1=复读, 2=删除, 3=撤回(仅己方消息)
// 左滑对方消息操作
@property (assign, nonatomic) NSInteger swipeLeftOtherAction;
// 左滑己方消息操作
@property (assign, nonatomic) NSInteger swipeLeftSelfAction;
// 右滑功能开关
@property (assign, nonatomic) BOOL swipeRightEnable;
// 右滑对方消息操作
@property (assign, nonatomic) NSInteger swipeRightOtherAction;
// 右滑己方消息操作
@property (assign, nonatomic) NSInteger swipeRightSelfAction;

@end

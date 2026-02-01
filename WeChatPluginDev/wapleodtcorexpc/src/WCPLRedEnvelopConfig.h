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

// Fake Location.
@property (assign, nonatomic) double lat;
@property (assign, nonatomic) double lng;
@property (assign, nonatomic) BOOL fakeLocEnable;

// TP.
@property (assign, nonatomic) BOOL TPOn;

// Message Reply.
@property (assign, nonatomic) BOOL messageReplyEnable;

// Message Reply Button Style.
// 0 = 文字模式 (+1), 1 = 内置图标, 2 = 自定义图片
@property (assign, nonatomic) NSInteger repeatButtonStyle;
// 内置图标索引: 0=+1, 1=👍, 2=❤️, 3=😂, 4=🔥, 5=👏, 6=🎉
@property (assign, nonatomic) NSInteger repeatButtonIconIndex;
// 自定义图片路径 (存储在 Documents 目录)
@property (copy, nonatomic) NSString *repeatButtonCustomImagePath;

// 左滑引用功能
@property (assign, nonatomic) BOOL swipeQuoteEnable;
// 引用消息点击跳转
@property (assign, nonatomic) BOOL tapReferJumpEnable;

@end

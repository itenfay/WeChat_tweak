//
// WCPLReceiveRedEnvelopOperation.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WeChatRedEnvelopParam;

typedef void(^WCPLRedEnvelopResultBlock)(BOOL success, NSError *error);

@interface WCPLReceiveRedEnvelopOperation : NSOperation

- (instancetype)initWithRedEnvelopParam:(WeChatRedEnvelopParam *)param delay:(unsigned int)delaySeconds;

// 结果回调（调用 OpenRedEnvelopesRequest 成功触发即视为 success）
@property (nonatomic, copy) WCPLRedEnvelopResultBlock resultBlock;

// 最大重试次数（默认 3，最小 1）
@property (nonatomic, assign) NSInteger maxRetryCount;

@end

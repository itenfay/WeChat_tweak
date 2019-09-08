//
// WCPLReceiveRedEnvelopOperation.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WeChatRedEnvelopParam;

@interface WCPLReceiveRedEnvelopOperation : NSOperation

- (instancetype)initWithRedEnvelopParam:(WeChatRedEnvelopParam *)param delay:(unsigned int)delaySeconds;

@end

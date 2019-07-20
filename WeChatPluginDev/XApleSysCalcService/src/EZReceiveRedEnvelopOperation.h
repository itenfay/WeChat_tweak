//
//  EZReceiveRedEnvelopOperation.h
//
//  Created by ez on 17/4/6.
//  Copyright © 2017年 ez. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WeChatRedEnvelopParam;

@interface EZReceiveRedEnvelopOperation : NSOperation

- (instancetype)initWithRedEnvelopParam:(WeChatRedEnvelopParam *)param delay:(unsigned int)delaySeconds;

@end

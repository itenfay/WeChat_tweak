//
//  EZRedEnvelopParamQueue.h
//
//  Created by ez on 17/4/6.
//  Copyright © 2017年 ez. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WeChatRedEnvelopParam;

@interface EZRedEnvelopParamQueue : NSObject

+ (instancetype)sharedQueue;

- (void)enqueue:(WeChatRedEnvelopParam *)param;
- (WeChatRedEnvelopParam *)dequeue;
- (WeChatRedEnvelopParam *)peek;
- (BOOL)isEmpty;

@end

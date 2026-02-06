//
// WCPLRedEnvelopConfig.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WCPLRedEnvelopConfig : NSObject

+ (instancetype)sharedConfig;

@property (assign, nonatomic) BOOL autoReceiveEnable;
@property (assign, nonatomic) BOOL privateRedEnvelopEnable;
@property (assign, nonatomic) BOOL groupRedEnvelopEnable;
@property (assign, nonatomic) NSInteger delaySeconds;
@property (assign, nonatomic) BOOL receiveSelfRedEnvelop;
@property (assign, nonatomic) BOOL serialReceive;
@property (assign, nonatomic) NSInteger groupRedEnvelopScope;
@property (strong, nonatomic) NSArray *allowedGroupList;
@property (strong, nonatomic) NSArray *blockedGroupList;
@property (copy, nonatomic) NSString *privateAutoReplyText;
@property (copy, nonatomic) NSString *groupAutoReplyText;

// 旧命名（保持向后兼容）
@property (strong, nonatomic) NSArray *blackList __attribute__((deprecated("Use allowedGroupList")));
@property (strong, nonatomic) NSArray *groupDenyList __attribute__((deprecated("Use blockedGroupList")));

@end

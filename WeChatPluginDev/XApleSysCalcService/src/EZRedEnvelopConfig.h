//
//  EZRedEnvelopConfig.h
//
//  Created by ez on 17/4/6.
//  Copyright © 2017年 ez. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CContact;

@interface EZRedEnvelopConfig : NSObject

+ (instancetype)sharedConfig;

@property (assign, nonatomic) BOOL autoReceiveEnable;
@property (assign, nonatomic) NSInteger delaySeconds;
@property (assign, nonatomic) BOOL receiveSelfRedEnvelop;
@property (assign, nonatomic) BOOL serialReceive;
@property (strong, nonatomic) NSArray *blackList;

/** Pro */
@property (assign, nonatomic) BOOL revokeEnable;

/** Step */
@property (assign, nonatomic) NSInteger stepCount;
@property (strong, nonatomic) NSDate *lastChangeStepCountDate;

- (void)saveLastChangeStepCountDateToLocalFile;

/** Filt Message */
@property (copy  , nonatomic) NSString *curUsrName;
@property (strong, nonatomic) NSMutableDictionary<NSString *,NSNumber *> *chatIgnoreInfo;

- (void)saveChatIgnoreNameListToLocalFile;

/** Fake Location */
@property (assign, nonatomic) double lat;
@property (assign, nonatomic) double lng;
@property (assign, nonatomic) BOOL fakeLocEnable;

/** TP */
@property (assign, nonatomic) BOOL TPOn;

@end

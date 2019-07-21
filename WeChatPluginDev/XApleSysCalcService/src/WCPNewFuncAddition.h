//
// WCPNewFuncAddition.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WeChatRedEnvelop.h"

#pragma mark - MMObject

@interface MMObject : NSObject

@end

#pragma mark - MMService

@interface MMService : NSObject

@end

#pragma mark - WCDeviceStepObject

@interface WCDeviceStepObject : MMObject

@end

#pragma mark - CSyncBaseEvent

@interface CSyncBaseEvent : NSObject

@end

#pragma mark - MMSearchBarDisplayController

@interface MMSearchBarDisplayController : MMUIViewController

@end

#pragma mark - BaseMsgContentViewController

@interface BaseMsgContentViewController : MMSearchBarDisplayController

- (id)GetContact;

@end

#pragma mark - ChatRoomInfoViewController

@interface ChatRoomInfoViewController : MMUIViewController

@end

#pragma mark - AddContactToChatRoomViewController

@interface AddContactToChatRoomViewController : MMUIViewController

@end

#pragma mark - CLLocation

@interface CLLocation : NSObject

- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;

@end

#pragma mark - MMLocationMgr

@interface MMLocationMgr : MMService

@end

#pragma mark - JailBreakHelper

@interface JailBreakHelper : NSObject

@end

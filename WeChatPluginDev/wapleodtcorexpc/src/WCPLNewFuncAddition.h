//
// WCPLNewFuncAddition.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WeChatRedEnvelop.h"

#pragma mark - WCDeviceStepObject

@interface WCDeviceStepObject : MMObject

//@property (nonatomic) unsigned int hkStepCount; // @synthesize hkStepCount;
//@property (nonatomic) unsigned int m7StepCount; // @synthesize m7StepCount;

@end

#pragma mark - BaseMsgContentViewController

@interface BaseMsgContentViewController : MMUIViewController

- (id)GetContact;

// Added Method.
//- (void)wcpl_pressTPButton:(id)sender;

@end

#pragma mark - ProtobufEventHandler

@interface ProtobufEventHandler : NSObject

@end

#pragma mark - SyncCmdHandler

@interface SyncCmdHandler : ProtobufEventHandler

//- (_Bool)BatchAddMsg:(_Bool)arg1 ShowPush:(_Bool)arg2;

@end

#pragma mark - ChatRoomInfoViewController

@interface ChatRoomInfoViewController : MMUIViewController

// Added Methods. in MMUIViewController.
//- (void)wcpl_handleIgnoreChatRoom:(UISwitch *)sender;

@end

#pragma mark - AddContactToChatRoomViewController

@interface AddContactToChatRoomViewController : MMUIViewController

// Added Methods. in MMUIViewController.
//- (void)wcpl_handleIgnoreChatRoom:(UISwitch *)sender;

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

//+ (_Bool)JailBroken;
//- (_Bool)HasInstallJailbreakPlugin:(id)arg1;
//- (_Bool)HasInstallJailbreakPluginInvalidIAPPurchase;
//- (_Bool)IsJailBreak;

@end

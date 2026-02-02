//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DialogAction, NSString;

@interface SwitchViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) DialogAction *closeAction; // @dynamic closeAction;
@property(retain, nonatomic) DialogAction *openAction; // @dynamic openAction;
@property(nonatomic) int switchState; // @dynamic switchState;
@property(nonatomic) int switchType; // @dynamic switchType;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end


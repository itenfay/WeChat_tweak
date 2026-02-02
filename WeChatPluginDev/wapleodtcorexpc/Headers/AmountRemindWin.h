//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class JumpItem, NSString;

@interface AmountRemindWin : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) JumpItem *leftButton; // @dynamic leftButton;
@property(nonatomic) unsigned int remindAmount; // @dynamic remindAmount;
@property(retain, nonatomic) JumpItem *rightButton; // @dynamic rightButton;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end


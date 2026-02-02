//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class JumpItem, NSMutableArray, NSString;

@interface CheckWin : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *checkItem; // @dynamic checkItem;
@property(retain, nonatomic) JumpItem *leftButton; // @dynamic leftButton;
@property(retain, nonatomic) JumpItem *rightButton; // @dynamic rightButton;
@property(retain, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end


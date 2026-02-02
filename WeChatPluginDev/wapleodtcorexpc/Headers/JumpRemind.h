//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, RedirectUrl;

@interface JumpRemind : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool isPopUpWindows; // @dynamic isPopUpWindows;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) NSString *leftButtonWording; // @dynamic leftButtonWording;
@property(retain, nonatomic) NSString *rightButtonWording; // @dynamic rightButtonWording;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) RedirectUrl *url; // @dynamic url;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ButtonViewData, NSString, TextViewData;

@interface DialogHalfPageV2ViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TextViewData *content; // @dynamic content;
@property(retain, nonatomic) ButtonViewData *leftButton; // @dynamic leftButton;
@property(retain, nonatomic) ButtonViewData *rightButton; // @dynamic rightButton;
@property(retain, nonatomic) TextViewData *title; // @dynamic title;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end


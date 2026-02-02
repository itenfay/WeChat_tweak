//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ButtonViewData, ImageViewData, NSMutableArray, NSString, TextViewData;

@interface DialogComplianceHalfPageViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TextViewData *bottomText; // @dynamic bottomText;
@property(retain, nonatomic) NSMutableArray *content; // @dynamic content;
@property(nonatomic) int contentAlign; // @dynamic contentAlign;
@property(nonatomic) _Bool contentListStyle; // @dynamic contentListStyle;
@property(retain, nonatomic) ButtonViewData *leftButton; // @dynamic leftButton;
@property(retain, nonatomic) ImageViewData *logo; // @dynamic logo;
@property(retain, nonatomic) ButtonViewData *rightButton; // @dynamic rightButton;
@property(nonatomic) _Bool showCloseButton; // @dynamic showCloseButton;
@property(retain, nonatomic) TextViewData *title; // @dynamic title;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ButtomJumpInfo, ComonPromptInfo, NSString;

@interface PopUpWithHalfDialog : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ComonPromptInfo *content; // @dynamic content;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) ButtomJumpInfo *firstButton; // @dynamic firstButton;
@property(nonatomic) unsigned int iconType; // @dynamic iconType;
@property(retain, nonatomic) NSString *imgUnderContent; // @dynamic imgUnderContent;
@property(retain, nonatomic) NSString *mainIcon; // @dynamic mainIcon;
@property(retain, nonatomic) NSString *mainIconDm; // @dynamic mainIconDm;
@property(retain, nonatomic) NSString *mainTitle; // @dynamic mainTitle;
@property(retain, nonatomic) ButtomJumpInfo *secondButton; // @dynamic secondButton;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end


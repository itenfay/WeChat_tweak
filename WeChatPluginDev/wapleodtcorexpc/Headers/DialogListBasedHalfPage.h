//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ControlInfo, ListViewData, NSString, PaddingStyle, TextViewData;

@interface DialogListBasedHalfPage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ControlInfo *closeModalControlInfo; // @dynamic closeModalControlInfo;
@property(retain, nonatomic) ListViewData *content; // @dynamic content;
@property(retain, nonatomic) PaddingStyle *contentPadding; // @dynamic contentPadding;
@property(nonatomic) int navBarStyle; // @dynamic navBarStyle;
@property(retain, nonatomic) TextViewData *title; // @dynamic title;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end


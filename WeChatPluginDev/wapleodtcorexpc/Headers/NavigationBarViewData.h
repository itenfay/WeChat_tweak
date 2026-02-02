//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NavigationCtrlItem, NavigationSubItemViewData, TextViewData;

@interface NavigationBarViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NavigationCtrlItem *leftItem; // @dynamic leftItem;
@property(retain, nonatomic) NavigationCtrlItem *rightItem; // @dynamic rightItem;
@property(retain, nonatomic) NavigationSubItemViewData *subItem; // @dynamic subItem;
@property(retain, nonatomic) TextViewData *title; // @dynamic title;

@end


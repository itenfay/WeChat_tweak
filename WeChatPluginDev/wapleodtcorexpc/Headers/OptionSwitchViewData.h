//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class SwitchViewData, TextViewData;

@interface OptionSwitchViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TextViewData *desc; // @dynamic desc;
@property(nonatomic) _Bool hideBottomSeparator; // @dynamic hideBottomSeparator;
@property(nonatomic) _Bool hideTopSeparator; // @dynamic hideTopSeparator;
@property(retain, nonatomic) SwitchViewData *switchItem; // @dynamic switchItem;
@property(retain, nonatomic) TextViewData *title; // @dynamic title;

@end


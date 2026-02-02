//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CustomSwitchState, NSString;

@interface CustomSwitchViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool checked; // @dynamic checked;
@property(retain, nonatomic) CustomSwitchState *checkedState; // @dynamic checkedState;
@property(retain, nonatomic) CustomSwitchState *uncheckedState; // @dynamic uncheckedState;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end


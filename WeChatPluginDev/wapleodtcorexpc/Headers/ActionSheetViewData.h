//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, TextViewData;

@interface ActionSheetViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TextViewData *actionSheetTitle; // @dynamic actionSheetTitle;
@property(retain, nonatomic) TextViewData *cancelText; // @dynamic cancelText;
@property(nonatomic) unsigned int destructiveIndex; // @dynamic destructiveIndex;
@property(retain, nonatomic) NSMutableArray *item; // @dynamic item;

@end


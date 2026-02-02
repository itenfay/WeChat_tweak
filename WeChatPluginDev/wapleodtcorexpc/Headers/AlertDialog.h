//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ButtonViewData, NSString;

@interface AlertDialog : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ButtonViewData *btnCancel; // @dynamic btnCancel;
@property(retain, nonatomic) ButtonViewData *btnConfirm; // @dynamic btnConfirm;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end


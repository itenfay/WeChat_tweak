//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LqtDialogBtn, NSString;

@interface LqtDialog : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) LqtDialogBtn *centerBtn; // @dynamic centerBtn;
@property(retain, nonatomic) LqtDialogBtn *leftBtn; // @dynamic leftBtn;
@property(retain, nonatomic) LqtDialogBtn *rightBtn; // @dynamic rightBtn;
@property(nonatomic) unsigned int style; // @dynamic style;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end


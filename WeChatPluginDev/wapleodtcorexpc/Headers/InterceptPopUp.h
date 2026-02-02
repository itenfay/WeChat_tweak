//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, PopUpJumpInfo;

@interface InterceptPopUp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) PopUpJumpInfo *leftButton; // @dynamic leftButton;
@property(nonatomic) unsigned int popUpType; // @dynamic popUpType;
@property(retain, nonatomic) PopUpJumpInfo *rightButton; // @dynamic rightButton;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end


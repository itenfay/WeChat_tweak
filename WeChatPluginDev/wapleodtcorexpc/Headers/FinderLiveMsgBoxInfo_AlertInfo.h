//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveMsgBoxInfo_AlertInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *alertId; // @dynamic alertId;
@property(nonatomic) unsigned int alertShowSeconds; // @dynamic alertShowSeconds;
@property(retain, nonatomic) NSString *reviewButtonTitle; // @dynamic reviewButtonTitle;
@property(retain, nonatomic) NSString *reviewContent; // @dynamic reviewContent;
@property(retain, nonatomic) NSString *reviewTitle; // @dynamic reviewTitle;

@end


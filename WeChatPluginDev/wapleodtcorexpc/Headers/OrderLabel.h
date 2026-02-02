//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, OrderWording;

@interface OrderLabel : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *imgUrl; // @dynamic imgUrl;
@property(nonatomic) unsigned int labelType; // @dynamic labelType;
@property(retain, nonatomic) OrderWording *wording; // @dynamic wording;

@end


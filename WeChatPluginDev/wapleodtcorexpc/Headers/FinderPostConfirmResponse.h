//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderContact, FinderObject, NSString;

@interface FinderPostConfirmResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *exportId; // @dynamic exportId;
@property(retain, nonatomic) FinderObject *object; // @dynamic object;
@property(retain, nonatomic) FinderContact *selfContact; // @dynamic selfContact;

@end


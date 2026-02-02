//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderContact, OriginalEntranceInfo;

@interface FinderApplyOriginalResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) OriginalEntranceInfo *entranceInfo; // @dynamic entranceInfo;
@property(retain, nonatomic) FinderContact *selfContact; // @dynamic selfContact;

@end


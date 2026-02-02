//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface FinderGetFansListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *contactList; // @dynamic contactList;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSMutableArray *fansContactList; // @dynamic fansContactList;
@property(retain, nonatomic) NSData *lastBuff; // @dynamic lastBuff;
@property(nonatomic) unsigned long long lastFansId; // @dynamic lastFansId;

@end


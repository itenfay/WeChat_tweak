//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface FinderClubGetAuthorResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *authorContact; // @dynamic authorContact;
@property(nonatomic) unsigned int authorCount; // @dynamic authorCount;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int hasJoinClub; // @dynamic hasJoinClub;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;

@end


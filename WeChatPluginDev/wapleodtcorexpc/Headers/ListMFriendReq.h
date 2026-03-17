//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface ListMFriendReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int emailCount; // @dynamic emailCount;
@property(retain, nonatomic) NSMutableArray *emailList; // @dynamic emailList;
@property(nonatomic) unsigned int mobileCount; // @dynamic mobileCount;
@property(retain, nonatomic) NSMutableArray *mobileList; // @dynamic mobileList;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end


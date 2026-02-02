//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, UserMgrBaseResponse;

@interface SearchUserAuthResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *authApp; // @dynamic authApp;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *nextPageData; // @dynamic nextPageData;
@property(nonatomic) unsigned int nextPageFlag; // @dynamic nextPageFlag;
@property(retain, nonatomic) UserMgrBaseResponse *usermgrBaseresp; // @dynamic usermgrBaseresp;

@end


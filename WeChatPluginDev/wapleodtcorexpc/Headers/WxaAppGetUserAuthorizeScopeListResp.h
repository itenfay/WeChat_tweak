//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface WxaAppGetUserAuthorizeScopeListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *allShownScopeList; // @dynamic allShownScopeList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSMutableArray *wxaItemList; // @dynamic wxaItemList;

@end


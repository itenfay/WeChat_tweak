//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GetAllFunctionResponse_AlertInfo, NSMutableArray, NSString;

@interface GetAllFunctionResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) GetAllFunctionResponse_AlertInfo *alertInfo; // @dynamic alertInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *emptyHint; // @dynamic emptyHint;
@property(retain, nonatomic) NSMutableArray *groupList; // @dynamic groupList;

@end


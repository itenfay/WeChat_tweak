//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetLatestPayProductInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int outerErrCode; // @dynamic outerErrCode;
@property(retain, nonatomic) NSString *outerErrMsg; // @dynamic outerErrMsg;
@property(retain, nonatomic) NSString *outerRemarks; // @dynamic outerRemarks;
@property(retain, nonatomic) NSString *product; // @dynamic product;
@property(retain, nonatomic) NSString *productList; // @dynamic productList;
@property(nonatomic) int wxErrCode; // @dynamic wxErrCode;
@property(retain, nonatomic) NSString *wxErrMsg; // @dynamic wxErrMsg;

@end


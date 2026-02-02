//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetPayFunctionListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cacheTime; // @dynamic cacheTime;
@property(nonatomic) unsigned int isShowSetting; // @dynamic isShowSetting;
@property(nonatomic) unsigned int notShowTutorial; // @dynamic notShowTutorial;
@property(retain, nonatomic) NSString *payFunctionList; // @dynamic payFunctionList;

@end


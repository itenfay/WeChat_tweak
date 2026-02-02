//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString;

@interface WxaAttrSyncResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *lastAttrVersion; // @dynamic lastAttrVersion;
@property(retain, nonatomic) NSMutableArray *updateInfoList; // @dynamic updateInfoList;
@property(retain, nonatomic) NSString *wxaUserName; // @dynamic wxaUserName;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMTransferCgiInfoList, NSString;

@interface H5AuthResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MMTransferCgiInfoList *cgiInfoList; // @dynamic cgiInfoList;
@property(nonatomic) unsigned int enableDynamicRouting; // @dynamic enableDynamicRouting;
@property(nonatomic) unsigned int expiredtime; // @dynamic expiredtime;
@property(retain, nonatomic) NSString *h5Authtoken; // @dynamic h5Authtoken;
@property(retain, nonatomic) NSString *pubkeytoken; // @dynamic pubkeytoken;

@end


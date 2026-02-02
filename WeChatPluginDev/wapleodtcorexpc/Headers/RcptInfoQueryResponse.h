//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, RcptInfoList;

@interface RcptInfoQueryResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appnickname; // @dynamic appnickname;
@property(retain, nonatomic) NSString *appusername; // @dynamic appusername;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int isauthority; // @dynamic isauthority;
@property(nonatomic) unsigned int islatest; // @dynamic islatest;
@property(retain, nonatomic) RcptInfoList *rcptinfolist; // @dynamic rcptinfolist;

@end


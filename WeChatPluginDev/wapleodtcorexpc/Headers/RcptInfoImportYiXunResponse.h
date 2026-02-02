//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, RcptInfoList;

@interface RcptInfoImportYiXunResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int rcptinfoimportstatus; // @dynamic rcptinfoimportstatus;
@property(retain, nonatomic) RcptInfoList *rcptinfolist; // @dynamic rcptinfolist;

@end


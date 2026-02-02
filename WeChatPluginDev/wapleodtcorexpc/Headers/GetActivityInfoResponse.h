//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Activity, FinderEventBaseResponse;

@interface GetActivityInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) Activity *activity; // @dynamic activity;
@property(retain, nonatomic) FinderEventBaseResponse *baseResp; // @dynamic baseResp;

@end


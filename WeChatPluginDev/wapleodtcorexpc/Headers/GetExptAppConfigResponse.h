//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface GetExptAppConfigResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int currSvrSecond; // @dynamic currSvrSecond;
@property(retain, nonatomic) NSMutableArray *deleteExptList; // @dynamic deleteExptList;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(retain, nonatomic) NSString *globalSequence; // @dynamic globalSequence;
@property(nonatomic) unsigned int intervalSecond; // @dynamic intervalSecond;
@property(nonatomic) unsigned int needLocalExpt; // @dynamic needLocalExpt;
@property(retain, nonatomic) NSMutableArray *replaceExptList; // @dynamic replaceExptList;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface GetA8KeyLiteResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int batchCount; // @dynamic batchCount;
@property(retain, nonatomic) NSMutableArray *domainInfos; // @dynamic domainInfos;
@property(retain, nonatomic) NSMutableArray *prefetchDomainInfos; // @dynamic prefetchDomainInfos;
@property(retain, nonatomic) NSMutableArray *respInfo; // @dynamic respInfo;
@property(retain, nonatomic) NSMutableArray *ret; // @dynamic ret;

@end


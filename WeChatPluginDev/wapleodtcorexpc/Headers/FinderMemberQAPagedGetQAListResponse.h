//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderMemberQAPagedParam, FinderMemberSecConf, NSMutableArray;

@interface FinderMemberQAPagedGetQAListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *objects; // @dynamic objects;
@property(retain, nonatomic) FinderMemberQAPagedParam *pagedParam; // @dynamic pagedParam;
@property(retain, nonatomic) FinderMemberSecConf *secConf; // @dynamic secConf;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderCheckPrefetchConfig, NSData, NSMutableArray;

@interface FinderCheckPrefetchResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderCheckPrefetchConfig *checkConfig; // @dynamic checkConfig;
@property(retain, nonatomic) NSMutableArray *checkResult; // @dynamic checkResult;
@property(retain, nonatomic) NSData *lastCheckContext; // @dynamic lastCheckContext;
@property(retain, nonatomic) NSMutableArray *objects; // @dynamic objects;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, CommRequestSource, NSMutableArray;

@interface BatchGetDownloadUrlRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int predownloadScene; // @dynamic predownloadScene;
@property(retain, nonatomic) NSMutableArray *reqList; // @dynamic reqList;
@property(retain, nonatomic) CommRequestSource *requestSource; // @dynamic requestSource;

@end


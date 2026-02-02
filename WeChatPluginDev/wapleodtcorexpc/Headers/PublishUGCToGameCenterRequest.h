//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface PublishUGCToGameCenterRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *businessData; // @dynamic businessData;
@property(retain, nonatomic) NSMutableArray *mediaList; // @dynamic mediaList;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) NSString *taskId; // @dynamic taskId;

@end


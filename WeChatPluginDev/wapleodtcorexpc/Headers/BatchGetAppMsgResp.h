//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface BatchGetAppMsgResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appMsgContextList; // @dynamic appMsgContextList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int itemExpireTime; // @dynamic itemExpireTime;
@property(nonatomic) unsigned int preloadLimitDispatchDelay; // @dynamic preloadLimitDispatchDelay;
@property(retain, nonatomic) NSMutableArray *sceneControlList; // @dynamic sceneControlList;

@end


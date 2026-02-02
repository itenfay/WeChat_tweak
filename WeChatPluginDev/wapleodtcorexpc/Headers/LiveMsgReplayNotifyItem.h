//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderWindowProductInfo_ProductReplayInfo;

@interface LiveMsgReplayNotifyItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int finderLiveSyncExtraInfoCmdid; // @dynamic finderLiveSyncExtraInfoCmdid;
@property(nonatomic) unsigned long long productId; // @dynamic productId;
@property(retain, nonatomic) FinderWindowProductInfo_ProductReplayInfo *productReplayInfo; // @dynamic productReplayInfo;

@end


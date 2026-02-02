//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderFuncMsgBaseRequest_NotifyTipsInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *byPassInfo; // @dynamic byPassInfo;
@property(nonatomic) unsigned int ctrlinfoType; // @dynamic ctrlinfoType;
@property(nonatomic) unsigned long long deliveryTime; // @dynamic deliveryTime;
@property(nonatomic) unsigned int exposed; // @dynamic exposed;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned int liveStatus; // @dynamic liveStatus;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *tipsId; // @dynamic tipsId;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface LiveCrowdfundGiftInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *animationExtInfoList; // @dynamic animationExtInfoList;
@property(retain, nonatomic) NSMutableArray *animationList; // @dynamic animationList;
@property(nonatomic) _Bool cancel; // @dynamic cancel;
@property(retain, nonatomic) NSString *contentText; // @dynamic contentText;
@property(nonatomic) unsigned int endTimestamp; // @dynamic endTimestamp;
@property(retain, nonatomic) NSString *finishCarouselText; // @dynamic finishCarouselText;
@property(retain, nonatomic) NSString *finishContentText; // @dynamic finishContentText;
@property(retain, nonatomic) NSMutableArray *itemList; // @dynamic itemList;
@property(retain, nonatomic) NSMutableArray *landscapeAnimationExtInfoList; // @dynamic landscapeAnimationExtInfoList;
@property(retain, nonatomic) NSMutableArray *landscapeAnimationList; // @dynamic landscapeAnimationList;
@property(nonatomic) unsigned int startTimestamp; // @dynamic startTimestamp;
@property(nonatomic) unsigned int syncInterval; // @dynamic syncInterval;
@property(retain, nonatomic) NSString *taskId; // @dynamic taskId;

@end


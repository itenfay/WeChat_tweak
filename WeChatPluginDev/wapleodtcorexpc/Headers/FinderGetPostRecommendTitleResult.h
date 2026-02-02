//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray;

@interface FinderGetPostRecommendTitleResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int minWordChange; // @dynamic minWordChange;
@property(nonatomic) unsigned long long nextDuration; // @dynamic nextDuration;
@property(retain, nonatomic) NSMutableArray *recommendTitleInfoList; // @dynamic recommendTitleInfoList;
@property(retain, nonatomic) NSMutableArray *recommendWordingList; // @dynamic recommendWordingList;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;

@end


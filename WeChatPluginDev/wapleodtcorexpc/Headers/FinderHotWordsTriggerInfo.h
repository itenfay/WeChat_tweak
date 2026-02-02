//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderHotWordJumpInfo, NSString;

@interface FinderHotWordsTriggerInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int endTime; // @dynamic endTime;
@property(retain, nonatomic) FinderHotWordJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *keyWord; // @dynamic keyWord;
@property(nonatomic) unsigned int startTime; // @dynamic startTime;

@end


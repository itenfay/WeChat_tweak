//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, RingBackRecommendReasonUsedByFriendInfo;

@interface RingBackRecommendReasonInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *itemContext; // @dynamic itemContext;
@property(retain, nonatomic) NSString *reasonPureText; // @dynamic reasonPureText;
@property(nonatomic) unsigned long long recallCmdid; // @dynamic recallCmdid;
@property(retain, nonatomic) RingBackRecommendReasonUsedByFriendInfo *usedByFriendInfo; // @dynamic usedByFriendInfo;

@end


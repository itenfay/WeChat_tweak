//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderRelatedRecommendTips : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *friendLikeUsers; // @dynamic friendLikeUsers;
@property(nonatomic) unsigned int playProgressToShow; // @dynamic playProgressToShow;
@property(retain, nonatomic) NSString *relatedWording; // @dynamic relatedWording;
@property(nonatomic) unsigned int tipsType; // @dynamic tipsType;

@end


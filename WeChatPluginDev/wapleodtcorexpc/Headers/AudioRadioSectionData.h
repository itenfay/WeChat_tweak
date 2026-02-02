//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenDiscoverLine, MMListenFeedMixedListResponse, NSMutableArray, NSString;

@interface AudioRadioSectionData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *allMixFeedItems; // @dynamic allMixFeedItems;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) MMListenFeedMixedListResponse *lastResponse; // @dynamic lastResponse;
@property(retain, nonatomic) MMListenDiscoverLine *line; // @dynamic line;
@property(nonatomic) int retainedNum; // @dynamic retainedNum;
@property(nonatomic) int tabIndex; // @dynamic tabIndex;

@end


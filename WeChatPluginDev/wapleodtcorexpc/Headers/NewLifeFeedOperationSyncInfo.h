//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FinderObjectMonotonicData;

@class WXPBGeneratedMessage;

@interface NewLifeFeedOperationSyncInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(nonatomic) unsigned int finderLike; // @dynamic finderLike;
@property(nonatomic) unsigned int friendFinderLikeCount; // @dynamic friendFinderLikeCount;
@property(retain, nonatomic) FinderObjectMonotonicData *monotonicData; // @dynamic monotonicData;
@property(nonatomic) unsigned int operateType; // @dynamic operateType;

@end


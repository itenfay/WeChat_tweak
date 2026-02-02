//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString, StoryObject;

@class WXPBGeneratedMessage;

@interface StoryHistoryItem : WXPBGeneratedMessage
{
    int objIdListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *date; // @dynamic date;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(retain, nonatomic) NSMutableArray *objIdList; // @dynamic objIdList;
@property(nonatomic) unsigned int storyCount; // @dynamic storyCount;
@property(retain, nonatomic) StoryObject *storyObject; // @dynamic storyObject;

@end


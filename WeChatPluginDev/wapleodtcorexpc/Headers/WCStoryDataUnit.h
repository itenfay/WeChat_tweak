//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSMutableArray, NSString;

@interface WCStoryDataUnit : NSObject
{
    _Bool _hasUnreadStory;
    _Bool _chatRoomSyncChange;
    NSMutableArray *_storyDataItemArray;
    unsigned long long _storyDataItemCount;
    CContact *_userContact;
    unsigned long long _type;
    NSString *_dateKey;
    NSMutableArray *_arrTid;
    long long _cornerCount;
}

+ (id)historyDataUnitWithDateKey:(id)arg1 dataCount:(unsigned long long)arg2 dataItemArray:(id)arg3;
+ (id)storyDataUnitWithContact:(id)arg1 dataCount:(unsigned long long)arg2 storyDataItemArray:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long cornerCount; // @synthesize cornerCount=_cornerCount;
@property(nonatomic) _Bool chatRoomSyncChange; // @synthesize chatRoomSyncChange=_chatRoomSyncChange;
@property(retain, nonatomic) NSMutableArray *arrTid; // @synthesize arrTid=_arrTid;
@property(retain, nonatomic) NSString *dateKey; // @synthesize dateKey=_dateKey;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool hasUnreadStory; // @synthesize hasUnreadStory=_hasUnreadStory;
@property(retain, nonatomic) CContact *userContact; // @synthesize userContact=_userContact;
@property(nonatomic) unsigned long long storyDataItemCount; // @synthesize storyDataItemCount=_storyDataItemCount;
@property(retain, nonatomic) NSMutableArray *storyDataItemArray; // @synthesize storyDataItemArray=_storyDataItemArray;
- (id)lastDataItemTid;
- (int)lastModifyTime;
- (int)lastCreateTime;
- (long long)indexForItemWithTid:(id)arg1;
- (_Bool)needReloadData;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *unitLogIdentifier;
@property(readonly, nonatomic) NSString *unitIdentifier;

@end


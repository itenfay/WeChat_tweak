//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSArray, NSMutableDictionary, NSString;

@interface WCStoryTimelineDataVM : NSObject
{
    _Bool _hasReloadDataItem;
    NSArray *_allContactArray;
    NSMutableDictionary *_userContactDict;
    NSMutableDictionary *_chatRoomMyContactHasStoryDict;
    NSArray *_unreadContactUserNameArray;
    NSArray *_timestampUnreadNameArray;
    NSArray *_timestampReadNameArray;
    MMTimer *_reloadNotifyThrottle;
    unsigned long long _lastReadMaxTid;
}

+ (id)timelineStoryDataVM;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastReadMaxTid; // @synthesize lastReadMaxTid=_lastReadMaxTid;
@property(nonatomic) _Bool hasReloadDataItem; // @synthesize hasReloadDataItem=_hasReloadDataItem;
@property(retain, nonatomic) MMTimer *reloadNotifyThrottle; // @synthesize reloadNotifyThrottle=_reloadNotifyThrottle;
@property(copy, nonatomic) NSArray *timestampReadNameArray; // @synthesize timestampReadNameArray=_timestampReadNameArray;
@property(copy, nonatomic) NSArray *timestampUnreadNameArray; // @synthesize timestampUnreadNameArray=_timestampUnreadNameArray;
@property(retain, nonatomic) NSArray *unreadContactUserNameArray; // @synthesize unreadContactUserNameArray=_unreadContactUserNameArray;
@property(retain, nonatomic) NSMutableDictionary *chatRoomMyContactHasStoryDict; // @synthesize chatRoomMyContactHasStoryDict=_chatRoomMyContactHasStoryDict;
@property(retain, nonatomic) NSMutableDictionary *userContactDict; // @synthesize userContactDict=_userContactDict;
@property(copy, nonatomic) NSArray *allContactArray; // @synthesize allContactArray=_allContactArray;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)reloadDataItem:(id)arg1 unreadMessageUnitArray:(id)arg2;
- (id)getAllUnreadCommentMessage;
- (id)createDataUnitWithContact:(id)arg1 dataItemArray:(id)arg2;
- (id)createTimelineShowUnreadUnitArrayWithUserDataDict:(id)arg1;
- (id)getTimelineShowUnreadStoryUnitArray;
- (id)getTimelineCellModelForUnitArray:(id)arg1;
- (id)getMessageCellModelForUnitArray:(id)arg1;
- (id)getTimelineDataUnit;
- (unsigned long long)getTimeStampUnreadStoryCount;
- (id)initDataWithContactArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


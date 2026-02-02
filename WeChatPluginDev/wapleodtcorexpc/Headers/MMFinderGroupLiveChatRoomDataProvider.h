//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSArray, NSMutableArray, WCFinderGroupLiveChatSaveToLocalFileHandler;

@interface MMFinderGroupLiveChatRoomDataProvider : NSObject
{
    NSArray *_chatRoomItemCache;
    NSMutableArray *_mutaChatRoomItemCache;
    MMFinderLiveTaskId *_liveTaskId;
    WCFinderGroupLiveChatSaveToLocalFileHandler *_fileHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderGroupLiveChatSaveToLocalFileHandler *fileHandler; // @synthesize fileHandler=_fileHandler;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) NSMutableArray *mutaChatRoomItemCache; // @synthesize mutaChatRoomItemCache=_mutaChatRoomItemCache;
@property(retain, nonatomic) NSArray *chatRoomItemCache; // @synthesize chatRoomItemCache=_chatRoomItemCache;
- (id)finderLiveTaskForTaskId:(id)arg1;
- (id)loadRoomBoxIdList;
- (void)saveToLocal;
- (_Bool)isContainChatRoomItemInCache:(id)arg1;
- (void)clearChatRoomItems;
- (void)addChatRoomItemList:(id)arg1;
- (void)setup;
- (id)initWithLiveId:(id)arg1;

@end


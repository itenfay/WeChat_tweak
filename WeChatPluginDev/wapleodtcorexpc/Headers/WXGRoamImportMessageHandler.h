//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface WXGRoamImportMessageHandler : NSObject
{
    unsigned int _maxLocalID;
    NSMutableSet *_setChatName;
    NSMutableDictionary *_mediaPathMapTable;
    NSString *_folderPath;
}

+ (id)getBakChatMsgList:(id)arg1;
+ (id)msgWrapFromMsgItem:(id)arg1;
+ (void)finishAndUpdateSession;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *folderPath; // @synthesize folderPath=_folderPath;
@property(retain, nonatomic) NSMutableDictionary *mediaPathMapTable; // @synthesize mediaPathMapTable=_mediaPathMapTable;
@property(retain, nonatomic) NSMutableSet *setChatName; // @synthesize setChatName=_setChatName;
@property(nonatomic) unsigned int maxLocalID; // @synthesize maxLocalID=_maxLocalID;
- (_Bool)p_addContactListChat;
- (void)p_renameMediaFiles;
- (_Bool)p_handleMediaForMsgItem:(id)arg1 msgWrap:(id)arg2;
- (_Bool)p_performPatMsgFilter:(void *)arg1 inSession:(id)arg2;
- (_Bool)p_performMessageInsert:(void *)arg1 svrIDArray:(id)arg2 inSession:(id)arg3;
- (_Bool)p_performSpecialMessageInsert:(void *)arg1 inSession:(id)arg2;
- (_Bool)p_addMsgFromMsgList:(id)arg1 sessionName:(id)arg2;
- (_Bool)internalRecoverMessage:(id)arg1 mediaFolder:(id)arg2 sessionName:(id)arg3;

@end


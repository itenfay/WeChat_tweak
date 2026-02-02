//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, WXGImportAnalyseInfo;
@protocol WXGImportMessageHelperDelegate;

@interface WXGImportMessageHelper : NSObject
{
    _Bool _bShouldImport;
    _Bool _bShouldFilterMsg;
    unsigned int _maxLocalID;
    id <WXGImportMessageHelperDelegate> _delegate;
    NSMutableSet *_importChatName;
    WXGImportAnalyseInfo *_analyseInfo;
    NSMutableSet *_setChatName;
    NSMutableDictionary *_mediaPathMapTable;
    NSString *_folderPath;
}

+ (id)getBakChatMsgList:(id)arg1;
+ (id)splitMsgListIDArray:(id)arg1;
+ (void)finishAndUpdateSession;
- (void).cxx_destruct;
@property(nonatomic) _Bool bShouldFilterMsg; // @synthesize bShouldFilterMsg=_bShouldFilterMsg;
@property(copy, nonatomic) NSString *folderPath; // @synthesize folderPath=_folderPath;
@property(retain, nonatomic) NSMutableDictionary *mediaPathMapTable; // @synthesize mediaPathMapTable=_mediaPathMapTable;
@property(retain, nonatomic) NSMutableSet *setChatName; // @synthesize setChatName=_setChatName;
@property(nonatomic) _Bool bShouldImport; // @synthesize bShouldImport=_bShouldImport;
@property(nonatomic) unsigned int maxLocalID; // @synthesize maxLocalID=_maxLocalID;
@property(retain, nonatomic) WXGImportAnalyseInfo *analyseInfo; // @synthesize analyseInfo=_analyseInfo;
@property(readonly, nonatomic) NSMutableSet *importChatName; // @synthesize importChatName=_importChatName;
@property(nonatomic) __weak id <WXGImportMessageHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)p_addContactListChat;
- (void)p_renameMediaFiles;
- (_Bool)p_handleMediaForBakChatMsgItem:(id)arg1 msgWrap:(id)arg2 chatInfo:(id)arg3;
- (_Bool)p_performPatMsgFilter:(void *)arg1 inSession:(id)arg2;
- (_Bool)p_performMessageInsert:(void *)arg1 svrIDArray:(id)arg2 inSession:(id)arg3 chatInfo:(id)arg4;
- (_Bool)p_performSpecialMessageInsert:(void *)arg1 inSession:(id)arg2;
- (void)callBackImportOneMsgList:(id)arg1;
- (_Bool)p_addMsgFromMsgList:(id)arg1 withSessionName:(id)arg2 withStartTime:(unsigned int)arg3 withEndTime:(unsigned int)arg4 textOnly:(_Bool)arg5 isPathRelative:(_Bool)arg6;
- (_Bool)internalRecoverMessage:(id)arg1 withSessionName:(id)arg2 withStartTime:(unsigned int)arg3 withEndTime:(unsigned int)arg4 textOnly:(_Bool)arg5 pathRelative:(_Bool)arg6;
- (_Bool)internalRecoverMessage:(id)arg1 withSessionName:(id)arg2 withStartTime:(unsigned int)arg3 withEndTime:(unsigned int)arg4 textOnly:(_Bool)arg5;
- (_Bool)internalRecoverMessage:(id)arg1 withSessionName:(id)arg2 withStartTime:(unsigned int)arg3 withEndTime:(unsigned int)arg4;
- (void)stopImport;
- (id)initWithMsgListFolderPath:(id)arg1;
- (id)init;

@end


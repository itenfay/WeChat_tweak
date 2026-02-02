//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WeNoteReportLogic : NSObject
{
    NSString *m_noteID;
    NSString *m_sessionId;
    int m_enterNoteScene;
    _Bool m_isFromChatRoom;
    _Bool m_editable;
    int m_viewImageCount;
}

- (void).cxx_destruct;
- (void)reportSaveNoteImageWidth:(unsigned long long)arg1 Height:(unsigned long long)arg2 Length:(unsigned long long)arg3 errorCode:(unsigned int)arg4 Editable:(unsigned long long)arg5;
- (void)reportOnTop:(unsigned int)arg1 onTop:(_Bool)arg2;
- (void)reportTranslationWithFromTitleBtn:(_Bool)arg1 result:(unsigned int)arg2;
- (void)reportActionSheetOperation:(unsigned int)arg1 isSmallImageMode:(_Bool)arg2;
- (void)reportNoteContentSearchWithActionType:(int)arg1;
- (void)reportToolViewOperation:(int)arg1 isSmallImageMode:(_Bool)arg2 MediaType:(unsigned long long)arg3 favDetail:(id)arg4 count:(unsigned int)arg5;
- (void)reportToolViewOperation:(int)arg1 isSmallImageMode:(_Bool)arg2 MediaType:(unsigned long long)arg3;
- (void)reportToolViewOperation:(int)arg1 isSmallImageMode:(_Bool)arg2;
- (void)report27798WithTotalSize:(long long)arg1 favData:(id)arg2 msgIDOrFeedID:(id)arg3 actionType:(unsigned int)arg4 actionResult:(unsigned int)arg5 scene:(unsigned int)arg6;
- (void)report14789WithIsSmallImageMode:(_Bool)arg1 isInTranslation:(_Bool)arg2;
- (void)reportILogsWith:(int)arg1 logExt:(id)arg2;
- (void)increaseViewImageCount;
- (id)initWithNoteID:(id)arg1 sessionId:(id)arg2 openScene:(int)arg3 editable:(_Bool)arg4 isFromChatRoom:(_Bool)arg5;

@end


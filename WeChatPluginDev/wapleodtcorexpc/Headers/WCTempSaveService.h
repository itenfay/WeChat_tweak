//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSOperationQueue, NSString, WCTempSaveModel;

@interface WCTempSaveService
{
    _Bool _isReadingFile;
    unsigned long long _curType;
    WCTempSaveModel *_textModel;
    WCTempSaveModel *_mediaModel;
    NSOperationQueue *_mediaFileQueue;
    NSOperationQueue *_textFileQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReadingFile; // @synthesize isReadingFile=_isReadingFile;
@property(retain, nonatomic) NSOperationQueue *textFileQueue; // @synthesize textFileQueue=_textFileQueue;
@property(retain, nonatomic) NSOperationQueue *mediaFileQueue; // @synthesize mediaFileQueue=_mediaFileQueue;
@property(retain, nonatomic) WCTempSaveModel *mediaModel; // @synthesize mediaModel=_mediaModel;
@property(retain, nonatomic) WCTempSaveModel *textModel; // @synthesize textModel=_textModel;
@property(nonatomic) unsigned long long curType; // @synthesize curType=_curType;
- (id)getSessionID;
- (id)getTextModelFromFile;
- (id)getMediaModelFromFile;
- (_Bool)shouldAutoRemove:(id)arg1;
- (_Bool)isDynamicTagEnabledForTempSave;
- (id)getLastPostInVisibleLabelNames;
- (id)getLastPostVisibleLabelNames;
- (void)setMediaText:(id)arg1 imageArray:(id)arg2 sightDraft:(id)arg3 poiInfo:(id)arg4 tempSelectContacts:(id)arg5 remindContactUsernames:(id)arg6 pasteLength:(unsigned long long)arg7 withExtBean:(id)arg8 isDynamicTagEnabled:(_Bool)arg9 postCycleId:(id)arg10;
- (void)setText:(id)arg1 poiInfo:(id)arg2 tempSelectContacts:(id)arg3 remindContactUsernames:(id)arg4 pasteLength:(unsigned long long)arg5 withExtBean:(id)arg6 isDynamicTagEnabled:(_Bool)arg7 postCycleId:(id)arg8;
- (void)removeOldMediaFile;
- (void)removeOldTextFile;
- (id)openOldPostCycleId;
- (id)openOldMediaExtBean;
- (id)openOldTextExtBean;
- (unsigned long long)openOldMediaPasteLength;
- (id)openOldSight;
- (id)openOldImages;
- (id)openOldMediaText;
- (id)openOldText;
- (void)onServiceMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


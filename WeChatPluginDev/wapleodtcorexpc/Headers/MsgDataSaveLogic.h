//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol MsgDataSaveLogicDelegate;

@interface MsgDataSaveLogic : NSObject
{
    id <MsgDataSaveLogicDelegate> m_delegate;
    NSMutableDictionary *m_dicMsgDownloading;
    NSMutableArray *m_arrMsgToSave;
    NSMutableArray *m_arrMsgExpired;
    _Bool m_bOK;
    _Bool m_bExpired;
    _Bool m_bDownloadFail;
    _Bool m_bSaveFail;
    _Bool m_bAllSaved;
    unsigned int m_uiShareForbided;
    _Bool _saveToAlbum;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool saveToAlbum; // @synthesize saveToAlbum=_saveToAlbum;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)checkDownLoadEnd;
- (void)cancelLogic;
- (void)startDownload;
- (id)getSaveTipTitle;
- (void)realityDoSave;
- (void)onSave:(id)arg1 isShowTip:(_Bool)arg2;
- (void)onSave:(id)arg1;
- (void)saveOneByOne:(id)arg1;
- (void)saveMsg:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)imagePath:(id)arg1 forSave:(_Bool)arg2;
- (void)endLogic;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


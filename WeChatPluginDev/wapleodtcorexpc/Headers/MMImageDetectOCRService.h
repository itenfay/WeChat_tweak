//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageDetectUploader, NSMutableSet, NSString;

@interface MMImageDetectOCRService
{
    _Bool _enableLocalOCR;
    MMImageDetectUploader *_uploader;
    NSMutableSet *_cancelSessionIDSet;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableLocalOCR; // @synthesize enableLocalOCR=_enableLocalOCR;
@property(retain, nonatomic) NSMutableSet *cancelSessionIDSet; // @synthesize cancelSessionIDSet=_cancelSessionIDSet;
@property(retain, nonatomic) MMImageDetectUploader *uploader; // @synthesize uploader=_uploader;
- (id)buildLocalOCRResultJson:(id)arg1 reqKey:(id)arg2;
- (id)genLocalOCRReqKey;
- (void)doLocalImageOCR:(id)arg1 imagePath:(id)arg2;
- (_Bool)checkLocalImageOCR:(id)arg1 errCode:(int)arg2;
- (_Bool)enableImageLocalOCR:(int)arg1;
- (_Bool)openLocalOCRTest;
- (void)notifyOCRFinish:(id)arg1 resultType:(unsigned int)arg2 jsonStr:(id)arg3 reqKey:(id)arg4 ocrResultType:(long long)arg5;
- (void)notifyOCRFinish:(id)arg1 resultType:(unsigned int)arg2 jsonStr:(id)arg3 reqKey:(id)arg4;
- (void)notifyUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleImageDetectOCR:(id)arg1;
- (void)startImageDetectOCR:(id)arg1 detectMediaInfo:(id)arg2;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)cancelImageUploadAndDetect:(unsigned long long)arg1;
- (void)startImageUploadAndDetect:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


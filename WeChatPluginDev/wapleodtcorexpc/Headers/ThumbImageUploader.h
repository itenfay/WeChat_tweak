//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMCommonCgiUploader, NSString;

@interface ThumbImageUploader : NSObject
{
    _Bool _enableHitCheck;
    _Bool _isUseCgi;
    NSString *_fileKey;
    NSString *_fileID;
    NSString *_aesk;
    NSString *_filePath;
    long long _scene;
    MMCommonCgiUploader *_cgiUploader;
    CDUnknownBlockType _completeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) MMCommonCgiUploader *cgiUploader; // @synthesize cgiUploader=_cgiUploader;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isUseCgi; // @synthesize isUseCgi=_isUseCgi;
@property(nonatomic) _Bool enableHitCheck; // @synthesize enableHitCheck=_enableHitCheck;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *aesk; // @synthesize aesk=_aesk;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
- (void)onUploadProgress:(id)arg1 uploadProgress:(double)arg2;
- (void)onUploadFail:(id)arg1 uploadId:(id)arg2 retCode:(long long)arg3;
- (void)onUploadSuccess:(id)arg1 result:(id)arg2;
- (void)onUploadFail:(id)arg1;
- (void)onUploadSuccess:(id)arg1;
- (void)startUploadToCdn;
- (void)startUploadWithComplete:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


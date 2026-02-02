//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock;

@interface MJOCRProcessor : NSObject
{
    _Bool _isInitSuccess;
    NSRecursiveLock *_lock;
    struct unique_ptr<ocrlite::OcrApi, std::default_delete<ocrlite::OcrApi>> _ocrApi;
}

+ (id)convertToSDRWithImage:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)asyncExtractTextWithImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)asyncDetectTextWithImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)releaseOCRCache;
- (id)extractTextWithImage:(id)arg1;
- (double)detectTextWithImage:(id)arg1;
- (_Bool)checkIfInitSuccess;
- (_Bool)checkModelFilesExist;
- (void)InitModel;
- (void)dealloc;
- (id)init;

@end


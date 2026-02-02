//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class XNetInferenceSession;
@protocol OS_dispatch_queue;

@interface EnhanceTranslatingUtil : NSObject
{
    NSObject<OS_dispatch_queue> *_detectorsQueue;
    XNetInferenceSession *_xnetSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XNetInferenceSession *xnetSession; // @synthesize xnetSession=_xnetSession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *detectorsQueue; // @synthesize detectorsQueue=_detectorsQueue;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)callBack:(unsigned long long)arg1 vetrices:(id)arg2 docImg:(id)arg3 originImg:(id)arg4;
- (void)detectDocumentArea:(id)arg1 cropRect:(struct CGRect)arg2 sessionId:(unsigned long long)arg3;
- (_Bool)checkModelExist;
- (void)releaseModel;
- (void)loadModel;
- (void)checkModelUpdate;
- (id)modelCachePath;
- (id)modelPath;
- (id)init;

@end


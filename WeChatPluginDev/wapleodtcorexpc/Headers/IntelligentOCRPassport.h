//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock;

@interface IntelligentOCRPassport : NSObject
{
    _Bool m_intelligentOCRInitSuccess;
    NSRecursiveLock *m_lock;
    void *ocr_api;
}

- (void).cxx_destruct;
- (long long)PassportPitchDetectionWithPassport:(void *)arg1 minAngle:(long long)arg2;
- (id)UIImageFromCVMat:(struct Mat)arg1;
- (id)WarpPerspectiveRect:(id)arg1 passport:(void *)arg2 padding_border:(int)arg3;
- (void)setDetectPassportWithMinArea:(int)arg1 withMinCoverArea:(int)arg2 withMinReflectArea:(int)arg3 withMinBlurArea:(int)arg4;
- (int)detectPassportWithImage:(id)arg1 passport:(void *)arg2;
- (_Bool)releaseXNetCache;
- (_Bool)checkOCRInitSuccess;
- (_Bool)checkModelFilesExist;
- (_Bool)isEnableDataReport;
- (void)InitModel;
- (id)getPassportModelPath;
- (void)dealloc;
- (id)init;

@end


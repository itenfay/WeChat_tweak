//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, TPLock;

@interface TPCertificateMgr : NSObject
{
    NSString *_certificateUrl;
    NSString *_cachedDir;
    NSString *_certificateCachedPath;
    NSData *_certificateData;
    TPLock *_lockOfCertificateFile;
    TPLock *_lockOfCompletion;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) TPLock *lockOfCompletion; // @synthesize lockOfCompletion=_lockOfCompletion;
@property(retain, nonatomic) TPLock *lockOfCertificateFile; // @synthesize lockOfCertificateFile=_lockOfCertificateFile;
@property(retain, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(retain, nonatomic) NSString *certificateCachedPath; // @synthesize certificateCachedPath=_certificateCachedPath;
@property(retain, nonatomic) NSString *cachedDir; // @synthesize cachedDir=_cachedDir;
@property(retain, nonatomic) NSString *certificateUrl; // @synthesize certificateUrl=_certificateUrl;
- (void)clearCompletionBlockSafely;
- (void)tryToExcuteBlock:(CDUnknownBlockType)arg1 withCerData:(id)arg2;
- (void)writeCertificateToLocalWithUrl:(id)arg1 cerData:(id)arg2;
- (id)getCertificateFromLocalWith:(id)arg1;
- (void)getCertificateFromServerWith:(id)arg1;
- (void)getCertificateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCertificateUrl:(id)arg1 cacheDir:(id)arg2;

@end


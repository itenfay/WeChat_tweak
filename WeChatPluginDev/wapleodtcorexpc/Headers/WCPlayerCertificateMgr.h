//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSLock, NSString;

@interface WCPlayerCertificateMgr : NSObject
{
    NSString *_certificateUrl;
    NSString *_cachedDir;
    NSString *_certificateCachedPath;
    NSData *_certificateData;
    NSLock *_lockOfCertificateFile;
    NSString *_errorDes;
    NSLock *_lockOfCompletion;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSLock *lockOfCompletion; // @synthesize lockOfCompletion=_lockOfCompletion;
@property(retain, nonatomic) NSString *errorDes; // @synthesize errorDes=_errorDes;
@property(retain, nonatomic) NSLock *lockOfCertificateFile; // @synthesize lockOfCertificateFile=_lockOfCertificateFile;
@property(retain, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(retain, nonatomic) NSString *certificateCachedPath; // @synthesize certificateCachedPath=_certificateCachedPath;
@property(retain, nonatomic) NSString *cachedDir; // @synthesize cachedDir=_cachedDir;
@property(retain, nonatomic) NSString *certificateUrl; // @synthesize certificateUrl=_certificateUrl;
- (void)safeExcuteCompletionBlock;
- (void)writeCertificateToLocalWithUrl:(id)arg1 cerData:(id)arg2;
- (id)getCertificateLocal;
- (void)getCertificateFromServerWith:(id)arg1;
- (void)getCertificateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCertificateUrl:(id)arg1;

@end


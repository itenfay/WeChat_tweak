//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol PLzmaSDKEncoderDelegate;

@interface PLzmaSDKEncoder : NSObject
{
    struct SharedPtr<plzma::Encoder> _encoder;
    struct shared_ptr<PLzmaSDKProgressDelegate> _progressDelegate;
    id <PLzmaSDKEncoderDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PLzmaSDKEncoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithStream:(id)arg1 fileType:(unsigned char)arg2 method:(unsigned char)arg3 andDelegate:(id)arg4;
- (void)setPassword:(id)arg1;
- (void)addStream:(id)arg1 withArchivePath:(id)arg2;
- (void)addPath:(id)arg1 withMode:(unsigned char)arg2 andArchivePath:(id)arg3;
- (void)addPath:(id)arg1 withMode:(unsigned char)arg2;
- (_Bool)compress;
- (void)abort;
- (_Bool)open;
@property(nonatomic) _Bool shouldStoreModificationTime;
@property(nonatomic) _Bool shouldStoreAccessTime;
@property(nonatomic) _Bool shouldStoreCreationTime;
@property(nonatomic) _Bool shouldEncryptHeader;
@property(nonatomic) _Bool shouldEncryptContent;
@property(nonatomic) _Bool shouldCompressHeaderFull;
@property(nonatomic) _Bool shouldCompressHeader;
@property(nonatomic) unsigned char compressionLevel;
@property(nonatomic) _Bool shouldCreateSolidArchive;
- (void)onCPath:(const char *)arg1 progress:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


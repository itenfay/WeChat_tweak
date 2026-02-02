//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMMusicVideoImageDownloader : NSObject
{
    _Bool _hasFinished;
    CDUnknownBlockType _imageCallback;
    NSString *_currentDownloadingUrl;
    NSData *_thumbImageData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasFinished; // @synthesize hasFinished=_hasFinished;
@property(retain, nonatomic) NSData *thumbImageData; // @synthesize thumbImageData=_thumbImageData;
@property(retain, nonatomic) NSString *currentDownloadingUrl; // @synthesize currentDownloadingUrl=_currentDownloadingUrl;
@property(copy, nonatomic) CDUnknownBlockType imageCallback; // @synthesize imageCallback=_imageCallback;
- (void)doCallback;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)dealloc;
- (id)compressImageData:(id)arg1;
- (void)onWaitTimeOut;
- (void)downloadThubmImage:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)trigerDownload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


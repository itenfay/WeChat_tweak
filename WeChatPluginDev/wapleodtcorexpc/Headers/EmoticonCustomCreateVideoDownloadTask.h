//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedMediaWrap, WCFinderMediaInfo;

@interface EmoticonCustomCreateVideoDownloadTask
{
    unsigned long long _targetBitrate;
    WCFinderFeedMediaWrap *_downloadingWrap;
    WCFinderMediaInfo *_mediaInfo;
    CDUnknownBlockType _finderAlreadyExistBlock;
    CDUnknownBlockType _finderProgressBlock;
    CDUnknownBlockType _finderSucBlock;
    NSString *_feedId;
    NSString *_nonceId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(copy, nonatomic) CDUnknownBlockType finderSucBlock; // @synthesize finderSucBlock=_finderSucBlock;
@property(copy, nonatomic) CDUnknownBlockType finderProgressBlock; // @synthesize finderProgressBlock=_finderProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType finderAlreadyExistBlock; // @synthesize finderAlreadyExistBlock=_finderAlreadyExistBlock;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) WCFinderFeedMediaWrap *downloadingWrap; // @synthesize downloadingWrap=_downloadingWrap;
@property(nonatomic) unsigned long long targetBitrate; // @synthesize targetBitrate=_targetBitrate;
- (void)finderMediaVideoStreamDownloadFailedWithTid:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (id)getLocalFinderMediaPath:(id)arg1 mediaInfo:(id)arg2;
- (_Bool)interruptDownload;
- (void)prepareDownloadTask:(CDUnknownBlockType)arg1;
- (void)startDownload;
- (void)dealloc;
- (id)initWithFinderMediaInfo:(id)arg1;
- (id)initWithFinderFeedId:(id)arg1 nonceId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


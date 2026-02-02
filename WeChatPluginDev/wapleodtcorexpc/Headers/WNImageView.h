//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WNImageViewDelegate;

@interface WNImageView
{
    _Bool _isThumb;
    NSString *localSrcPath;
    NSString *cdnUrl;
    unsigned long long dataSize;
    id <WNImageViewDelegate> delegate;
    NSString *_dataId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isThumb; // @synthesize isThumb=_isThumb;
@property(retain, nonatomic) NSString *dataId; // @synthesize dataId=_dataId;
@property(nonatomic) __weak id <WNImageViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl;
@property(retain, nonatomic) NSString *localSrcPath; // @synthesize localSrcPath;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(_Bool)arg3;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)stopLoadingImage;
- (void)loadingImageWithGCD;
- (void)forceLoadImage;
- (_Bool)startLoadingImage;
- (id)getCompressImageWithPath:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString;

@interface EmoticonCustomCreateImageDownloadTask
{
    CDUnknownBlockType _finderProgressBlock;
    CDUnknownBlockType _finderSucBlock;
    NSArray *_mediaInfoArray;
    NSMutableArray *_needDownloadImages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *needDownloadImages; // @synthesize needDownloadImages=_needDownloadImages;
@property(retain, nonatomic) NSArray *mediaInfoArray; // @synthesize mediaInfoArray=_mediaInfoArray;
@property(copy, nonatomic) CDUnknownBlockType finderSucBlock; // @synthesize finderSucBlock=_finderSucBlock;
@property(copy, nonatomic) CDUnknownBlockType finderProgressBlock; // @synthesize finderProgressBlock=_finderProgressBlock;
- (_Bool)isDownloadingMultiImages;
- (double)currentDownloadingProgress;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)tryDownloadNextImage;
- (_Bool)interruptDownload;
- (void)startDownload;
- (void)dealloc;
- (id)initWithFinderMediaInfoArray:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSString, NSURL;
@protocol ImageDownloadLoaderDelegate;

@interface ImageDownloadLoader : NSObject
{
    NSMutableSet *m_filePathSet;
    _Bool m_isDownloading;
    id <ImageDownloadLoaderDelegate> _delegate;
    NSURL *_imgUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(nonatomic) __weak id <ImageDownloadLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)finishDownloadWithData:(id)arg1;
- (void)addDownloadTaskWithFilePath:(id)arg1;
@property(readonly, nonatomic) NSArray *filePathToSaveList;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


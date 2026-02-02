//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedContentVM, WCFinderFeedMediaWrap;

@interface WCFinderFeedVideoFetcher : NSObject
{
    WCFinderFeedContentVM *_contentVM;
    CDUnknownBlockType _completion;
    WCFinderFeedMediaWrap *_currentDownloadingMediaWrap;
}

+ (id)localFilePathOfMediaWrap:(id)arg1;
+ (id)fetcherWithContentVM:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedMediaWrap *currentDownloadingMediaWrap; // @synthesize currentDownloadingMediaWrap=_currentDownloadingMediaWrap;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (void)OnCdnDownloadError:(id)arg1;
- (void)finderMediaVideoStreamDownloadFailedWithTid:(id)arg1;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (void)asyncGetDownloadVideoWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithContentVM:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


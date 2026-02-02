//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface LocalJSEventHandler_shareImage
{
    _Bool _isDownloadingImage;
    _Bool _willShareToFriend;
    _Bool _willShareToTimeLine;
    NSString *_cacheKey;
    NSData *_imageData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool willShareToTimeLine; // @synthesize willShareToTimeLine=_willShareToTimeLine;
@property(nonatomic) _Bool willShareToFriend; // @synthesize willShareToFriend=_willShareToFriend;
@property(nonatomic) _Bool isDownloadingImage; // @synthesize isDownloadingImage=_isDownloadingImage;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getCurrentViewController;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (void)shareImageToTimeLineWithData:(id)arg1;
- (void)shareImageToFriendWithData:(id)arg1;
- (void)tryShareToDestination:(unsigned long long)arg1;
- (id)genKeyForUrl:(id)arg1;
- (void)getImageDataWithHttpUrl:(id)arg1;
- (void)showActionSheet;
- (void)handleJSEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


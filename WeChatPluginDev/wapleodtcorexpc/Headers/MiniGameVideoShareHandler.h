//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ForwardMessageLogicController, MiniGameVideoFile, NSMutableData, NSString, NSURLSession;

@interface MiniGameVideoShareHandler : NSObject
{
    ForwardMessageLogicController *m_forwardMsgLogic;
    _Bool _isCancel;
    float _lastPercent;
    NSString *_fileKey;
    NSString *_thumbPath;
    MiniGameVideoFile *_videoFile;
    unsigned long long _shareType;
    NSURLSession *_urlSession;
    NSMutableData *_m_recData;
    NSString *_shareUrl;
    NSString *_shareThumbUrl;
    CDUnknownBlockType _onShareCallback;
    CDUnknownBlockType _cancelCallback;
    CDUnknownBlockType _finishCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType finishCallback; // @synthesize finishCallback=_finishCallback;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(copy, nonatomic) CDUnknownBlockType onShareCallback; // @synthesize onShareCallback=_onShareCallback;
@property(copy, nonatomic) NSString *shareThumbUrl; // @synthesize shareThumbUrl=_shareThumbUrl;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) NSMutableData *m_recData; // @synthesize m_recData=_m_recData;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) float lastPercent; // @synthesize lastPercent=_lastPercent;
@property(nonatomic) unsigned long long shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) MiniGameVideoFile *videoFile; // @synthesize videoFile=_videoFile;
@property(copy, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(copy, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
- (void)dealloc;
- (void)cancelShare;
- (void)clearCurData;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)doShareRequest:(id)arg1 thumbUrl:(id)arg2;
- (id)getHttpsThumbUrl:(id)arg1;
- (void)shareToTimelineWithShareUrl:(id)arg1 thumbUrl:(id)arg2 imageData:(id)arg3;
- (void)shareToFriendWithShareUrl:(id)arg1 thumbUrl:(id)arg2 imageData:(id)arg3;
- (void)shareWithShareUrl:(id)arg1 thumbUrl:(id)arg2;
- (void)startUploadVideoWithThumbPath:(id)arg1;
- (void)share;
- (id)createThumbPic;
- (void)setOnShareBlock:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (id)initWithVideoFile:(id)arg1 shareType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


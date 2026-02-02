//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderUniCommentRequest, NSMutableArray, NSString, WCFinderComment;

@interface FinderUniCommentTask : NSObject
{
    CDUnknownBlockType _completion;
    WCFinderComment *_finderComment;
    NSString *_localDirectory;
    NSMutableArray *_pendingSteps;
    FinderUniCommentRequest *_resultRequest;
    unsigned long long _processFinishCount;
    unsigned long long _uploadFinishCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long uploadFinishCount; // @synthesize uploadFinishCount=_uploadFinishCount;
@property(nonatomic) unsigned long long processFinishCount; // @synthesize processFinishCount=_processFinishCount;
@property(retain, nonatomic) FinderUniCommentRequest *resultRequest; // @synthesize resultRequest=_resultRequest;
@property(retain, nonatomic) NSMutableArray *pendingSteps; // @synthesize pendingSteps=_pendingSteps;
@property(copy, nonatomic) NSString *localDirectory; // @synthesize localDirectory=_localDirectory;
@property(retain, nonatomic) WCFinderComment *finderComment; // @synthesize finderComment=_finderComment;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)buidSendCommentReqeustWithComment:(id)arg1;
- (void)compressMediaHandlerWithCompletion:(CDUnknownBlockType)arg1;
- (void)onFinishUploadMediaWithCompletion:(CDUnknownBlockType)arg1;
- (void)uploadMediaHandlerWithCompletion:(CDUnknownBlockType)arg1;
- (id)resizeImage:(id)arg1 toMaxWidth:(int)arg2 andMaxHeight:(int)arg3;
- (void)onFinishCopyMediaWithCompletion:(CDUnknownBlockType)arg1;
- (void)copyMediaWithImageInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyAndExportVideoWithVideoInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyMediaFileWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentTaskDirectory;
- (CDUnknownBlockType)handlerForStep:(unsigned long long)arg1;
- (void)execute;
- (_Bool)shouldContinueWithError:(id)arg1;
- (id)initWithComment:(id)arg1 localDirectory:(id)arg2;

@end


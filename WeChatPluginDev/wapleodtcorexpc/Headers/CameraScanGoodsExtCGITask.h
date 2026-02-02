//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScanGoodsItemViewModel, NSData;
@protocol CameraScanGoodsExtCGITaskDelegate;

@interface CameraScanGoodsExtCGITask
{
    _Bool _isCancelled;
    _Bool _isNeedPreload;
    unsigned int _taskId;
    CameraScanGoodsItemViewModel *_itemVM;
    id <CameraScanGoodsExtCGITaskDelegate> _delegate;
    unsigned long long _sessionId;
    NSData *_uploadImageData;
    struct CGSize _uploadImageSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize uploadImageSize; // @synthesize uploadImageSize=_uploadImageSize;
@property(retain, nonatomic) NSData *uploadImageData; // @synthesize uploadImageData=_uploadImageData;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool isNeedPreload; // @synthesize isNeedPreload=_isNeedPreload;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) __weak id <CameraScanGoodsExtCGITaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CameraScanGoodsItemViewModel *itemVM; // @synthesize itemVM=_itemVM;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleExchanedItemInfoResponse:(id)arg1;
- (void)startExchanedItemInfo;
- (void)__callDelegateTaskUploadDone;
- (void)handleUploadResponse:(id)arg1;
- (void)startUploadItem;
- (unsigned long long)uploadImageEncodeType;
- (void)genUploadImageData;
- (void)end;
- (void)start;
- (void)dealloc;
- (id)initWithItemViewModel:(id)arg1 sessionId:(unsigned long long)arg2;

@end


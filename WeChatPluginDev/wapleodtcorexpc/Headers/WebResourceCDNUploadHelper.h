//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WebviewLocalResItem;
@protocol WebResourceCDNUploadHelperDelegate;

@interface WebResourceCDNUploadHelper
{
    _Bool _isUploading;
    NSMutableArray *_uploadArray;
    WebviewLocalResItem *_curUploadingItem;
    id <WebResourceCDNUploadHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WebResourceCDNUploadHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)handleGetMediaIdResp:(id)arg1;
- (void)sendNextResItemGetMediaIdRequest;
- (void)sendGetMediaIdRequest;
- (void)sendUploadRequest;
- (_Bool)stopUpload;
- (_Bool)startUpload;
- (void)addUploadCDNItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end


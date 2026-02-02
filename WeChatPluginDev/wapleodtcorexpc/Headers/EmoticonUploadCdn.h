//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CdnUploadEmojiInfo;
@protocol EmoticonUploadCdnDelegate;

@interface EmoticonUploadCdn
{
    id <EmoticonUploadCdnDelegate> _delegate;
    CdnUploadEmojiInfo *_cdnInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnUploadEmojiInfo *cdnInfo; // @synthesize cdnInfo=_cdnInfo;
@property(nonatomic) __weak id <EmoticonUploadCdnDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnCdnUpload:(id)arg1;
- (void)stopUpload;
- (void)startUpload;
- (id)initWithPassData:(id)arg1 uploadInfo:(id)arg2 delegate:(id)arg3;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavFullScreenImageViewController, MMUIActivityIndicatorView, MMUIImageView, MMUILabel, NSString;
@protocol MailRTEImageAttachmentViewDelegate;

@interface MailRTEImageAttachmentView
{
    MMUIActivityIndicatorView *m_loadingView;
    MMUILabel *m_failLabel;
    unsigned int _dataSize;
    unsigned int _uiPlayTimes;
    id <MailRTEImageAttachmentViewDelegate> _delegate;
    MMUIImageView *_imageView;
    NSString *_localImagePath;
    FavFullScreenImageViewController *_favImageVC;
    double _imageScale;
}

- (void).cxx_destruct;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) unsigned int uiPlayTimes; // @synthesize uiPlayTimes=_uiPlayTimes;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize=_dataSize;
@property(nonatomic) __weak FavFullScreenImageViewController *favImageVC; // @synthesize favImageVC=_favImageVC;
@property(retain, nonatomic) NSString *localImagePath; // @synthesize localImagePath=_localImagePath;
@property(retain, nonatomic) MMUIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <MailRTEImageAttachmentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnUploadData:(id)arg1 filename:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (void)onFavFullScreenEditImageAt:(unsigned int)arg1 withImage:(id)arg2;
- (void)onEdit:(id)arg1;
- (void)openImageWithEdit:(_Bool)arg1;
- (void)onLongPressObject:(id)arg1;
- (void)onClickObject;
- (void)layoutView;
- (id)mailRTEAttachment;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


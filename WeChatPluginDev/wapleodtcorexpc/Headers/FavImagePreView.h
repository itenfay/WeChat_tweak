//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, MMWebImageView, NSString, UIView;
@protocol FavImagePreViewDelegate, RecordNodeDataSource;

@interface FavImagePreView
{
    UIView *m_maskView;
    MMWebImageView *m_imgPreView;
    NSString *m_imageLocalPath;
    unsigned long long imageDataSize;
    MMUIView *m_imgvBack;
    MMUIView *m_imgvFront;
    unsigned int m_progressLength;
    _Bool m_bIsImageExit;
    _Bool m_bIsSourceImg;
    _Bool m_bIsLongPressHandled;
    id <FavImagePreViewDelegate> m_delegate;
    id <RecordNodeDataSource> dataSource;
}

+ (id)generatePreImgPathByImgPath:(id)arg1;
+ (struct CGSize)GetPreSizeByImageSize:(struct CGSize)arg1 maxWidth:(double)arg2;
+ (struct CGSize)GetPreSizeByRecordDataSource:(id)arg1 maxWidth:(double)arg2;
+ (struct CGSize)GetPreSizeByRecordDataSource:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <FavImagePreViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_imageLocalPath; // @synthesize m_imageLocalPath;
@property(retain, nonatomic) id <RecordNodeDataSource> dataSource; // @synthesize dataSource;
- (void)OnDownloadRecordMessagePart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(_Bool)arg3;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)OnFavCdnDownload:(id)arg1 TotalLength:(unsigned long long)arg2 FinishLength:(unsigned long long)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateProgressFinishedLength:(unsigned long long)arg1 TotalLength:(unsigned long long)arg2;
- (void)initProgressView;
- (void)startLoadImageWithGCD;
- (id)getPreviewImage;
- (id)compressImage:(id)arg1;
- (void)hideMaskView;
- (void)showMaskView;
- (void)onClickFavImage;
- (void)windowHide:(id)arg1;
- (void)OnLongPressFavImage;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onBeginLongPress;
- (void)pressedEvents;
- (void)LongPressEvents;
- (void)initData;
- (void)startLoadImageWithMaxWidth:(double)arg1;
- (void)startLoadImage;
- (id)initWithDataSource:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


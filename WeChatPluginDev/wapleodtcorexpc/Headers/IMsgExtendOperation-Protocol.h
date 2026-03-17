//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageDB, CMessageWrap, ImageInfo, MessageAssetThreshold, NSData, NSString, UIImage;
@protocol MessageWrapImgDelegate;

@protocol IMsgExtendOperation <NSObject>
@property(nonatomic) __weak CMessageWrap *m_refMessageWrap;
- (id)copy;

@optional
- (NSString *)msgReferSummaryAndReplace:(_Bool)arg1;
- (_Bool)msgCanBeRefered;
- (NSString *)messageFTSTextForDisplay;
- (NSString *)messageFTSText;
- (NSString *)GetDisplaySessionContent;
- (NSString *)GetDisplayContent;
- (void)UpdateMassSendContent;
- (void)genearteThumbIfNeed;
- (_Bool)genImageFromMMAssetAndNotify:(id <MessageWrapImgDelegate>)arg1 threshold:(MessageAssetThreshold *)arg2;
- (_Bool)genImageFromMMAssetAndNotify:(id <MessageWrapImgDelegate>)arg1;
- (_Bool)IsHDImg;
- (void)setImage:(UIImage *)arg1 withImageInfo:(ImageInfo *)arg2 isLongOriginImage:(_Bool)arg3;
- (void)setImage:(UIImage *)arg1 withData:(NSData *)arg2 withImageInfo:(ImageInfo *)arg3 isLongOriginImage:(_Bool)arg4;
- (void)setImage:(UIImage *)arg1 withData:(NSData *)arg2 isLongOriginImage:(_Bool)arg3;
- (void)setImage:(UIImage *)arg1 isLongOriginImage:(_Bool)arg2;
- (_Bool)GetDownloadThumbStatus:(unsigned int *)arg1;
- (_Bool)isShowAppMessageBlockButton;
- (_Bool)isShowAppBottomButton;
- (unsigned int)GetPreviewType;
- (NSString *)getFileExt;
- (void)UpdateVideoStatus:(CMessageDB *)arg1;
- (void)SetPlaySounded:(_Bool)arg1;
- (_Bool)IsPlaySounded;
- (_Bool)IsRecording;
- (void)SetPlayed;
- (_Bool)IsDownloadEnded;
- (_Bool)IsUnPlayed;
- (_Bool)SaveMesVoice:(NSString *)arg1;
- (NSString *)GetBufferUploadContent;
- (NSString *)GetDownloadThumbPath;
- (NSString *)GetThumbPath;
- (void)UpdateMsgSource;
- (void)ChangeForMsgSource;
- (void)ChangeForSimpleMsgInfo;
- (void)UpdateGameInfo:(NSString *)arg1;
- (NSString *)GetGameStatReportString;
- (NSString *)GetContent;
- (void)UpdateContent:(NSString *)arg1;
- (void)ChangeForDisplayAnyhow;
- (void)ChangeForDisplay;
@end


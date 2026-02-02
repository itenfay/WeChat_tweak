//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmotionFinderLinkInfo, NSMutableArray, NSString;

@interface EmoticonUploadInfoObj
{
    _Bool _isUploadWxam;
    _Bool _isSelfie;
    _Bool _needAsyncUpload;
    _Bool _needAppendUserData;
    NSString *_uploadImgMd5;
    NSString *_tempFilePath;
    NSString *_attachedText;
    NSString *_attachedTextColor;
    NSMutableArray *_attachedEmojiMd5List;
    NSString *_followMd5;
    NSString *_uploadFilePath;
    unsigned long long _status;
    unsigned long long _failReason;
    unsigned long long _retryCount;
    unsigned long long _selfieEnterTime;
    unsigned long long _selfieScene;
    NSString *_lensId;
    unsigned long long _uploadScene;
    NSMutableArray *_wordings;
    EmotionFinderLinkInfo *_finderSourceInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_wordings;
+ (void)PBArrayAdd_uploadScene;
+ (void)PBArrayAdd_lensId;
+ (void)PBArrayAdd_attachedTextColor;
+ (void)PBArrayAdd_selfieScene;
+ (void)PBArrayAdd_selfieEnterTime;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_needAsyncUpload;
+ (void)PBArrayAdd_failReason;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_isSelfie;
+ (void)PBArrayAdd_followMd5;
+ (void)PBArrayAdd_attachedEmojiMd5List;
+ (void)PBArrayAdd_attachedText;
+ (void)PBArrayAdd_isUploadWxam;
+ (void)PBArrayAdd_uploadImgMd5;
- (void).cxx_destruct;
@property(nonatomic) _Bool needAppendUserData; // @synthesize needAppendUserData=_needAppendUserData;
@property(retain, nonatomic) EmotionFinderLinkInfo *finderSourceInfo; // @synthesize finderSourceInfo=_finderSourceInfo;
@property(retain, nonatomic) NSMutableArray *wordings; // @synthesize wordings=_wordings;
@property(nonatomic) unsigned long long uploadScene; // @synthesize uploadScene=_uploadScene;
@property(retain, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(nonatomic) unsigned long long selfieScene; // @synthesize selfieScene=_selfieScene;
@property(nonatomic) unsigned long long selfieEnterTime; // @synthesize selfieEnterTime=_selfieEnterTime;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool needAsyncUpload; // @synthesize needAsyncUpload=_needAsyncUpload;
@property(nonatomic) unsigned long long failReason; // @synthesize failReason=_failReason;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *uploadFilePath; // @synthesize uploadFilePath=_uploadFilePath;
@property(nonatomic) _Bool isSelfie; // @synthesize isSelfie=_isSelfie;
@property(retain, nonatomic) NSString *followMd5; // @synthesize followMd5=_followMd5;
@property(retain, nonatomic) NSMutableArray *attachedEmojiMd5List; // @synthesize attachedEmojiMd5List=_attachedEmojiMd5List;
@property(retain, nonatomic) NSString *attachedTextColor; // @synthesize attachedTextColor=_attachedTextColor;
@property(retain, nonatomic) NSString *attachedText; // @synthesize attachedText=_attachedText;
@property(retain, nonatomic) NSString *tempFilePath; // @synthesize tempFilePath=_tempFilePath;
@property(nonatomic) _Bool isUploadWxam; // @synthesize isUploadWxam=_isUploadWxam;
@property(retain, nonatomic) NSString *uploadImgMd5; // @synthesize uploadImgMd5=_uploadImgMd5;
- (unsigned int)totalLenOfData;
- (id)bufferWithOffset:(unsigned int)arg1 maxLen:(unsigned int)arg2;
- (id)dataOfEmoticon;
- (_Bool)saveImgDataToPath:(id)arg1 withImgData:(id)arg2;
- (_Bool)saveImgDataToUploadPathWithImgData:(id)arg1;
- (_Bool)saveImgDataToTempPathWithImgData:(id)arg1;
@property(readonly, nonatomic) unsigned long long emoticonType;
@property(readonly, nonatomic) _Bool isUploadDirectly;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


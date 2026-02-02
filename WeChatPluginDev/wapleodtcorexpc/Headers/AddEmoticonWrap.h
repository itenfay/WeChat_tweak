//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj, EmoticonStoreItem, EmoticonUploadInfoObj, EmotionFinderLinkInfo, NSNumber, NSString;

@interface AddEmoticonWrap
{
    _Bool _showDetailWhenExchangeFailed;
    _Bool _allowAddAlreadyInListEmoticons;
    _Bool _allowsUploadWhenExceedLimit;
    long long _source;
    NSNumber *_fileType;
    long long _fileSize;
    NSString *_thumbTempFilePath;
    NSString *_appid;
    NSString *_fromUser;
    EmojiInfoObj *_emojiInfoObj;
    EmoticonUploadInfoObj *_uploadInfoObj;
    EmoticonStoreItem *_storeItem;
    NSString *_editSessionId;
    EmotionFinderLinkInfo *_finderLinkInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_uploadInfoObj;
+ (void)PBArrayAdd_emojiInfoObj;
+ (void)PBArrayAdd_fromUser;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_thumbTempFilePath;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileType;
+ (void)PBArrayAdd_source;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowsUploadWhenExceedLimit; // @synthesize allowsUploadWhenExceedLimit=_allowsUploadWhenExceedLimit;
@property(retain, nonatomic) EmotionFinderLinkInfo *finderLinkInfo; // @synthesize finderLinkInfo=_finderLinkInfo;
@property(retain, nonatomic) NSString *editSessionId; // @synthesize editSessionId=_editSessionId;
@property(nonatomic) _Bool allowAddAlreadyInListEmoticons; // @synthesize allowAddAlreadyInListEmoticons=_allowAddAlreadyInListEmoticons;
@property(retain, nonatomic) EmoticonStoreItem *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) EmoticonUploadInfoObj *uploadInfoObj; // @synthesize uploadInfoObj=_uploadInfoObj;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(retain, nonatomic) NSString *fromUser; // @synthesize fromUser=_fromUser;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *thumbTempFilePath; // @synthesize thumbTempFilePath=_thumbTempFilePath;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSNumber *fileType; // @synthesize fileType=_fileType;
@property(nonatomic) _Bool showDetailWhenExchangeFailed; // @synthesize showDetailWhenExchangeFailed=_showDetailWhenExchangeFailed;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool isSelfieEmoticon;
- (id)getEmoticonImage;
- (id)initWithMessageWrap:(id)arg1 AndSource:(long long)arg2;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


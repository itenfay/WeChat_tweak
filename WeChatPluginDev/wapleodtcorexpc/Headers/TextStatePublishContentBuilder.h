//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmojiInfoObj, EmoticonUploader, NSArray, NSString, PrivateInfo, TextStateIcon, TextStatePublishBlackListItem, TextStatePublishMediaInfo, TextStatePublishSourceInfo, UIImage, WCLocationInfo;

@interface TextStatePublishContentBuilder : NSObject
{
    _Bool _fetchedBlackListFromServer;
    _Bool _noBlackContacts;
    _Bool _refetch3rdPartyBackground;
    unsigned int _visibility;
    unsigned int _editCreateTime;
    TextStateIcon *_icon;
    NSString *_desc;
    WCLocationInfo *_positionInfo;
    TextStatePublishBlackListItem *_blackListItem;
    EmojiInfoObj *_emojiInfo;
    NSString *_emoticonMd5;
    NSString *_emoticonURLString;
    NSString *_emoticonPath;
    NSString *_backgroundId;
    UIImage *_image;
    NSString *_imagePath;
    NSString *_imageURLString;
    NSString *_videoPath;
    UIImage *_videoThumbImage;
    TextStatePublishMediaInfo *_mediaInfo;
    TextStatePublishSourceInfo *_sourceInfo;
    NSArray *_blackContactUsernameList;
    NSArray *_dynamicContactTagIdList;
    PrivateInfo *_whiteUserInfo;
    NSString *_editTextStateId;
    NSString *_followUsername;
    NSString *_followTextStateId;
    CDUnknownBlockType _completionBlock;
    EmoticonUploader *_emoticonUploader;
}

+ (_Bool)checkEmoticonForUploadWithData:(id)arg1 checkMd5:(id)arg2 acquiredImage:(id *)arg3;
+ (void)setMediaFieldsForBuilder:(id)arg1 withUsername:(id)arg2 textState:(id)arg3;
+ (id)builderFromFollowingTextStateForUsername:(id)arg1;
+ (id)builderFromEditingTextState:(id)arg1;
+ (id)builderFromSourceInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonUploader *emoticonUploader; // @synthesize emoticonUploader=_emoticonUploader;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool refetch3rdPartyBackground; // @synthesize refetch3rdPartyBackground=_refetch3rdPartyBackground;
@property(retain, nonatomic) NSString *followTextStateId; // @synthesize followTextStateId=_followTextStateId;
@property(retain, nonatomic) NSString *followUsername; // @synthesize followUsername=_followUsername;
@property(retain, nonatomic) NSString *editTextStateId; // @synthesize editTextStateId=_editTextStateId;
@property(nonatomic) unsigned int editCreateTime; // @synthesize editCreateTime=_editCreateTime;
@property(retain, nonatomic) PrivateInfo *whiteUserInfo; // @synthesize whiteUserInfo=_whiteUserInfo;
@property(retain, nonatomic) NSArray *dynamicContactTagIdList; // @synthesize dynamicContactTagIdList=_dynamicContactTagIdList;
@property(nonatomic) _Bool noBlackContacts; // @synthesize noBlackContacts=_noBlackContacts;
@property(nonatomic) _Bool fetchedBlackListFromServer; // @synthesize fetchedBlackListFromServer=_fetchedBlackListFromServer;
@property(retain, nonatomic) NSArray *blackContactUsernameList; // @synthesize blackContactUsernameList=_blackContactUsernameList;
@property(nonatomic) unsigned int visibility; // @synthesize visibility=_visibility;
@property(retain, nonatomic) TextStatePublishSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(retain, nonatomic) TextStatePublishMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) UIImage *videoThumbImage; // @synthesize videoThumbImage=_videoThumbImage;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *backgroundId; // @synthesize backgroundId=_backgroundId;
@property(retain, nonatomic) NSString *emoticonPath; // @synthesize emoticonPath=_emoticonPath;
@property(retain, nonatomic) NSString *emoticonURLString; // @synthesize emoticonURLString=_emoticonURLString;
@property(retain, nonatomic) NSString *emoticonMd5; // @synthesize emoticonMd5=_emoticonMd5;
@property(retain, nonatomic) EmojiInfoObj *emojiInfo; // @synthesize emojiInfo=_emojiInfo;
@property(retain, nonatomic) TextStatePublishBlackListItem *blackListItem; // @synthesize blackListItem=_blackListItem;
@property(retain, nonatomic) WCLocationInfo *positionInfo; // @synthesize positionInfo=_positionInfo;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) TextStateIcon *icon; // @synthesize icon=_icon;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)generateLocalVideoMediaInfo;
- (void)privateSetImage:(id)arg1;
- (void)clearBackground;
@property(readonly, nonatomic) _Bool needDownloadOrProcessExternMedia;
- (_Bool)prepareEmoticonWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)prepareBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)prepareBlackListWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)prepareContentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)useStatic3rdPartyMedia;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmojiInfoObj, NSData, NSString;

@interface CEmoticonWrap : NSObject
{
    _Bool _m_bCanDelete;
    _Bool _m_isAsyncUpload;
    _Bool _m_isRemoteRecommed;
    _Bool _m_isLastSended;
    _Bool _isReommandSearchWrap;
    _Bool _disableRecordSend;
    unsigned int _m_uiType;
    unsigned int _m_uiGameType;
    unsigned int _m_lastUsedTime;
    unsigned int _m_extFlag;
    NSString *_m_nsAppID;
    NSString *_m_nsThumbImgPath;
    NSData *_m_imageData;
    EmojiInfoObj *_m_emojiInfo;
    NSString *_m_query;
    NSString *_fromSearchKey;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_emojiInfo;
+ (void)PBArrayAdd_m_query;
+ (void)PBArrayAdd_m_isLastSended;
+ (void)PBArrayAdd_m_isRemoteRecommed;
+ (void)PBArrayAdd_m_isAsyncUpload;
+ (void)PBArrayAdd_m_extFlag;
+ (void)PBArrayAdd_m_lastUsedTime;
+ (void)PBArrayAdd_m_nsThumbImgPath;
+ (void)PBArrayAdd_m_nsAppID;
+ (void)PBArrayAdd_m_uiGameType;
+ (void)PBArrayAdd_m_bCanDelete;
+ (void)PBArrayAdd_m_uiType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fromSearchKey; // @synthesize fromSearchKey=_fromSearchKey;
@property(nonatomic) _Bool disableRecordSend; // @synthesize disableRecordSend=_disableRecordSend;
@property(nonatomic) _Bool isReommandSearchWrap; // @synthesize isReommandSearchWrap=_isReommandSearchWrap;
@property(retain, nonatomic) NSString *m_query; // @synthesize m_query=_m_query;
@property(nonatomic) _Bool m_isLastSended; // @synthesize m_isLastSended=_m_isLastSended;
@property(nonatomic) _Bool m_isRemoteRecommed; // @synthesize m_isRemoteRecommed=_m_isRemoteRecommed;
@property(retain, nonatomic) EmojiInfoObj *m_emojiInfo; // @synthesize m_emojiInfo=_m_emojiInfo;
@property(nonatomic) _Bool m_isAsyncUpload; // @synthesize m_isAsyncUpload=_m_isAsyncUpload;
@property(nonatomic) unsigned int m_extFlag; // @synthesize m_extFlag=_m_extFlag;
@property(retain, nonatomic) NSData *m_imageData; // @synthesize m_imageData=_m_imageData;
@property(nonatomic) unsigned int m_lastUsedTime; // @synthesize m_lastUsedTime=_m_lastUsedTime;
@property(retain, nonatomic) NSString *m_nsThumbImgPath; // @synthesize m_nsThumbImgPath=_m_nsThumbImgPath;
@property(retain, nonatomic) NSString *m_nsAppID; // @synthesize m_nsAppID=_m_nsAppID;
@property(nonatomic) unsigned int m_uiGameType; // @synthesize m_uiGameType=_m_uiGameType;
@property(nonatomic) _Bool m_bCanDelete; // @synthesize m_bCanDelete=_m_bCanDelete;
@property(nonatomic) unsigned int m_uiType; // @synthesize m_uiType=_m_uiType;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isSelfieEmoticon;
- (id)initWithEmojiInfoObj:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;
- (struct CGSize)emoticonSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


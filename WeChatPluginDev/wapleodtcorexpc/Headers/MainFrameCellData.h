//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMSessionInfo, NSIndexPath, NSString;

@interface MainFrameCellData : NSObject
{
    MMSessionInfo *m_sessionInfo;
    _Bool m_isNeedUpdateDataForUI;
    _Bool m_bIsNeedSaveCellData;
    _Bool m_bIsModifyContact;
    long long m_lastUnReadCount;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForMessage;
    _Bool m_isNicknameUnsafe;
    _Bool m_isMessageUnsafe;
    _Bool m_isFirstInitTimeText;
    _Bool m_isHavenInitedWithSessionInfo;
    _Bool _m_timeIsMoreThanAWeek;
    _Bool _m_bIsSenderFromSelf;
    _Bool _m_bIsRoomDisplayEmpty;
    _Bool _m_bContainsEmoji;
    _Bool _isPositionChanged;
    float _m_widthForMessageLabelText;
    float _m_widthForGreenLabelText;
    float _m_widthForTimeLabelText;
    float _m_widthForNameLabelText;
    int _m_widthCacheVersion;
    NSString *m_oldTextForNameLabel;
    NSString *m_nsRealUsrName;
    unsigned long long _m_n64MesSvrID;
    NSString *_m_nsHeadImgUsrName;
    NSString *_m_nsHeadImgUrl;
    NSString *_m_textForNameLabel;
    NSString *_m_textForMessageLabel;
    NSString *_m_textForGreenLabel;
    NSString *_m_textForTimeLabel;
    NSString *_m_prefixTextForQuoteMessage;
    NSIndexPath *_currIndexPath;
}

+ (void)deleteCellDataFromLocal:(id)arg1;
+ (id)dirNameForCurrentEnvironment;
+ (id)dirForCellDataFile;
+ (id)pathForCellData:(id)arg1;
+ (id)getReplaceContentForLinkText:(id)arg1;
+ (id)digestForMsg:(id)arg1 withSender:(id)arg2;
+ (id)digestForMsg:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_bContainsEmoji;
+ (void)PBArrayAdd_m_n64MesSvrID;
+ (void)PBArrayAdd_m_widthCacheVersion;
+ (void)PBArrayAdd_m_bIsRoomDisplayEmpty;
+ (void)PBArrayAdd_m_widthForGreenLabelText;
+ (void)PBArrayAdd_m_widthForMessageLabelText;
+ (void)PBArrayAdd_m_prefixTextForQuoteMessage;
+ (void)PBArrayAdd_m_textForTimeLabel;
+ (void)PBArrayAdd_m_textForGreenLabel;
+ (void)PBArrayAdd_m_textForMessageLabel;
+ (void)PBArrayAdd_m_textForNameLabel;
+ (void)PBArrayAdd_m_bIsSenderFromSelf;
+ (void)PBArrayAdd_m_widthForNameLabelText;
+ (void)PBArrayAdd_m_widthForTimeLabelText;
+ (void)PBArrayAdd_m_timeIsMoreThanAWeek;
+ (void)PBArrayAdd_m_nsHeadImgUrl;
+ (void)PBArrayAdd_m_nsHeadImgUsrName;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPositionChanged; // @synthesize isPositionChanged=_isPositionChanged;
@property(retain, nonatomic) NSIndexPath *currIndexPath; // @synthesize currIndexPath=_currIndexPath;
@property(nonatomic) _Bool m_bContainsEmoji; // @synthesize m_bContainsEmoji=_m_bContainsEmoji;
@property(nonatomic) _Bool m_bIsRoomDisplayEmpty; // @synthesize m_bIsRoomDisplayEmpty=_m_bIsRoomDisplayEmpty;
@property(nonatomic) int m_widthCacheVersion; // @synthesize m_widthCacheVersion=_m_widthCacheVersion;
@property(nonatomic) float m_widthForNameLabelText; // @synthesize m_widthForNameLabelText=_m_widthForNameLabelText;
@property(nonatomic) float m_widthForTimeLabelText; // @synthesize m_widthForTimeLabelText=_m_widthForTimeLabelText;
@property(nonatomic) float m_widthForGreenLabelText; // @synthesize m_widthForGreenLabelText=_m_widthForGreenLabelText;
@property(nonatomic) float m_widthForMessageLabelText; // @synthesize m_widthForMessageLabelText=_m_widthForMessageLabelText;
@property(retain, nonatomic) NSString *m_prefixTextForQuoteMessage; // @synthesize m_prefixTextForQuoteMessage=_m_prefixTextForQuoteMessage;
@property(retain, nonatomic) NSString *m_textForTimeLabel; // @synthesize m_textForTimeLabel=_m_textForTimeLabel;
@property(retain, nonatomic) NSString *m_textForGreenLabel; // @synthesize m_textForGreenLabel=_m_textForGreenLabel;
@property(retain, nonatomic) NSString *m_textForMessageLabel; // @synthesize m_textForMessageLabel=_m_textForMessageLabel;
@property(retain, nonatomic) NSString *m_textForNameLabel; // @synthesize m_textForNameLabel=_m_textForNameLabel;
@property(nonatomic) _Bool m_bIsSenderFromSelf; // @synthesize m_bIsSenderFromSelf=_m_bIsSenderFromSelf;
@property(nonatomic) _Bool m_timeIsMoreThanAWeek; // @synthesize m_timeIsMoreThanAWeek=_m_timeIsMoreThanAWeek;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl=_m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUsrName; // @synthesize m_nsHeadImgUsrName=_m_nsHeadImgUsrName;
@property(nonatomic) unsigned long long m_n64MesSvrID; // @synthesize m_n64MesSvrID=_m_n64MesSvrID;
@property(nonatomic) _Bool isMessageUnsafe; // @synthesize isMessageUnsafe=m_isMessageUnsafe;
@property(nonatomic) _Bool isNicknameUnsafe; // @synthesize isNicknameUnsafe=m_isNicknameUnsafe;
@property(retain, nonatomic) NSString *cpKeyForMessage; // @synthesize cpKeyForMessage=m_cpKeyForMessage;
@property(retain, nonatomic) NSString *cpKeyForNickname; // @synthesize cpKeyForNickname=m_cpKeyForNickname;
@property(nonatomic) _Bool m_bIsNeedSaveCellData; // @synthesize m_bIsNeedSaveCellData;
@property(nonatomic) _Bool m_bIsModifyContact; // @synthesize m_bIsModifyContact;
@property(nonatomic) long long m_lastUnReadCount; // @synthesize m_lastUnReadCount;
@property(retain, nonatomic) NSString *m_nsRealUsrName; // @synthesize m_nsRealUsrName;
@property(retain, nonatomic) NSString *m_oldTextForNameLabel; // @synthesize m_oldTextForNameLabel;
@property(readonly, nonatomic) _Bool m_isHavenInitedWithSessionInfo; // @synthesize m_isHavenInitedWithSessionInfo;
@property(nonatomic) _Bool m_isFirstInitTimeText; // @synthesize m_isFirstInitTimeText;
@property(retain, nonatomic) MMSessionInfo *m_sessionInfo; // @synthesize m_sessionInfo;
- (void)updateWidthForNameLabel;
- (void)updateTextForTimeLabel;
- (void)updateDataFieldForUI;
- (void)updateData:(id)arg1;
- (void)updateDataAfterPBDecode:(id)arg1;
- (void)makeTextForPluginMessage;
- (void)makeTextForQuoteMessage;
- (id)getAppName:(id)arg1;
- (void)makeTextSession:(id)arg1;
- (id)getGroupName;
- (void)tryMakeTemplateMessageLabel:(id)arg1;
- (void)makeTextForMessageLabel;
- (void)makeTextForNameLabel;
- (void)updateExtensionRegister:(id)arg1;
- (void)checkDataIsValid;
- (int)currentVersion;
- (void)updateTimeField:(unsigned int)arg1;
- (id)initWithSessionInfo:(id)arg1;
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


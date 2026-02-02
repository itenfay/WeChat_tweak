//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ChatRoomHistoryShareStat : NSObject
{
    NSString *_nsClassifiedMsgStat;
    unsigned int _uiFinalShareCnt;
    unsigned int _uFinalShareCountSecondForward;
    _Bool _isRoomNewlyCreated;
    _Bool _isUpgradeOpenIMGroup;
    _Bool _hasExposedShareEntry;
    _Bool _hasClickedShareEntry;
    unsigned int _uiInvitedCnt;
    unsigned int _clickClearCnt;
    unsigned int _exceedAlertCnt;
    unsigned int _exceedSizeAlertCnt;
    unsigned int _sharedLastFileSize;
    unsigned int _abandonUploadCount;
    unsigned int _uploadManualRetryCount;
    unsigned int _initSelectCnt;
    unsigned int _autoSelectCnt;
    unsigned int _autoDisSelectCnt;
    unsigned int _manuSelectCnt;
    unsigned int _manuDisSelectCnt;
    unsigned int _uploadFailCnt;
    unsigned int _waitUploadAlertCnt;
    unsigned int _uploadFailAlertCnt;
    NSString *_roomId;
    NSString *_nsAddMemberStat;
    unsigned long long _uploadStartMs;
    unsigned long long _uploadEndMs;
    unsigned long long _sharedContentSize;
    unsigned long long _abandonUploadContentSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int uploadFailAlertCnt; // @synthesize uploadFailAlertCnt=_uploadFailAlertCnt;
@property(nonatomic) unsigned int waitUploadAlertCnt; // @synthesize waitUploadAlertCnt=_waitUploadAlertCnt;
@property(nonatomic) unsigned int uploadFailCnt; // @synthesize uploadFailCnt=_uploadFailCnt;
@property(nonatomic) unsigned int manuDisSelectCnt; // @synthesize manuDisSelectCnt=_manuDisSelectCnt;
@property(nonatomic) unsigned int manuSelectCnt; // @synthesize manuSelectCnt=_manuSelectCnt;
@property(nonatomic) unsigned int autoDisSelectCnt; // @synthesize autoDisSelectCnt=_autoDisSelectCnt;
@property(nonatomic) unsigned int autoSelectCnt; // @synthesize autoSelectCnt=_autoSelectCnt;
@property(nonatomic) unsigned int initSelectCnt; // @synthesize initSelectCnt=_initSelectCnt;
@property(nonatomic) unsigned int uploadManualRetryCount; // @synthesize uploadManualRetryCount=_uploadManualRetryCount;
@property(nonatomic) unsigned int abandonUploadCount; // @synthesize abandonUploadCount=_abandonUploadCount;
@property(nonatomic) unsigned long long abandonUploadContentSize; // @synthesize abandonUploadContentSize=_abandonUploadContentSize;
@property(nonatomic) unsigned int sharedLastFileSize; // @synthesize sharedLastFileSize=_sharedLastFileSize;
@property(nonatomic) unsigned long long sharedContentSize; // @synthesize sharedContentSize=_sharedContentSize;
@property(nonatomic) unsigned long long uploadEndMs; // @synthesize uploadEndMs=_uploadEndMs;
@property(nonatomic) unsigned long long uploadStartMs; // @synthesize uploadStartMs=_uploadStartMs;
@property(nonatomic) unsigned int exceedSizeAlertCnt; // @synthesize exceedSizeAlertCnt=_exceedSizeAlertCnt;
@property(nonatomic) unsigned int exceedAlertCnt; // @synthesize exceedAlertCnt=_exceedAlertCnt;
@property(nonatomic) unsigned int clickClearCnt; // @synthesize clickClearCnt=_clickClearCnt;
@property(nonatomic) _Bool hasClickedShareEntry; // @synthesize hasClickedShareEntry=_hasClickedShareEntry;
@property(nonatomic) _Bool hasExposedShareEntry; // @synthesize hasExposedShareEntry=_hasExposedShareEntry;
@property(nonatomic) _Bool isUpgradeOpenIMGroup; // @synthesize isUpgradeOpenIMGroup=_isUpgradeOpenIMGroup;
@property(nonatomic) _Bool isRoomNewlyCreated; // @synthesize isRoomNewlyCreated=_isRoomNewlyCreated;
@property(nonatomic) unsigned int uiInvitedCnt; // @synthesize uiInvitedCnt=_uiInvitedCnt;
@property(retain, nonatomic) NSString *nsAddMemberStat; // @synthesize nsAddMemberStat=_nsAddMemberStat;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void)internalKVStat:(id)arg1;
- (void)failReport:(unsigned int)arg1;
- (void)successReport:(int)arg1;
- (void)cancelShareReport;
- (id)commonBuildStat:(int)arg1 addMemberErrCode:(unsigned int)arg2;
- (id)commonBuildStat:(int)arg1;
- (unsigned int)getUploadTimeMs;
- (id)getUsrnameStatFromMemberList:(id)arg1;
- (void)abandonLastUpload;
- (void)statAddedMemberList:(id)arg1;
- (void)statSelectedMsgs:(id)arg1;

@end


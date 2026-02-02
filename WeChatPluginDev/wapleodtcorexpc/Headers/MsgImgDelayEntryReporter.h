//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MsgImgDelayEntryReporter : NSObject
{
    _Bool _hasNotifyDetectResult;
    _Bool _translateFromFastEntry;
    _Bool _translateFromMenu;
    unsigned int _validWordRate;
    unsigned int _uiSessionID;
    unsigned int _accessType;
    unsigned int _clickResult;
    unsigned int _entryType;
    NSString *_sessionId;
    NSString *_imgId;
    NSString *_fileId;
    NSString *_aesKey;
    unsigned long long _openTimeMs;
    unsigned long long _exposeTimeMs;
    unsigned long long _clickTimeMs;
    unsigned long long _clickRstTimeMs;
    unsigned long long _exposeResult;
    unsigned long long _detectBitSet;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int entryType; // @synthesize entryType=_entryType;
@property(nonatomic) unsigned int clickResult; // @synthesize clickResult=_clickResult;
@property(nonatomic) unsigned long long detectBitSet; // @synthesize detectBitSet=_detectBitSet;
@property(nonatomic) unsigned long long exposeResult; // @synthesize exposeResult=_exposeResult;
@property(nonatomic) unsigned long long clickRstTimeMs; // @synthesize clickRstTimeMs=_clickRstTimeMs;
@property(nonatomic) unsigned long long clickTimeMs; // @synthesize clickTimeMs=_clickTimeMs;
@property(nonatomic) unsigned long long exposeTimeMs; // @synthesize exposeTimeMs=_exposeTimeMs;
@property(nonatomic) unsigned long long openTimeMs; // @synthesize openTimeMs=_openTimeMs;
@property(nonatomic) unsigned int accessType; // @synthesize accessType=_accessType;
@property(nonatomic) unsigned int uiSessionID; // @synthesize uiSessionID=_uiSessionID;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(nonatomic) _Bool translateFromMenu; // @synthesize translateFromMenu=_translateFromMenu;
@property(nonatomic) _Bool translateFromFastEntry; // @synthesize translateFromFastEntry=_translateFromFastEntry;
@property(nonatomic) unsigned int validWordRate; // @synthesize validWordRate=_validWordRate;
@property(retain, nonatomic) NSString *imgId; // @synthesize imgId=_imgId;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)onDetectWordRate:(double)arg1;
- (void)onClickResult:(_Bool)arg1;
- (void)onClickWithEntryType:(unsigned int)arg1;
- (void)onDetectResult:(unsigned long long)arg1;
- (void)onExposeResult:(unsigned long long)arg1;
- (void)onOpenImg:(unsigned int)arg1;
- (unsigned int)formatExposeResult;
- (unsigned int)formatDetectResult;
- (void)reportClick;
- (void)reportDetectResult;
- (void)reset;
- (void)reportLastInfo;
- (void)dealloc;

@end


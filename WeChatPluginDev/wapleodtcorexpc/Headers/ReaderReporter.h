//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;

@interface ReaderReporter : NSObject
{
    _Bool _isServiceBrand;
    unsigned int _enterTime;
    unsigned int _addContactScene;
    NSString *_sessionId;
    long long _enterScene;
    NSString *_usrName;
    double _curOffset;
    NSMutableArray *_reportItems;
    NSMutableSet *_reportTitiles;
    NSMutableSet *_reportItemSet;
}

+ (_Bool)isOrderGuideMsgWithContact:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *reportItemSet; // @synthesize reportItemSet=_reportItemSet;
@property(retain, nonatomic) NSMutableSet *reportTitiles; // @synthesize reportTitiles=_reportTitiles;
@property(retain, nonatomic) NSMutableArray *reportItems; // @synthesize reportItems=_reportItems;
@property(nonatomic) double curOffset; // @synthesize curOffset=_curOffset;
@property(nonatomic) unsigned int addContactScene; // @synthesize addContactScene=_addContactScene;
@property(nonatomic) _Bool isServiceBrand; // @synthesize isServiceBrand=_isServiceBrand;
@property(retain, nonatomic) NSString *usrName; // @synthesize usrName=_usrName;
@property(nonatomic) long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int enterTime; // @synthesize enterTime=_enterTime;
- (void)reportSendMessageIfNeeded:(id)arg1 usrName:(id)arg2;
- (void)onMenuClickWithMenuid:(id)arg1;
- (void)onExitSessionWithContact:(id)arg1 enterScene:(long long)arg2;
- (void)onEnterSessionWithContact:(id)arg1 enterScene:(long long)arg2;
- (id)getBizServiceMsgReportItem:(id)arg1 contact:(id)arg2 postion:(long long)arg3 isExpose:(_Bool)arg4 uiReaderIndex:(unsigned int)arg5;
- (void)addToServiceMsgExposeReportIfNeed:(id)arg1 contact:(id)arg2 postion:(long long)arg3;
- (void)doServiceMsgClickReportIfNeed:(id)arg1 contact:(id)arg2 uiReaderIndex:(unsigned int)arg3;
- (void)doServiceMsgClickReportIfNeed:(id)arg1 contact:(id)arg2;
- (void)doServiceMsgClickReportIfNeed:(id)arg1 isSender:(_Bool)arg2;
- (_Bool)neddReportMsg:(id)arg1;
- (unsigned long long)getReportMsgType:(id)arg1;
- (_Bool)isMsgReportTypeValid:(unsigned long long)arg1;
- (void)doReportServiceBrandMsgMsgExpose;
- (void)reportShowInfo;
- (void)onShowTitle:(id)arg1 Readers:(id)arg2 readerSubtype:(unsigned int)arg3;
- (_Bool)hadShowTitle:(id)arg1 WithReaders:(id)arg2;
- (void)checkShowWithText:(id)arg1 ReadersWraps:(id)arg2 readerSubtype:(unsigned int)arg3;
- (void)onTableDidScrollWithOffset:(double)arg1;
- (id)init;

@end


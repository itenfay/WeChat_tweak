//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTimelineInputAction : NSObject
{
    _Bool _isFinished;
    long long _lastInputLength;
    NSString *_changeHistoryList;
    NSString *_commitContent;
    long long _cf;
    NSString *_inLenList;
    NSString *_reportDataXml;
}

+ (void)initialize;
+ (void)PBArrayAdd_isFinished;
+ (void)PBArrayAdd_reportDataXml;
+ (void)PBArrayAdd_inLenList;
+ (void)PBArrayAdd_cf;
+ (void)PBArrayAdd_commitContent;
+ (void)PBArrayAdd_changeHistoryList;
+ (void)PBArrayAdd_lastInputLength;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) NSString *reportDataXml; // @synthesize reportDataXml=_reportDataXml;
@property(retain, nonatomic) NSString *inLenList; // @synthesize inLenList=_inLenList;
@property(nonatomic) long long cf; // @synthesize cf=_cf;
@property(retain, nonatomic) NSString *commitContent; // @synthesize commitContent=_commitContent;
@property(copy, nonatomic) NSString *changeHistoryList; // @synthesize changeHistoryList=_changeHistoryList;
@property(nonatomic) long long lastInputLength; // @synthesize lastInputLength=_lastInputLength;
- (void)reset;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


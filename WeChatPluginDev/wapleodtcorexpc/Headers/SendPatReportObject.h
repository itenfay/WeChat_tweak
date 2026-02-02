//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class SendPatWrap;

@interface SendPatReportObject : NSObject
{
    _Bool _createNewChat;
    _Bool _exposeSetSuffixEducation;
    int _errorCode;
    SendPatWrap *_sendPatWrap;
    unsigned long long _patTime;
    unsigned long long _timeInterval;
    unsigned long long _patIndex;
    unsigned long long _revokeType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool exposeSetSuffixEducation; // @synthesize exposeSetSuffixEducation=_exposeSetSuffixEducation;
@property(nonatomic) unsigned long long revokeType; // @synthesize revokeType=_revokeType;
@property(nonatomic) _Bool createNewChat; // @synthesize createNewChat=_createNewChat;
@property(nonatomic) unsigned long long patIndex; // @synthesize patIndex=_patIndex;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) unsigned long long patTime; // @synthesize patTime=_patTime;
@property(nonatomic) __weak SendPatWrap *sendPatWrap; // @synthesize sendPatWrap=_sendPatWrap;
- (void)reportFromReturnCode:(int)arg1 reportType:(unsigned long long)arg2 andRevokeAction:(unsigned long long)arg3;
- (void)reportFromCancelSendingRevokeAction:(unsigned long long)arg1;
- (void)reportFromServerReturn:(int)arg1;
- (void)reportFromHitFrequencyLimit;
- (void)prepareReport;

@end


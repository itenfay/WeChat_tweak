//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, PatWrap, SendPatWrap;

@interface RevokePatReportObject : NSObject
{
    SendPatWrap *_sendPatWrap;
    PatWrap *_patWrap;
    NSString *_chatUserName;
    unsigned long long _revokeType;
    unsigned long long _revokeTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long revokeTime; // @synthesize revokeTime=_revokeTime;
@property(nonatomic) unsigned long long revokeType; // @synthesize revokeType=_revokeType;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
@property(retain, nonatomic) PatWrap *patWrap; // @synthesize patWrap=_patWrap;
@property(retain, nonatomic) SendPatWrap *sendPatWrap; // @synthesize sendPatWrap=_sendPatWrap;
- (void)reportFromPat:(id)arg1 chat:(id)arg2 result:(_Bool)arg3 action:(unsigned long long)arg4;
- (void)reportFromSendPat:(id)arg1 result:(_Bool)arg2 action:(unsigned long long)arg3;
- (void)reportFromResult:(_Bool)arg1 andAction:(unsigned long long)arg2;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MessageInterceptReporter : NSObject
{
    _Bool _isChatroom;
    _Bool _isSelfSend;
    long long _msgId;
    long long _interceptType;
    unsigned long long _lastAction;
}

@property(nonatomic) unsigned long long lastAction; // @synthesize lastAction=_lastAction;
@property(nonatomic) long long interceptType; // @synthesize interceptType=_interceptType;
@property(nonatomic) _Bool isSelfSend; // @synthesize isSelfSend=_isSelfSend;
@property(nonatomic) _Bool isChatroom; // @synthesize isChatroom=_isChatroom;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
- (void)logWithAction:(unsigned long long)arg1 copyLen:(unsigned long long)arg2;
- (void)recordAction:(unsigned long long)arg1 copyLen:(unsigned long long)arg2;
- (void)recordAction:(unsigned long long)arg1;
- (void)checkReport;
- (void)reset;
- (id)initWithMsgWrap:(id)arg1;

@end


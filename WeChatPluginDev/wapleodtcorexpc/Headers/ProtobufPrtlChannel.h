//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ProtobufCGIWrap;

@interface ProtobufPrtlChannel : NSObject
{
    ProtobufCGIWrap *m_pbCGIWrap;
    NSObject *m_ptrl;
}

+ (int)getDefaultRetryCount;
+ (void)setDefaultRetryCount:(int)arg1;
- (void).cxx_destruct;
- (void)Stop;
- (_Bool)Start;
- (void)InitPrtl:(unsigned int)arg1 Delegate:(id)arg2 Scene:(unsigned int)arg3;
- (id)initWithCGIWrap:(id)arg1;
- (void)initProtocolChannel;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ThirdAppBindReportObject : NSObject
{
    _Bool _bind;
    unsigned long long _type;
    NSString *_sessionId;
    unsigned long long _bindStatus;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bindStatus; // @synthesize bindStatus=_bindStatus;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic, getter=isBound) _Bool bind; // @synthesize bind=_bind;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)reportAction:(unsigned long long)arg1 withErrorCode:(long long)arg2;
- (void)reportAction:(unsigned long long)arg1;
- (id)init;

@end


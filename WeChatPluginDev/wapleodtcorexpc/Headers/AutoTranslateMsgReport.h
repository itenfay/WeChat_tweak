//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AutoTranslateMsgReport : NSObject
{
    unsigned int _expectCount;
    unsigned int _handleCount;
    unsigned long long _startTimestamp;
    unsigned long long _endTimestamp;
}

@property(nonatomic) unsigned long long endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(nonatomic) unsigned long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) unsigned int handleCount; // @synthesize handleCount=_handleCount;
@property(nonatomic) unsigned int expectCount; // @synthesize expectCount=_expectCount;
- (void)reportKV;
- (void)startAutoTraslateWithExpectCnt:(unsigned int)arg1;
- (void)reset;

@end


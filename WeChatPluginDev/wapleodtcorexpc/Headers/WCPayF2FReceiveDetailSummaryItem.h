//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayF2FReceiveDetailSummaryItem : NSObject
{
    unsigned int _totalNum;
    unsigned long long _timeStamp;
    unsigned long long _timeFormat;
    unsigned long long _totalAmount;
}

@property(nonatomic) unsigned int totalNum; // @synthesize totalNum=_totalNum;
@property(nonatomic) unsigned long long totalAmount; // @synthesize totalAmount=_totalAmount;
@property(nonatomic) unsigned long long timeFormat; // @synthesize timeFormat=_timeFormat;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;

@end


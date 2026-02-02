//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayF2FReceiveRecordItem : NSObject
{
    unsigned long long _timeStamp;
    NSString *_billID;
    NSString *_transID;
    NSString *_desc;
    unsigned long long _amount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *transID; // @synthesize transID=_transID;
@property(retain, nonatomic) NSString *billID; // @synthesize billID=_billID;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;

@end


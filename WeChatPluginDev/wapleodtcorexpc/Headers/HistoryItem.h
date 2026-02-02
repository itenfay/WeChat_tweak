//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HistoryItem : NSObject
{
    unsigned long long _type;
    NSNumber *_updateTime;
    id _dataValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id dataValue; // @synthesize dataValue=_dataValue;
@property(retain, nonatomic) NSNumber *updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


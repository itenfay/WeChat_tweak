//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface GCRunTaskRecordInfo : NSObject
{
    double _interval;
    NSMutableString *_additionalInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableString *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (id)description;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AdClickReportCGIUserData : NSObject
{
    NSString *_snsId;
    unsigned long long _timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;

@end


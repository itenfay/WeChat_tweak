//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAMemoryStatusSnapShot : NSObject
{
    long long _totalPhysicalMemorySizeInBytes;
    long long _roundedTotalPhysicalMemorySizeInBytes;
    long long _footPrintMemorySizeInBytes;
    long long _residentMemorySizeInBytes;
    long long _freeMemorySizeInBytes;
    double _footPrintPercent;
    double _freePercent;
}

@property(nonatomic) double freePercent; // @synthesize freePercent=_freePercent;
@property(nonatomic) double footPrintPercent; // @synthesize footPrintPercent=_footPrintPercent;
@property(nonatomic) long long freeMemorySizeInBytes; // @synthesize freeMemorySizeInBytes=_freeMemorySizeInBytes;
@property(nonatomic) long long residentMemorySizeInBytes; // @synthesize residentMemorySizeInBytes=_residentMemorySizeInBytes;
@property(nonatomic) long long footPrintMemorySizeInBytes; // @synthesize footPrintMemorySizeInBytes=_footPrintMemorySizeInBytes;
@property(nonatomic) long long roundedTotalPhysicalMemorySizeInBytes; // @synthesize roundedTotalPhysicalMemorySizeInBytes=_roundedTotalPhysicalMemorySizeInBytes;
@property(nonatomic) long long totalPhysicalMemorySizeInBytes; // @synthesize totalPhysicalMemorySizeInBytes=_totalPhysicalMemorySizeInBytes;

@end


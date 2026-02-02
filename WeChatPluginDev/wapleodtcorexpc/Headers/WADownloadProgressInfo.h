//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate;

@interface WADownloadProgressInfo : NSObject
{
    NSDate *_date;
    long long _totalBytesWritten;
}

- (void).cxx_destruct;
@property(nonatomic) long long totalBytesWritten; // @synthesize totalBytesWritten=_totalBytesWritten;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WADownloadFileProgressInfo : NSObject
{
    long long _totalBytesWritten;
    long long _totalBytesExpectedToWrite;
}

@property(nonatomic) long long totalBytesExpectedToWrite; // @synthesize totalBytesExpectedToWrite=_totalBytesExpectedToWrite;
@property(nonatomic) long long totalBytesWritten; // @synthesize totalBytesWritten=_totalBytesWritten;

@end


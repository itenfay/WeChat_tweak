//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAUploadFileProgressInfo : NSObject
{
    long long _totalBytesSent;
    long long _totalBytesExpectedToSend;
}

@property(nonatomic) long long totalBytesExpectedToSend; // @synthesize totalBytesExpectedToSend=_totalBytesExpectedToSend;
@property(nonatomic) long long totalBytesSent; // @synthesize totalBytesSent=_totalBytesSent;

@end


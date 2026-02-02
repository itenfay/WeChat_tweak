//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCLocalRecordingParams : NSObject
{
    int _interval;
    NSString *_filePath;
    unsigned long long _recordType;
}

- (void).cxx_destruct;
@property(nonatomic) int interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned long long recordType; // @synthesize recordType=_recordType;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)init;

@end


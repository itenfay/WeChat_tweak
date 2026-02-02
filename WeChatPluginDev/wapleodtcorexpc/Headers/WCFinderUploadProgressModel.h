//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderUploadProgressModel : NSObject
{
    double _progress;
    unsigned long long _totalSize;
    unsigned long long _uploadSize;
    unsigned long long _currentUploadTaskIndex;
    unsigned long long _uploadTaskCount;
}

@property(nonatomic) unsigned long long uploadTaskCount; // @synthesize uploadTaskCount=_uploadTaskCount;
@property(nonatomic) unsigned long long currentUploadTaskIndex; // @synthesize currentUploadTaskIndex=_currentUploadTaskIndex;
@property(nonatomic) unsigned long long uploadSize; // @synthesize uploadSize=_uploadSize;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) double progress; // @synthesize progress=_progress;

@end


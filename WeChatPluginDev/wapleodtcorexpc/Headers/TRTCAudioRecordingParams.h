//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCAudioRecordingParams : NSObject
{
    NSString *_filePath;
    unsigned long long _recordingContent;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long recordingContent; // @synthesize recordingContent=_recordingContent;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)init;

@end


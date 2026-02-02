//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSFileHandle;

@interface WATraceInfo : NSObject
{
    NSFileHandle *_fileHandle;
    unsigned long long _beginTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;

@end


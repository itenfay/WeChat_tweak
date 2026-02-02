//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MJStickerDownloadingStatus : NSObject
{
    float _progress;
    unsigned long long _status;
    NSArray *_progressCallback;
    NSArray *_completionCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *completionCallback; // @synthesize completionCallback=_completionCallback;
@property(copy, nonatomic) NSArray *progressCallback; // @synthesize progressCallback=_progressCallback;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface TAVSourceExportConfiguration : NSObject
{
    _Bool _shouldOptimizeForNetworkUse;
    NSString *_fileType;
    NSURL *_outputURL;
    NSArray *_metadata;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse; // @synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse;
@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
- (id)temporaryExportURL;
- (id)init;

@end


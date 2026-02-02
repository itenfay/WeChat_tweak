//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCStoryStatusReportObj : NSObject
{
    NSString *_tid;
    unsigned long long _videoType;
    unsigned long long _previewEnterScene;
}

+ (void)reportChangeFeaturedWithTid:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long previewEnterScene; // @synthesize previewEnterScene=_previewEnterScene;
@property(nonatomic) unsigned long long videoType; // @synthesize videoType=_videoType;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void)reportChangeFeaturedOrHiddenStatus;

@end


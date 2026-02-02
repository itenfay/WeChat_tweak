//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMEasterEggNewYearActivityReportObject : NSObject
{
    unsigned int _videoTimeInMs;
    unsigned int _videoPlayCount;
    unsigned int _videoPlayTotalTimeInMs;
    NSString *_sessionId;
    unsigned long long _materialId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int videoPlayTotalTimeInMs; // @synthesize videoPlayTotalTimeInMs=_videoPlayTotalTimeInMs;
@property(nonatomic) unsigned int videoPlayCount; // @synthesize videoPlayCount=_videoPlayCount;
@property(nonatomic) unsigned int videoTimeInMs; // @synthesize videoTimeInMs=_videoTimeInMs;
@property(nonatomic) unsigned long long materialId; // @synthesize materialId=_materialId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)closeViewController;
- (void)endShowCardView;
- (void)startShowCardView;

@end


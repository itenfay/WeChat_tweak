//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMAVPlayerItem;

@interface MMAVPlayerItemWrap : NSObject
{
    NSObject<MMAVPlayerItem> *item;
    NSString *path;
    int status;
    int targetStatus;
    _Bool isInScreen;
    _Bool _shouldSkipStackOrResume;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldSkipStackOrResume; // @synthesize shouldSkipStackOrResume=_shouldSkipStackOrResume;
@property(nonatomic) int targetStatus; // @synthesize targetStatus;
@property(nonatomic) int status; // @synthesize status;
@property(nonatomic) _Bool isInScreen; // @synthesize isInScreen;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSObject<MMAVPlayerItem> *item; // @synthesize item;
- (void)dealloc;
- (id)init;

@end


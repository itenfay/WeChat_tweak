//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMListenCategoryItem, NSArray, NSString;

@interface WCFinderProfileAudioSectionCache : NSObject
{
    NSArray *_audios;
    long long _audioCount;
    MMListenCategoryItem *_audioCategory;
}

+ (void)initialize;
+ (void)PBArrayAdd_audioCategory;
+ (void)PBArrayAdd_audioCount;
+ (void)PBArrayAdd_audios;
- (void).cxx_destruct;
@property(retain, nonatomic) MMListenCategoryItem *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(nonatomic) long long audioCount; // @synthesize audioCount=_audioCount;
@property(retain, nonatomic) NSArray *audios; // @synthesize audios=_audios;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


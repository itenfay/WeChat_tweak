//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMListenCategoryItem, NSArray;

@interface WCFinderProfileOverviewAudioData : NSObject
{
    NSArray *_audios;
    MMListenCategoryItem *_category;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMListenCategoryItem *category; // @synthesize category=_category;
@property(retain, nonatomic) NSArray *audios; // @synthesize audios=_audios;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderMentionSearchSection : NSObject
{
    NSString *_title;
    NSMutableArray *_items;
    long long _moreState;
    unsigned long long _mentionType;
    NSString *_showMoreWording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *showMoreWording; // @synthesize showMoreWording=_showMoreWording;
@property(nonatomic) unsigned long long mentionType; // @synthesize mentionType=_mentionType;
@property(nonatomic) long long moreState; // @synthesize moreState=_moreState;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)hasMore;
- (long long)displayMoreState;
- (void)reset;
- (id)init;

@end


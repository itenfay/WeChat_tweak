//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderMusicPlayListSection : NSObject
{
    long long _secType;
    NSArray *_items;
    NSString *_title;
    long long _count;
}

+ (_Bool)isContentSection:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long secType; // @synthesize secType=_secType;
- (_Bool)displayNestCell;
- (_Bool)showIndependentMoreCell;
- (_Bool)showMoreInMusicTab;
- (long long)displayMaxCount;

@end


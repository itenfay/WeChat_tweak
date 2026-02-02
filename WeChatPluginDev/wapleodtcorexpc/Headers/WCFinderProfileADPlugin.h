//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderUserpageAdInfo, FinderUserpageAdInfo_FinderUserpageAdItem, NSHashTable, NSString;

@interface WCFinderProfileADPlugin : NSObject
{
    _Bool _isUsed;
    FinderUserpageAdInfo *_adInfo;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool isUsed; // @synthesize isUsed=_isUsed;
@property(retain, nonatomic) FinderUserpageAdInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(readonly, nonatomic) NSString *tidOfAd;
@property(readonly, nonatomic) FinderUserpageAdInfo_FinderUserpageAdItem *adItem;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)fillAdInfo:(id)arg1;
- (id)init;

@end


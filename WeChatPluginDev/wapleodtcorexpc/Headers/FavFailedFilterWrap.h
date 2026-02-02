//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FavSourceIdFiltersAndCtx, NSDate;

@interface FavFailedFilterWrap : NSObject
{
    FavSourceIdFiltersAndCtx *_failedFilter;
    NSDate *_failedTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *failedTime; // @synthesize failedTime=_failedTime;
@property(retain, nonatomic) FavSourceIdFiltersAndCtx *failedFilter; // @synthesize failedFilter=_failedFilter;

@end


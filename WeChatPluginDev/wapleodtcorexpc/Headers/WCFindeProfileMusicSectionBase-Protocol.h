//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCFinderStreamLoadingState;

@protocol WCFindeProfileMusicSectionBase <NSObject>
- (WCFinderStreamLoadingState *)loadingState;
- (void)requestMore:(void (^)(void))arg1;
- (NSString *)displayTitle;
- (NSArray *)sectionItems;
- (NSString *)finderUsername;
@end


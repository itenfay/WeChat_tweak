//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString;

@protocol NewLifeDetailCollectionViewAnimatorDelegate <NSObject>
- (NSIndexPath *)indexPathForViewingFeedId:(NSString *)arg1;

@optional
- (void)onNewLifeDetailCollectionViewAnimationEnd;
- (void)onNewLifeDetailCollectionViewAnimationBegin;
@end


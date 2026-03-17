//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol WCCanvasHalfRandomSubCardDelegate <NSObject>

@optional
- (int)onSubCardFetchCanvasFinderCommentScene;
- (NSString *)onSubCardFetchCanvasPageId;
- (NSArray *)onSubCardFetchBulletCommentsForBulletCommentsType:(long long)arg1;
- (NSString *)onSubCardFetchBulletCommentsTitle;
- (_Bool)onSubCardShouldShowBulletCommentsView;
@end


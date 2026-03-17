//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderEventDelegate, WCFinderFeedContentVM, WCFinderReuseQueue;

@protocol WCFinderMSActivityCellProtocol <NSObject>
+ (void)prepareForReuseQueue:(WCFinderReuseQueue *)arg1;
+ (struct CGSize)calculateDisplaySize:(struct CGSize)arg1 forVM:(WCFinderFeedContentVM *)arg2 cellIdentifier:(NSString *)arg3 showSceneIntroduce:(_Bool)arg4;
+ (NSString *)cellIdentifier;
- (void)setReuseQueue:(WCFinderReuseQueue *)arg1;
- (void)setViewModel:(WCFinderFeedContentVM *)arg1 delegate:(WCFinderEventDelegate *)arg2 isAuthorScene:(_Bool)arg3 finderUsername:(NSString *)arg4 showSeparatorLine:(_Bool)arg5 cellIdentifier:(NSString *)arg6;
@end


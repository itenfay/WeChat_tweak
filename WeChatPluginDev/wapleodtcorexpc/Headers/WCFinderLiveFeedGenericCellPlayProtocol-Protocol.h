//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIImage, WCFinderLiveGenericFeedVM;

@protocol WCFinderLiveFeedGenericCellPlayProtocol <NSObject>
@property(readonly, nonatomic) WCFinderLiveGenericFeedVM *feedVM;
- (void)prepareForMorphTransition;
- (void)markTappedByUser;
- (void)stop;
- (void)playWithSound:(_Bool)arg1;

@optional
- (UIImage *)takePlayerViewSnapshot;
- (void)updateAllUIElementsShow:(_Bool)arg1 animate:(_Bool)arg2;
@end


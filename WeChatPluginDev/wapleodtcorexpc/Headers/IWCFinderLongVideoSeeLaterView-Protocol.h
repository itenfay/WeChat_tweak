//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedContentVM;
@protocol WCFinderLongVideoSeeLaterCellDelegate;

@protocol IWCFinderLongVideoSeeLaterView <NSObject>
+ (double)cellHeightWithContentVM:(WCFinderFeedContentVM *)arg1 width:(double)arg2;
@property(nonatomic) __weak id <WCFinderLongVideoSeeLaterCellDelegate> delegate;
- (NSString *)getReasonContent;
- (void)updateWithContentVM:(WCFinderFeedContentVM *)arg1 isLastCell:(_Bool)arg2 isInSeeLaterList:(_Bool)arg3;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MJSegmentReusableViewDelegate;

@protocol MJSegmentReusableView <NSObject>
@property(nonatomic) __weak id <MJSegmentReusableViewDelegate> delegate;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)prepareForReuse;
@end


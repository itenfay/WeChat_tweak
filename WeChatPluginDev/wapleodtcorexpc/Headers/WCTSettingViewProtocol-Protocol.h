//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "ZZFlexibleLayoutViewProtocol-Protocol.h"

@class UIView;
@protocol ZZFlexibleLayoutViewProtocol;

@protocol WCTSettingViewProtocol <ZZFlexibleLayoutViewProtocol>
@property(readonly, nonatomic) __weak UIView<ZZFlexibleLayoutViewProtocol> *cell;
- (void)loadUI:(UIView *)arg1;

@optional
- (id)initWithCell:(UIView *)arg1;
@end


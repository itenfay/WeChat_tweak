//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCElasticLayoutView;

@protocol WCElasticLayoutViewDelegate <NSObject>
- (void)elasticLayoutView:(WCElasticLayoutView *)arg1 didExpandWithAnimated:(_Bool)arg2;
- (void)elasticLayoutView:(WCElasticLayoutView *)arg1 willExpandWithAnimated:(_Bool)arg2;
- (void)elasticLayoutView:(WCElasticLayoutView *)arg1 didShrinkWithAnimated:(_Bool)arg2;
- (void)elasticLayoutView:(WCElasticLayoutView *)arg1 willShrinkWithAnimated:(_Bool)arg2;
@end


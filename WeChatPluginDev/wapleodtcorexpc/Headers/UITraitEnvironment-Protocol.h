//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UITraitCollection;

@protocol UITraitEnvironment <NSObject>
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (void)traitCollectionDidChange:(UITraitCollection *)arg1;
@end


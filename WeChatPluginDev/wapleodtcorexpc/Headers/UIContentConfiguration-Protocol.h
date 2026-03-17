//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class UIView;
@protocol UIConfigurationState, UIContentView;

@protocol UIContentConfiguration <NSObject, NSCopying>
- (id)updatedConfigurationForState:(id <UIConfigurationState>)arg1;
- (UIView<UIContentView> *)makeContentView;
@end


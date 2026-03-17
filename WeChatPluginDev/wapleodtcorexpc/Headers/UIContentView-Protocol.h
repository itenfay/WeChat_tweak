//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol UIContentConfiguration;

@protocol UIContentView <NSObject>
@property(copy, nonatomic) id <UIContentConfiguration> configuration;

@optional
- (_Bool)supportsConfiguration:(id <UIContentConfiguration>)arg1;
@end


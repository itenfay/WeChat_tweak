//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QL4Config, QMediator;

@interface QL4Manager : NSObject
{
    QL4Config *_config;
    QMediator *_mediator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
@property(retain, nonatomic) QL4Config *config; // @synthesize config=_config;
- (id)initWithMediator:(id)arg1;
- (void)writeConfigToLocalCache:(id)arg1;
- (id)loadConfigFromLocalCache;
- (id)l4ConfigPath;
- (void)enableConfig;
- (void)updateConfig:(id)arg1 writeToCache:(_Bool)arg2;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GameReddotManager : NSObject
{
    _Bool _beUseFinderReddot;
    _Bool _beBlocked;
}

- (void)syncReddot:(id)arg1;
- (void)blockGameReddot;
- (_Bool)beFrequancyControl;
- (void)finderReddotExit:(long long)arg1;
- (id)getCurrentReddot;
- (void)onFinderReload;
- (_Bool)useFinderReddot;
- (long long)convertStyle:(id)arg1;
- (void)setFinderReddotInfo:(id)arg1;
- (_Bool)checkCanUseFinderReddot;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TingPlayerManager;

@interface TingCrossplatformManager : NSObject
{
    TingPlayerManager *_playTaskController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingPlayerManager *playTaskController; // @synthesize playTaskController=_playTaskController;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)onManagerEnterForeground;
- (void)initCommonReddotSync;
- (void)initAffBizEnviroment;
- (id)affBizCommonPath;
- (id)initWithPlayerManager:(id)arg1;

@end


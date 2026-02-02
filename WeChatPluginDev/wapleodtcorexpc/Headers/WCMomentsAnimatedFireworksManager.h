//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCMomentsAnimatedFireworksManager
{
    NSArray *_animationFireworkImages;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *animationFireworkImages; // @synthesize animationFireworkImages=_animationFireworkImages;
- (void)clearAnimatedFireworkImages;
- (void)loadAnimatedFireworkImagesIfNeeded;
- (id)createAnimatedFireworkView;
- (void)onServiceMemoryWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


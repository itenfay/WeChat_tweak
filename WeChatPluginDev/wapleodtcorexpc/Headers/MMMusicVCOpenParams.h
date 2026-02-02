//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicInfo, MMMusicShareItem, NSString;

@interface MMMusicVCOpenParams : NSObject
{
    _Bool _forbidShowMinimizeWhenExitVC;
    int _commentScene;
    MMMusicInfo *_musicInfo;
    MMMusicShareItem *_shareItem;
    unsigned long long _scene;
    NSString *_sceneID;
    NSString *_sessionID;
    NSString *_sceneNote;
}

+ (void)initialize;
+ (void)PBArrayAdd_shareItem;
+ (void)PBArrayAdd_musicInfo;
- (void).cxx_destruct;
@property(nonatomic) _Bool forbidShowMinimizeWhenExitVC; // @synthesize forbidShowMinimizeWhenExitVC=_forbidShowMinimizeWhenExitVC;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMMusicShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
- (id)getPBPropertyTable;
- (unsigned long long)MMMusicStatistics_scene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


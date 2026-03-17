//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLandScapePlayerParam : NSObject
{
    _Bool _loopPlay;
    _Bool _hideStatusBarBG;
    _Bool _hideBullet;
    _Bool _shouldAdjustCollectionPostion;
    int _commentScene;
}

@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) _Bool shouldAdjustCollectionPostion; // @synthesize shouldAdjustCollectionPostion=_shouldAdjustCollectionPostion;
@property(nonatomic) _Bool hideBullet; // @synthesize hideBullet=_hideBullet;
@property(nonatomic) _Bool hideStatusBarBG; // @synthesize hideStatusBarBG=_hideStatusBarBG;
@property(nonatomic) _Bool loopPlay; // @synthesize loopPlay=_loopPlay;

@end


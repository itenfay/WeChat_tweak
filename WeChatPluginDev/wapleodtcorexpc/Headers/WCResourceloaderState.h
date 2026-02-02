//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCResourceloaderState : NSObject
{
    _Bool _bLiklyInResourceloaderBug;
    _Bool _bBugOccurAfterSeek;
    _Bool _bRecoverChecked;
    _Bool _bResetToSystemPlayer;
    unsigned int _bugOccurTime;
    unsigned int _seekTime;
    float _resourceloaderRespSec;
}

@property(nonatomic) float resourceloaderRespSec; // @synthesize resourceloaderRespSec=_resourceloaderRespSec;
@property(nonatomic) _Bool bResetToSystemPlayer; // @synthesize bResetToSystemPlayer=_bResetToSystemPlayer;
@property(nonatomic) _Bool bRecoverChecked; // @synthesize bRecoverChecked=_bRecoverChecked;
@property(nonatomic) unsigned int seekTime; // @synthesize seekTime=_seekTime;
@property(nonatomic) unsigned int bugOccurTime; // @synthesize bugOccurTime=_bugOccurTime;
@property(nonatomic) _Bool bBugOccurAfterSeek; // @synthesize bBugOccurAfterSeek=_bBugOccurAfterSeek;
@property(nonatomic) _Bool bLiklyInResourceloaderBug; // @synthesize bLiklyInResourceloaderBug=_bLiklyInResourceloaderBug;
- (_Bool)shouldCheckRecoverStateWithPreloadSec:(float)arg1;
- (void)resourceloaderliklyInBugState;
- (void)resetIndicators;

@end


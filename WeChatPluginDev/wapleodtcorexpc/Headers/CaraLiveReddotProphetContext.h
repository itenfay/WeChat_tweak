//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CaraLiveReddotProphetContext : NSObject
{
    _Bool _isReddotScoreValid;
    _Bool _isHomePageLoaded;
    float _reddotScore;
    int _preloadControlFlag;
    int _enterAction;
    float _predictProbThreshold;
    NSString *_anchor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) float predictProbThreshold; // @synthesize predictProbThreshold=_predictProbThreshold;
@property(readonly, nonatomic) _Bool isHomePageLoaded; // @synthesize isHomePageLoaded=_isHomePageLoaded;
@property(readonly, nonatomic) int enterAction; // @synthesize enterAction=_enterAction;
@property(readonly, nonatomic) int preloadControlFlag; // @synthesize preloadControlFlag=_preloadControlFlag;
@property(readonly, nonatomic) _Bool isReddotScoreValid; // @synthesize isReddotScoreValid=_isReddotScoreValid;
@property(readonly, nonatomic) float reddotScore; // @synthesize reddotScore=_reddotScore;
@property(readonly, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
- (id)zidl;
- (id)initWithAnchor:(id)arg1 reddotScore:(float)arg2 isReddotScoreValid:(_Bool)arg3 preloadControlFlag:(int)arg4 enterAction:(int)arg5 isHomePageLoaded:(_Bool)arg6 predictProbThreshold:(float)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


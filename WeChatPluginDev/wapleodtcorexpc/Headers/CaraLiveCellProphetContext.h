//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CaraLiveCellProphetContext : NSObject
{
    _Bool _isInHomePage;
    _Bool _isHomePageLoaded;
    float _predictProbThreshold;
}

@property(readonly, nonatomic) float predictProbThreshold; // @synthesize predictProbThreshold=_predictProbThreshold;
@property(readonly, nonatomic) _Bool isHomePageLoaded; // @synthesize isHomePageLoaded=_isHomePageLoaded;
@property(readonly, nonatomic) _Bool isInHomePage; // @synthesize isInHomePage=_isInHomePage;
- (id)zidl;
- (id)initWithIsInHomePage:(_Bool)arg1 isHomePageLoaded:(_Bool)arg2 predictProbThreshold:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


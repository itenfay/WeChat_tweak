//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderJumperProfileParams : NSObject
{
    _Bool _isSetFlag;
    int _tabType;
    NSString *_username;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSetFlag; // @synthesize isSetFlag=_isSetFlag;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


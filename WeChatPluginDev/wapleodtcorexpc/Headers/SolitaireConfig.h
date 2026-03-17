//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface SolitaireConfig : NSObject
{
    _Bool _isOpenEntry;
    _Bool _isOpenAnalysis;
    unsigned int _lastupTime;
}

@property(nonatomic) unsigned int lastupTime; // @synthesize lastupTime=_lastupTime;
@property(nonatomic) _Bool isOpenAnalysis; // @synthesize isOpenAnalysis=_isOpenAnalysis;
@property(nonatomic) _Bool isOpenEntry; // @synthesize isOpenEntry=_isOpenEntry;
- (id)init;

@end


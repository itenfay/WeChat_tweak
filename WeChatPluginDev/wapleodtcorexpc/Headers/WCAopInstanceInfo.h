//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCAopBlockImp;

@interface WCAopInstanceInfo : NSObject
{
    id _originObj;
    SEL _selector;
    NSArray *_beforeActions;
    WCAopBlockImp *_replaceBlock;
    NSArray *_afterActions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *afterActions; // @synthesize afterActions=_afterActions;
@property(retain, nonatomic) WCAopBlockImp *replaceBlock; // @synthesize replaceBlock=_replaceBlock;
@property(retain, nonatomic) NSArray *beforeActions; // @synthesize beforeActions=_beforeActions;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id originObj; // @synthesize originObj=_originObj;
- (void)dealloc;
- (void)clear;
- (_Bool)isClear;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WCFinderExtraInfoToken : NSObject
{
    _Bool _hasClean;
    CDUnknownBlockType _cleanupBlock;
    NSDictionary *_appendDict;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasClean; // @synthesize hasClean=_hasClean;
@property(retain, nonatomic) NSDictionary *appendDict; // @synthesize appendDict=_appendDict;
@property(copy, nonatomic) CDUnknownBlockType cleanupBlock; // @synthesize cleanupBlock=_cleanupBlock;
- (void)clean;
- (void)dealloc;

@end


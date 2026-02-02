//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WeSVGTokenHelper : NSObject
{
    NSMutableDictionary *_tokenDict;
}

+ (id)tokenNameForOldToken:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *tokenDict; // @synthesize tokenDict=_tokenDict;
- (id)tokenNameForOldToken:(id)arg1;
- (void)initData;
- (id)init;

@end


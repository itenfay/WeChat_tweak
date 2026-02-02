//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PatSuffixWrap : NSObject
{
    NSString *_patSuffix;
    unsigned long long _templeteVersion;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long templeteVersion; // @synthesize templeteVersion=_templeteVersion;
@property(retain, nonatomic) NSString *patSuffix; // @synthesize patSuffix=_patSuffix;

@end


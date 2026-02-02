//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveSemanticVersion : NSObject
{
    unsigned long long _major;
    unsigned long long _minor;
    unsigned long long _patch;
    NSString *_previewTag;
    NSString *_buildTag;
}

+ (id)semanticVersionFromString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *buildTag; // @synthesize buildTag=_buildTag;
@property(retain, nonatomic) NSString *previewTag; // @synthesize previewTag=_previewTag;
@property(nonatomic) unsigned long long patch; // @synthesize patch=_patch;
@property(nonatomic) unsigned long long minor; // @synthesize minor=_minor;
@property(nonatomic) unsigned long long major; // @synthesize major=_major;
- (id)description;

@end


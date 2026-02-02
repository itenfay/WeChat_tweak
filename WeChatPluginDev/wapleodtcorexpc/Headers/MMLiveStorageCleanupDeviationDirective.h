//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveStorageCleanupDeviationDirective : NSObject
{
    unsigned long long _type;
    NSString *_path;
    long long _pathComponentCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long pathComponentCount; // @synthesize pathComponentCount=_pathComponentCount;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end


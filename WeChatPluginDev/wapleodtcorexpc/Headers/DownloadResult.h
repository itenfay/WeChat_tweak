//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface DownloadResult : NSObject
{
    NSNumber *_code;
    NSString *_path;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithCode:(id)arg1 path:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSNumber *code; // @synthesize code=_code;
- (id)toList;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJModelInfo : NSObject
{
    NSString *_name;
    NSString *_filePath;
    NSString *_version;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)initWithName:(id)arg1 filePath:(id)arg2 version:(id)arg3;

@end


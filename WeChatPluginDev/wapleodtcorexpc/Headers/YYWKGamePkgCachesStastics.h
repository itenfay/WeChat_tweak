//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface YYWKGamePkgCachesStastics : NSObject
{
    NSMutableArray *_recordArray;
    NSString *_mainUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mainUrl; // @synthesize mainUrl=_mainUrl;
@property(retain, nonatomic) NSMutableArray *recordArray; // @synthesize recordArray=_recordArray;
- (id)description;
- (void)addRecord:(id)arg1 mainUrl:(id)arg2 data:(id)arg3;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlowListFinderItemData : NSObject
{
    NSString *_finderExportId;
    NSString *_username;
    NSString *_nickname;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFinderExportId:(id)arg1 username:(id)arg2 nickname:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *finderExportId; // @synthesize finderExportId=_finderExportId;
- (id)toList;

@end


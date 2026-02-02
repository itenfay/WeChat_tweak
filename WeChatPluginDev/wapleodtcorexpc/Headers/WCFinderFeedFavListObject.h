//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedFavListInfoArray;

@interface WCFinderFeedFavListObject : NSObject
{
    NSString *_tid;
    double _cacheTime;
    WCFinderFeedFavListInfoArray *_favInfoFirstPageArray;
}

+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_favInfoFirstPageArray;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)favInfoFirstPageArray;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedFavListInfoArray *favInfoFirstPageArray; // @synthesize favInfoFirstPageArray=_favInfoFirstPageArray;
@property(nonatomic) double cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, WCFinderRedDotCtrlInfo, WCFinderRedDotTipsShowInfo;

@interface _TtC6WeChat8WSReddot : NSObject
{
    MISSING_TYPE *tipId;
    MISSING_TYPE *tabType;
    MISSING_TYPE *path;
    MISSING_TYPE *$__lazy_storage_$_childNodes;
    MISSING_TYPE *$__lazy_storage_$_leafNodes;
    MISSING_TYPE *$__lazy_storage_$_number;
    MISSING_TYPE *byPassInfoData;
    MISSING_TYPE *$__lazy_storage_$_byPassInfo;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) _Bool showInDiscoverPage;
- (id)stringValue;
@property(nonatomic, readonly) WCFinderRedDotCtrlInfo *ctrlInfo;
@property(nonatomic, readonly) WCFinderRedDotTipsShowInfo *showInfo;
@property(nonatomic, copy) NSString *byPassInfo;
@property(nonatomic) long long number;
@property(nonatomic, copy) NSArray *leafNodes;
@property(nonatomic, copy) NSArray *childNodes;
@property(nonatomic, readonly) NSString *path;
@property(nonatomic, readonly) int tabType; // @synthesize tabType;
@property(nonatomic, readonly) NSString *tipId;

@end


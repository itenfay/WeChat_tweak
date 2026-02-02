//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _TtC6WeChat21WSFlowListLiteAppInfo, _TtC6WeChat24WSFlowListFinderFeedInfo;

@interface _TtC6WeChat19WSFlowListCellModel : NSObject
{
    MISSING_TYPE *type;
    MISSING_TYPE *liteAppInfo;
    MISSING_TYPE *finderFeedInfo;
    MISSING_TYPE *extInfo;
    MISSING_TYPE *topText;
    MISSING_TYPE *tailText;
    MISSING_TYPE *identifier;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSString *identifier;
@property(nonatomic, copy) NSString *tailText;
@property(nonatomic, copy) NSString *topText;
@property(nonatomic, copy) NSString *extInfo;
@property(nonatomic, retain) _TtC6WeChat24WSFlowListFinderFeedInfo *finderFeedInfo; // @synthesize finderFeedInfo;
@property(nonatomic, retain) _TtC6WeChat21WSFlowListLiteAppInfo *liteAppInfo; // @synthesize liteAppInfo;
@property(nonatomic) unsigned long long type; // @synthesize type;

@end


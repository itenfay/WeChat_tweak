//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSString;

@interface _TtC6WeChat23WSSearchProcessReporter
{
    MISSING_TYPE *actionType;
    MISSING_TYPE *scene;
    MISSING_TYPE *sessionId;
    MISSING_TYPE *subSessionId;
    MISSING_TYPE *searchId;
    MISSING_TYPE *offset;
    MISSING_TYPE *isHomePage;
    MISSING_TYPE *requestId;
    MISSING_TYPE *successType;
    MISSING_TYPE *query;
    MISSING_TYPE *tagId;
    MISSING_TYPE *bizType;
    MISSING_TYPE *h5Version;
    MISSING_TYPE *isPreload;
}

- (void).cxx_destruct;
- (id)init;
- (void)report:(int)arg1 with:(id)arg2;
- (void)report:(int)arg1;
- (void)doReport;
- (unsigned int)reportKvId;
- (void)assignValueWith:(id)arg1;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload;
@property(nonatomic) int successType; // @synthesize successType;
@property(nonatomic) _Bool isHomePage; // @synthesize isHomePage;
@property(nonatomic, copy) NSString *sessionId;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(nonatomic) int actionType; // @synthesize actionType;

@end


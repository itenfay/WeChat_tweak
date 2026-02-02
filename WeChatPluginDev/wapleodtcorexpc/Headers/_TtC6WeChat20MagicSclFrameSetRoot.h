//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC6WeChat20MagicSclFrameSetRoot : NSObject
{
    MISSING_TYPE *target;
    MISSING_TYPE *appId;
    MISSING_TYPE *instanceName;
    MISSING_TYPE *appContextId;
    MISSING_TYPE *path;
    MISSING_TYPE *query;
    MISSING_TYPE *useClientClick;
    MISSING_TYPE *rootId;
    MISSING_TYPE *delegate;
    MISSING_TYPE *boundFrameSets;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (void)resume;
- (void)pause;
- (void)redraw;
- (void)dataChangeWithData:(id)arg1 extInfo:(id)arg2;
- (void)dataChangeWithSpecificFrameSetNameWithData:(id)arg1 frameSetName:(id)arg2 extInfo:(id)arg3;
- (id)getOrCreateFrameSetWithFrameSetName:(id)arg1;
@property(nonatomic, readonly) NSString *rootId;

@end


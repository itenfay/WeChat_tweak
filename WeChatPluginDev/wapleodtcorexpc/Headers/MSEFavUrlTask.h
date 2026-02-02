//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MSEFavUrlTask : NSObject
{
    NSString *_title;
    NSString *_contentUrl;
    NSString *_taskID;
}

+ (void)initialize;
+ (void)PBArrayAdd_taskID;
+ (void)PBArrayAdd_contentUrl;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


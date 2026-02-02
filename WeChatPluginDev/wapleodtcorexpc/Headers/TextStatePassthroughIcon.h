//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStatePassthroughIcon : NSObject
{
    unsigned int _beginTime;
    unsigned int _endTime;
    NSString *_iconId;
}

+ (void)initialize;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_beginTime;
+ (void)PBArrayAdd_iconId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
- (id)identifier;
- (_Bool)isActive;
- (id)initWithIcon:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


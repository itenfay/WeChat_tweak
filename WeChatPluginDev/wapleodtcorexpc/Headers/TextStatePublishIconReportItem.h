//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStatePublishIconReportItem : NSObject
{
    unsigned int _iconType;
    unsigned int _isFromRecentUse;
    NSString *_iconId;
    NSString *_iconCustomDescription;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_isFromRecentUse;
+ (void)PBArrayAdd_iconType;
+ (void)PBArrayAdd_iconCustomDescription;
+ (void)PBArrayAdd_iconId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int isFromRecentUse; // @synthesize isFromRecentUse=_isFromRecentUse;
@property(nonatomic) unsigned int iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) NSString *iconCustomDescription; // @synthesize iconCustomDescription=_iconCustomDescription;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
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


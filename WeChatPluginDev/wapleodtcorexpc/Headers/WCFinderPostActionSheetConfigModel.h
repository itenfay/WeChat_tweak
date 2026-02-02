//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPostActionSheetConfigModel : NSObject
{
    NSString *_title;
    NSString *_icon;
    NSString *_desc;
    unsigned long long _type;
    NSString *_value;
    NSString *_universalLink;
    NSString *_appstoreScheme;
    NSString *_extInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_appstoreScheme;
+ (void)PBArrayAdd_universalLink;
+ (void)PBArrayAdd_value;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_icon;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *appstoreScheme; // @synthesize appstoreScheme=_appstoreScheme;
@property(copy, nonatomic) NSString *universalLink; // @synthesize universalLink=_universalLink;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithPostActionSheetConfig:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


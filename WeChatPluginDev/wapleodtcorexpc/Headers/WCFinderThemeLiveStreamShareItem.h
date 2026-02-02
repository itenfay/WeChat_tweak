//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderThemeLiveStreamShareItem : NSObject
{
    NSString *_mainTitle;
    NSString *_subTitle;
    NSString *_imgUrl;
    NSString *_themeId;
}

+ (void)initialize;
+ (void)PBArrayAdd_themeId;
+ (void)PBArrayAdd_imgUrl;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_mainTitle;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *themeId; // @synthesize themeId=_themeId;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


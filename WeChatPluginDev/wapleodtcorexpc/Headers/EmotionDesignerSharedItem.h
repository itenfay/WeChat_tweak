//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EmotionDesignerSharedItem : NSObject
{
    unsigned int _designerUin;
    NSString *_oldRedirectUrl;
    NSString *_designerName;
}

+ (void)initialize;
+ (void)PBArrayAdd_designerName;
+ (void)PBArrayAdd_oldRedirectUrl;
+ (void)PBArrayAdd_designerUin;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *designerName; // @synthesize designerName=_designerName;
@property(retain, nonatomic) NSString *oldRedirectUrl; // @synthesize oldRedirectUrl=_oldRedirectUrl;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin=_designerUin;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


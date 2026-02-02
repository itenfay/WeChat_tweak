//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTopicShareTemplateItem : NSObject
{
    NSString *_templateTopicId;
    unsigned long long _templateType;
}

+ (void)initialize;
+ (void)PBArrayAdd_templateType;
+ (void)PBArrayAdd_templateTopicId;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *templateTopicId; // @synthesize templateTopicId=_templateTopicId;
@property(readonly, copy) NSString *description;
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

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


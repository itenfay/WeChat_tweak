//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMomentsBizInfo : NSObject
{
    NSString *_encodedExcerptUrl;
}

+ (id)fromXMLParentNode:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_encodedExcerptUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *encodedExcerptUrl; // @synthesize encodedExcerptUrl=_encodedExcerptUrl;
- (id)toXML;
- (_Bool)canShowOriginalArticleSource;
- (id)openUrl;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


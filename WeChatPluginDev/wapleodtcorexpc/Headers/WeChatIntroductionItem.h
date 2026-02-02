//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WeChatIntroductionItem : NSObject
{
    NSArray *_introductionList;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)itemFromXml:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *introductionList; // @synthesize introductionList=_introductionList;
- (id)toXML;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMContext, NSString;

@interface MJTemplateServiceProvider : NSObject
{
    MMContext *_mmContext;
    unsigned long long _templateType;
    CDUnknownBlockType _getSceneBlock;
}

+ (id)hardcodeMetaDataWithTemplateId:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType getSceneBlock; // @synthesize getSceneBlock=_getSceneBlock;
@property(nonatomic) unsigned long long templateType; // @synthesize templateType=_templateType;
- (void)requestTemplateMetadataWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


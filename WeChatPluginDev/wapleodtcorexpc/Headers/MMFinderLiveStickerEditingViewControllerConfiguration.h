//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveStickerTextTemplateResourceRepository, OMJLowerThirdImageGenerator;

@interface MMFinderLiveStickerEditingViewControllerConfiguration : NSObject
{
    _Bool _forceReplacingContent;
    _Bool _forceResetTransformation;
    unsigned long long _operationMode;
    OMJLowerThirdImageGenerator *_lowerThirdGenerator;
    MMFinderLiveStickerTextTemplateResourceRepository *_textTemplateResources;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveStickerTextTemplateResourceRepository *textTemplateResources; // @synthesize textTemplateResources=_textTemplateResources;
@property(retain, nonatomic) OMJLowerThirdImageGenerator *lowerThirdGenerator; // @synthesize lowerThirdGenerator=_lowerThirdGenerator;
@property(nonatomic) unsigned long long operationMode; // @synthesize operationMode=_operationMode;
@property(nonatomic) _Bool forceResetTransformation; // @synthesize forceResetTransformation=_forceResetTransformation;
@property(nonatomic) _Bool forceReplacingContent; // @synthesize forceReplacingContent=_forceReplacingContent;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


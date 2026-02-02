//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveStickerTextTemplateResourceRepository, NSString, OMJLowerThirdImageGenerator;

@interface MMFinderLiveTemplatedTextStickerImageProvider : NSObject
{
    OMJLowerThirdImageGenerator *_generator;
    MMFinderLiveStickerTextTemplateResourceRepository *_resources;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveStickerTextTemplateResourceRepository *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) OMJLowerThirdImageGenerator *generator; // @synthesize generator=_generator;
- (void)createImageWithStickerItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithLowerThirdImageGenerator:(id)arg1 resources:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


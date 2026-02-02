//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveStickerTextTemplateRemoteDeliveredResourcesFetchingRootAction, NSArray, NSMutableDictionary;

@interface MMFinderLiveStickerTextTemplateResourceRepository : NSObject
{
    NSArray *_templateItems;
    NSMutableDictionary *_templateFonts;
    MMFinderLiveStickerTextTemplateRemoteDeliveredResourcesFetchingRootAction *_fetcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveStickerTextTemplateRemoteDeliveredResourcesFetchingRootAction *fetcher; // @synthesize fetcher=_fetcher;
@property(retain, nonatomic) NSMutableDictionary *templateFonts; // @synthesize templateFonts=_templateFonts;
@property(retain, nonatomic) NSArray *templateItems; // @synthesize templateItems=_templateItems;
- (id)createFetcher;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getResourceForTextTemplateFontWithResourceId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getResourceForTextTemplate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateWithBackendEntitiesForTextTemplates:(id)arg1 templateFonts:(id)arg2;

@end


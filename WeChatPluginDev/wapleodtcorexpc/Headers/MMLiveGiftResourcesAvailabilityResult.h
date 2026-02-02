//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMLiveGiftResourcesAvailabilityResult : NSObject
{
    NSArray *_missingGifts;
    NSArray *_missingResources;
    NSArray *_availableResources;
    NSArray *_resourceDownloadWorkItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *resourceDownloadWorkItems; // @synthesize resourceDownloadWorkItems=_resourceDownloadWorkItems;
@property(retain, nonatomic) NSArray *availableResources; // @synthesize availableResources=_availableResources;
@property(retain, nonatomic) NSArray *missingResources; // @synthesize missingResources=_missingResources;
@property(retain, nonatomic) NSArray *missingGifts; // @synthesize missingGifts=_missingGifts;

@end


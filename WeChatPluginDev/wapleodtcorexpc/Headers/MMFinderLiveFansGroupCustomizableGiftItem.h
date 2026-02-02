//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveAnchorCustomGiftInfo_CustomItem, FinderLiveFanClubCustomGift, MMFinderLiveFansGroupCustomizableGiftColorVariant, NSArray, NSString;

@interface MMFinderLiveFansGroupCustomizableGiftItem : NSObject
{
    NSArray *_colorVariants;
    MMFinderLiveFansGroupCustomizableGiftColorVariant *_selectedVariant;
    FinderLiveFanClubCustomGift *_customizableGift;
    FinderLiveAnchorCustomGiftInfo_CustomItem *_customizationItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveAnchorCustomGiftInfo_CustomItem *customizationItem; // @synthesize customizationItem=_customizationItem;
@property(retain, nonatomic) FinderLiveFanClubCustomGift *customizableGift; // @synthesize customizableGift=_customizableGift;
@property(retain, nonatomic) MMFinderLiveFansGroupCustomizableGiftColorVariant *selectedVariant; // @synthesize selectedVariant=_selectedVariant;
@property(retain, nonatomic) NSArray *colorVariants; // @synthesize colorVariants=_colorVariants;
- (void)decrementRemainingChangeCount;
- (id)customizationItemWithCurrentState;
@property(readonly, nonatomic) _Bool customizationTypeSupported;
@property(retain, nonatomic) NSString *attachedText;
@property(readonly, nonatomic) unsigned long long textAttachmentMaxLength;
@property(readonly, nonatomic) _Bool changeThrottled;
@property(readonly, nonatomic) unsigned long long maximumChangeCount;
@property(readonly, nonatomic) _Bool supportsTextAttachment;
@property(readonly, nonatomic) _Bool supportsColorCustomization;
@property(readonly, nonatomic) float selectedVariantWebeansValue;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *customizableGiftId;
- (id)initWithCustomizableGift:(id)arg1 customizationItem:(id)arg2 resourceFetcher:(id)arg3;

@end


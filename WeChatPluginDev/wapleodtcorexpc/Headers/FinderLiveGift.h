//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AnchorSwitchSkinInfo, CustomGiftInfo, FinderJumpInfo, FinderLiveGiftBatchGiveConfigList, FinderLiveGift_ForegroundInfo, FinderLiveGift_SwitchSkinInfo, NSData, NSMutableArray, NSString;

@interface FinderLiveGift : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AnchorSwitchSkinInfo *anchorSwitchSkinInfo; // @dynamic anchorSwitchSkinInfo;
@property(retain, nonatomic) NSString *animationPagMd5; // @dynamic animationPagMd5;
@property(retain, nonatomic) NSString *animationPagUrl; // @dynamic animationPagUrl;
@property(retain, nonatomic) FinderLiveGiftBatchGiveConfigList *batchGiveConfigList; // @dynamic batchGiveConfigList;
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(retain, nonatomic) CustomGiftInfo *customGiftInfo; // @dynamic customGiftInfo;
@property(retain, nonatomic) NSData *customInfo; // @dynamic customInfo;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(nonatomic) _Bool disableCombo; // @dynamic disableCombo;
@property(nonatomic) unsigned long long durationTime; // @dynamic durationTime;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(retain, nonatomic) FinderLiveGift_ForegroundInfo *foregroundInfo; // @dynamic foregroundInfo;
@property(nonatomic) unsigned int freeGiftSeq; // @dynamic freeGiftSeq;
@property(nonatomic) unsigned int giftType; // @dynamic giftType;
@property(retain, nonatomic) NSString *interactiveGiftMd5; // @dynamic interactiveGiftMd5;
@property(retain, nonatomic) NSString *interactiveGiftUrl; // @dynamic interactiveGiftUrl;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *landscapeAnimationPagMd5; // @dynamic landscapeAnimationPagMd5;
@property(retain, nonatomic) NSString *landscapeAnimationPagUrl; // @dynamic landscapeAnimationPagUrl;
@property(retain, nonatomic) NSMutableArray *multiAnimationList; // @dynamic multiAnimationList;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) _Bool needUnlock; // @dynamic needUnlock;
@property(retain, nonatomic) NSString *previewPagMd5; // @dynamic previewPagMd5;
@property(retain, nonatomic) NSString *previewPagUrl; // @dynamic previewPagUrl;
@property(nonatomic) float price; // @dynamic price;
@property(retain, nonatomic) NSString *rewardProductId; // @dynamic rewardProductId;
@property(retain, nonatomic) FinderLiveGift_SwitchSkinInfo *switchSkinInfo; // @dynamic switchSkinInfo;
@property(retain, nonatomic) NSString *tagColor; // @dynamic tagColor;
@property(retain, nonatomic) NSString *tagText; // @dynamic tagText;
@property(retain, nonatomic) NSString *thumbnailFileMd5; // @dynamic thumbnailFileMd5;
@property(retain, nonatomic) NSString *thumbnailFileUrl; // @dynamic thumbnailFileUrl;
@property(nonatomic) unsigned int unlockGlobalRewardLevel; // @dynamic unlockGlobalRewardLevel;
@property(nonatomic) unsigned int unlockIntimacyLevel; // @dynamic unlockIntimacyLevel;
@property(nonatomic) _Bool useRfxPag; // @dynamic useRfxPag;

@end


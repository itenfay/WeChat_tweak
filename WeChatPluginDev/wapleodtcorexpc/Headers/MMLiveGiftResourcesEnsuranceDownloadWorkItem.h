//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRewardGiftItem, MMLiveGiftResourceDescriptor, NSString;

@interface MMLiveGiftResourcesEnsuranceDownloadWorkItem : NSObject
{
    MMLiveGiftResourceDescriptor *_resourceDescriptor;
    MMFinderLiveRewardGiftItem *_giftItem;
    NSString *_fileUri;
    NSString *_fileMd5Hash;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fileMd5Hash; // @synthesize fileMd5Hash=_fileMd5Hash;
@property(retain, nonatomic) NSString *fileUri; // @synthesize fileUri=_fileUri;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(retain, nonatomic) MMLiveGiftResourceDescriptor *resourceDescriptor; // @synthesize resourceDescriptor=_resourceDescriptor;
@property(readonly, nonatomic) NSString *resourceId;
@property(readonly, nonatomic) long long resourceType;
- (id)initWithResourceDescriptor:(id)arg1 giftItem:(id)arg2;

@end


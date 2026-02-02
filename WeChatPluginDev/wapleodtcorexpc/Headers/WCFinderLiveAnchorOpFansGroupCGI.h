//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveAnchorCustomGiftInfo_CustomItem, NSString;

@interface WCFinderLiveAnchorOpFansGroupCGI
{
    unsigned long long _opType;
    NSString *_fansGroupName;
    FinderLiveAnchorCustomGiftInfo_CustomItem *_giftCustomizationItem;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) FinderLiveAnchorCustomGiftInfo_CustomItem *giftCustomizationItem; // @synthesize giftCustomizationItem=_giftCustomizationItem;
@property(retain, nonatomic) NSString *fansGroupName; // @synthesize fansGroupName=_fansGroupName;
@property(nonatomic) unsigned long long opType; // @synthesize opType=_opType;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (int)wireFormatOpCodeWithCgiOpType:(unsigned long long)arg1;
- (id)newRequest;
- (void)createCustomizableGiftModificationRequest;
- (void)createGroupCreationOrNameModificationRequest;
- (void)createBulletinRequestWithNotice:(id)arg1 imageUrl:(id)arg2 levelRequired:(unsigned long long)arg3 visibility:(unsigned int)arg4;
- (void)createModContactRequestEnable:(_Bool)arg1 visibility:(unsigned int)arg2;
- (void)commonInit;
- (id)initEnableAnochrCard:(_Bool)arg1 visibility:(unsigned int)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (id)initModifyFansGroupNoticeWithNotice:(id)arg1 imageUrl:(id)arg2 levelRequired:(unsigned long long)arg3 visibility:(unsigned int)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (id)initCustomizeFansGroupGiftWithCustomizableGiftId:(id)arg1 selectedProductId:(id)arg2 textAttachment:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (id)initModifyFansGroupNameWithGroupName:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (id)initCreateFansGroupWithGroupName:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;

@end


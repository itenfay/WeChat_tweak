//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class UserIdAuthorizePageInfo, WAUserIdPageSheetViewModel, WXAPhoneInfo;

@interface WAAuthorizeUserIdPageSheet : NSObject
{
    UserIdAuthorizePageInfo *_pageInfo;
    WXAPhoneInfo *_selectedItem;
    CDUnknownBlockType _managerPhoneNumberAction;
    WAUserIdPageSheetViewModel *_uidViewModel;
}

@property(retain, nonatomic) WAUserIdPageSheetViewModel *uidViewModel; // @synthesize uidViewModel=_uidViewModel;
@property(copy, nonatomic) CDUnknownBlockType managerPhoneNumberAction; // @synthesize managerPhoneNumberAction=_managerPhoneNumberAction;
@property(retain, nonatomic) WXAPhoneInfo *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) UserIdAuthorizePageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
- (id)subViewModel;
- (id)customSubviewClassList;
- (id)initWithPageInfo:(id)arg1;

@end

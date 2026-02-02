//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayPaidDetailJumpInfo, WCPayPaidDetailLogoViewData;

@interface WCPayPaidDetailLeadTailViewData : NSObject
{
    WCPayPaidDetailLogoViewData *_unsettled_logo;
    WCPayPaidDetailLogoViewData *_settled_logo;
    NSString *_desc;
    WCPayPaidDetailJumpInfo *_jump_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayPaidDetailJumpInfo *jump_info; // @synthesize jump_info=_jump_info;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) WCPayPaidDetailLogoViewData *settled_logo; // @synthesize settled_logo=_settled_logo;
@property(retain, nonatomic) WCPayPaidDetailLogoViewData *unsettled_logo; // @synthesize unsettled_logo=_unsettled_logo;

@end


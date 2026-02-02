//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SWMidasPurchaseOption : NSObject
{
    MISSING_TYPE *shouldContinueWhenStorefrontChanged;
    MISSING_TYPE *shouldShowHudTextWhenProcessing;
    MISSING_TYPE *iOS15PreferredReceiptType;
    MISSING_TYPE *metaTrackEventID;
    MISSING_TYPE *shouldHideMidasSandboxAlert;
    MISSING_TYPE *shouldStopPaymentWhenSameProductNeedReproviding;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithShouldContinueWhenStorefrontChanged:(_Bool)arg1 shouldShowHudTextWhenProcessing:(_Bool)arg2 iOS15PreferredReceiptType:(long long)arg3 metaTrackEventID:(id)arg4;
@property(nonatomic) _Bool shouldStopPaymentWhenSameProductNeedReproviding; // @synthesize shouldStopPaymentWhenSameProductNeedReproviding;
@property(nonatomic) _Bool shouldHideMidasSandboxAlert; // @synthesize shouldHideMidasSandboxAlert;
@property(nonatomic, readonly) NSString *metaTrackEventID;
@property(nonatomic, readonly) long long iOS15PreferredReceiptType; // @synthesize iOS15PreferredReceiptType;
@property(nonatomic, readonly) _Bool shouldShowHudTextWhenProcessing; // @synthesize shouldShowHudTextWhenProcessing;
@property(nonatomic, readonly) _Bool shouldContinueWhenStorefrontChanged; // @synthesize shouldContinueWhenStorefrontChanged;

@end


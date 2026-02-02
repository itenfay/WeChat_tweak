//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WCPayPassKitFacadeDelegate;

@interface WCPayPassKitFacade : NSObject
{
    id <WCPayPassKitFacadeDelegate> _delegate;
}

+ (id)GenCurrentDeviceInfo;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayPassKitFacadeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkIssueCardPermissionWithSpecificCardType:(id)arg1 appId:(id)arg2 iOSVersion:(double)arg3;
- (_Bool)isPassLibraryAvailable;
- (id)allPasses;
- (id)getPKPass:(id)arg1;
- (long long)getNFCCardTransitBalance:(id)arg1;
- (id)getAllLocalSimplePasses:(_Bool)arg1;

@end


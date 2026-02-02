//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WSComplianceChecker : NSObject
{
}

+ (void)ReportPopupWindowForInteraction:(unsigned long long)arg1 scene:(unsigned long long)arg2 action:(unsigned long long)arg3;
- (id)genDialogForInteraction:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (_Bool)isAuthorizdForInteraction:(unsigned long long)arg1;
- (id)storageKeyForInteraction:(unsigned long long)arg1;
- (void)requestAuthorizationForInteraction:(unsigned long long)arg1 scene:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end


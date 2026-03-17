//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, CPushContact, NSString, OpenIMArchivePopUpInfo;

@protocol IOpenImContactMgrExt <NSObject>

@optional
- (void)onUpdateOpenIMStorageArchivePopUp:(NSString *)arg1 privacyAgreementUrl:(NSString *)arg2 success:(_Bool)arg3 errMsg:(NSString *)arg4;
- (void)onGetOpenIMArchivePopUpInfo:(NSString *)arg1 archivePopUpInfo:(OpenIMArchivePopUpInfo *)arg2 success:(_Bool)arg3 errMsg:(NSString *)arg4;
- (void)onOpenIMStorageArchivePopUp:(NSString *)arg1 privacyAgreementUrl:(NSString *)arg2;
- (void)onDisableContactVerifyByOpenIMFriReqAcceptedInWxWork:(CPushContact *)arg1;
- (void)onOpenImGetContactOpenUrlDone:(NSString *)arg1 openUrl:(NSString *)arg2 errorTip:(NSString *)arg3 scene:(unsigned int)arg4;
- (void)onOpenImGetContactDone:(NSString *)arg1 contact:(CContact *)arg2;
@end


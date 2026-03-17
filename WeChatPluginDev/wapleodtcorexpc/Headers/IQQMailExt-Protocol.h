//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMail, NSArray, NSMutableArray, NSString;

@protocol IQQMailExt

@optional
- (void)OnGetSearchResultForInput:(NSString *)arg1 contacts:(NSMutableArray *)arg2;
- (void)OnComposeSendWithEventId:(NSString *)arg1 errorCode:(int)arg2 errMsg:(NSString *)arg3;
- (void)OnUploadData:(NSString *)arg1 filename:(NSString *)arg2 errorCode:(int)arg3 errMsg:(NSString *)arg4;
- (void)OnSetMailUnreadWithMailId:(NSString *)arg1 errMsg:(NSString *)arg2;
- (void)OnGetMail:(CMail *)arg1 mailId:(NSString *)arg2 errMsg:(NSString *)arg3;
- (void)OnGetMailUnreadCount:(int)arg1;
- (void)OnGetAllMailContact:(NSArray *)arg1 ErrNo:(int)arg2;
@end


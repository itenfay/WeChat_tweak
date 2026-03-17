//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSDictionary, NSString, StatusCommentMessageThumb;

@protocol TextStateBaseNotifyInfo <NSObject>
- (StatusCommentMessageThumb *)messageThumbData;
- (NSDictionary *)notifyListReportParams;
- (CContact *)profileContact;
- (NSString *)extInfo;
- (unsigned int)createTime;
- (NSString *)username;
- (NSString *)statusID;

@optional
- (NSString *)encodeUsername;
- (NSString *)headImageUrl;
@end


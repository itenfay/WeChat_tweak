//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMemberShipDetailInfoRequestParam : NSObject
{
    _Bool _isPreviewMode;
    int _commentScene;
    NSString *_finderUsername;
    NSString *_liveNoticeEncryptedId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *liveNoticeEncryptedId; // @synthesize liveNoticeEncryptedId=_liveNoticeEncryptedId;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (id)description;

@end


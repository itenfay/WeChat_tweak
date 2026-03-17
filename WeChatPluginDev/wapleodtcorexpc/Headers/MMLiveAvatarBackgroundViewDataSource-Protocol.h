//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMLiveAvatarBackgroundViewDataSource <NSObject>
@property(readonly, nonatomic) NSString *anchorIdentityId;
@property(readonly, nonatomic) _Bool isKtvMode;
@property(readonly, nonatomic) _Bool isAnchor;
@property(readonly, nonatomic) NSString *coverImageUri;
@property(readonly, nonatomic) NSString *adCoverImageUri;
@end


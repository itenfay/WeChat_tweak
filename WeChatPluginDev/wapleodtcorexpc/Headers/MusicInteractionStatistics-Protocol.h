//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MusicInteractionStatistics <NSObject>
@property(readonly, nonatomic) _Bool isSelfLiked;
@property(readonly, nonatomic) unsigned long long forwardCount;
@property(readonly, nonatomic) unsigned long long likeCount;
@property(readonly, nonatomic) unsigned long long commentCount;
@property(readonly, nonatomic) NSString *musicInteractionidentifier;
- (_Bool)isValidMusicInteractionStatistics;
@end


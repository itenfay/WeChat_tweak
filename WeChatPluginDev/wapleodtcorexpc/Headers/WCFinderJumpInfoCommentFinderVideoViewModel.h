//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WCFinderJumpInfoCommentFinderVideoViewModel : NSObject
{
    _Bool _showPlayIcon;
    _Bool _showLikeIcon;
    NSURL *_coverURL;
    NSString *_likeCount;
    long long _displayType;
}

+ (id)modelWithData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(copy, nonatomic) NSString *likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool showLikeIcon; // @synthesize showLikeIcon=_showLikeIcon;
@property(nonatomic) _Bool showPlayIcon; // @synthesize showPlayIcon=_showPlayIcon;
@property(retain, nonatomic) NSURL *coverURL; // @synthesize coverURL=_coverURL;
- (_Bool)isEqualToModel:(id)arg1;

@end

